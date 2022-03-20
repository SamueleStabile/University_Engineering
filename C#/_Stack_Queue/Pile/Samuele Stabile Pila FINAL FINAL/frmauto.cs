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

namespace Samuele_Stabile_Pila
{
    public partial class frmAuto : Form
    {

        //variabili globali
        pila p = new pila();    //PILA 1
        pila p2 = new pila();   //PILA 2
        private Vettura first;

        int ParcoSelezionato;

        Vettura App; //Variabile di tipo vettura di "Appoggio"

        //-------------------

        public frmAuto()
        {
            InitializeComponent();
        }

        //Inserisci Button Push
        private void button_Inserisci_Click(object sender, EventArgs e)
        {
            string targa;
            int cilindrata;

            try
            {
                targa = textBox_Targa.Text;
                cilindrata = Convert.ToInt32(textBox_Cilindrata.Text);

                if (ParcoSelezionato == 1)
                {
                    p.Push(targa, cilindrata);
                }
                else if (ParcoSelezionato == 2)
                {
                    p2.Push(targa, cilindrata);                
                }

                    textBox_Targa.Text = "";
                    textBox_Cilindrata.Text = "";

                   
                    listBox_Targa.Items.Insert(0, targa);                       //Comando che inserisce al posto 1 della listbox l'elemento targa/cilindrata
                    listBox_cilindrata.Items.Insert(0, cilindrata.ToString());

                Visualizza(ParcoSelezionato);
            }
            catch
            {
                MessageBox.Show("Compila bene tutti i campi!", "Attenzione", MessageBoxButtons.OK, MessageBoxIcon.Exclamation);
            }


            

        }

        //Elimina Button Pop
        private void button_Elimina_Click(object sender, EventArgs e)
        {
            if (ParcoSelezionato == 1)
            {
                p.Pop();
            }
            else if (ParcoSelezionato == 2)
            {
                p2.Pop();
            }
            

            try
            { 
                listBox_Targa.Items.RemoveAt(0);
                listBox_cilindrata.Items.RemoveAt(0);
            }
            catch
            {
                MessageBox.Show("Nessuna vettura inserita!", "Attenzione", MessageBoxButtons.OK, MessageBoxIcon.Error);
            }
        }

        private void frmAuto_Load(object sender, EventArgs e)
        {
            listBoxParchi.Items.Add("Parco 1");
            listBoxParchi.Items.Add("Parco 2");
            MessageBox.Show("Prima di Iniziare, Scegli un parco per inserire le tue Auto! ", "Benvenuto!",  MessageBoxButtons.OK, MessageBoxIcon.Information);
        }


        private void listBox1_SelectedIndexChanged(object sender, EventArgs e)
        {
            AttivaProgramma(); //Attiva le varie parti del programma dopo che l'utente ha scelto il parco

            SvuotaListBoxes();

            if (listBoxParchi.SelectedItem == "Parco 1")
            {
                ParcoSelezionato = 1;

            }
            else if (listBoxParchi.SelectedItem == "Parco 2")
            {
                ParcoSelezionato = 2;
            }

            try
            {
                Visualizza(ParcoSelezionato);
            }
            catch
            {
                MessageBox.Show("Il Parco " + ParcoSelezionato + " é ancora vuoto! Riempilo a tuo piacimento!" ,"Attento!", MessageBoxButtons.OK, MessageBoxIcon.Information);
            }

        }

        private void SvuotaListBoxes()
        {
            listBox_cilindrata.Items.Clear();
            listBox_Targa.Items.Clear();
        }

        private void AttivaProgramma()
        {
            textBox_Cilindrata.Enabled = true;
            textBox_Targa.Enabled = true;
            button_Elimina.Enabled = true;
            button_Inserisci.Enabled = true;
            listBox_cilindrata.Enabled = true;
            listBox_Targa.Enabled = true;
        }


        public void Visualizza(int ParcoSelezionato)
        {
            SvuotaListBoxes();

            string targa;
            int cilindrata;


            if (ParcoSelezionato == 1)
            {
                App = p.GetFirst();
            }
            else if (ParcoSelezionato == 2)
            {
                App = p2.GetFirst();
            }
                
                do
                {
                    targa = App.GetTarga();
                    cilindrata = Convert.ToInt32(App.GetCilindrata());

                    listBox_Targa.Items.Add(targa);
                    listBox_cilindrata.Items.Add(cilindrata.ToString());
                   
                    first = App.GetNext();
                    App = first;
                           
                } while (App != null);
            }

      

        private void SamueleStabile_Click(object sender, EventArgs e)
        {
            Process.Start("http://instagram.com/samu.raid");
        }
    }
    }



