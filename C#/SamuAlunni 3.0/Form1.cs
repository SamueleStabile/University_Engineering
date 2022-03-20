using System;
using System.Collections.Generic;
using System.ComponentModel;
using System.Data;
using System.Drawing;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using System.Windows.Forms;
using System.Diagnostics;

namespace Alunni_Samu
{
    public partial class Ciao : Form
    {
        //VARIABILI GLOBALI
        int numA = 0; //counter alunni
        const int maxA = 30; 

        //CREA L'ARRAY Classe4A[] con num di 30 oggetti di tipo alunni
        alunni[] classe4A = new alunni[maxA];
        
        public Ciao()
        {
            InitializeComponent();
        }
        
        private void btn_inserisci_Click(object sender, EventArgs e)
        {

            InsertData();

        }

        private void InsertData()
        {
            //Variabili Locali

            string nomeAlunno;

            //CONTROLLO 1

            if (numA == maxA)
                MessageBox.Show("Classe piena, impossibile aggiungere altri alunni","Attenzione", MessageBoxButtons.OK, MessageBoxIcon.Exclamation);

            //CONTROLLO 2    
            
            else if (txtbx_nomeAlunno.TextLength == 0)
            {
                MessageBox.Show("Non hai inserito un nome ", "Attenzione", MessageBoxButtons.OK, MessageBoxIcon.Exclamation);
            }

            else
            {
                //INSERIMENTO NUOVO ALUNNO 
                nomeAlunno = txtbx_nomeAlunno.Text;
                //Instanzio la classe 
                classe4A[numA] = new alunni(nomeAlunno);
                //Aggiungo l'alunno alla Listbox
                listbx_ElencoAlunni.Items.Add(classe4A[numA].cercaNome());
                //Incremento il numero di alunni inseriti e aggiorno il contatore sulla Form
                numA++;
                //Aggiornamento contatore del totale degli alunni           
                txtbx_TotAlunni.Text = numA.ToString();
                //Cancello i caratteri nella textbox 
                txtbx_nomeAlunno.Text = "";


            }

        }

        private void txtbx_TotAlunni_TextChanged(object sender, EventArgs e)
        {
            
        }

        private void Ciao_Load(object sender, EventArgs e)
        {
        }

        private void listbx_ElencoAlunni_SelectedIndexChanged(object sender, EventArgs e)
        {
            int indiceAlunni;
            
            //"+1" per non farlo partire da 0
            indiceAlunni = listbx_ElencoAlunni.SelectedIndex + 1;
            //visualizzo l'indiceAlunni
            txtbx_IndiceAlunni.Text = indiceAlunni.ToString();
        }

        private void textBox1_TextChanged(object sender, EventArgs e)
        {

        }

        private void InputKey(object sender, KeyPressEventArgs e)
        {
            //Controllo se la Key premuta é giusta
            //e come parametro del KeyPressEventArgs
            //(char)Keys.Enter indica il tasto Invio/Enter

            if (e.KeyChar == (char)Keys.Enter)
            {

                InsertData();

            }

        }

        private void txtbx_nomeAlunno_TextChanged(object sender, EventArgs e)
        {

        }

        private void linkLabel1_LinkClicked_1(object sender, LinkLabelLinkClickedEventArgs e)
        {
            Process.Start("http://instagram.com/samu.raid");
        }
    }

}
