using System;
using System.Collections.Generic;
using System.ComponentModel;
using System.Data;
using System.Drawing;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using System.Windows.Forms;

namespace Centro_Medico_Alpha
{
    public partial class CodaStudioMedicoForm : Form
    {
        //Variabili Globali------------

        int NumeroProgressivo = 1;
        int MaxPazienti;

        Coda StudioMedico = new Coda();

        //-----------------------------

        public CodaStudioMedicoForm()
        {
            InitializeComponent();
        }

        private void ButtoneInserisci_Click(object sender, EventArgs e)
        {
            string nome;

        //Controllo se ho raggiunto il "MaxPazienti" oppure se i campi sono errati------------------------------------------

            if (NumeroProgressivo <= MaxPazienti)
            {
                if (TextBoxNome.TextLength != 0)
                {
                    nome = TextBoxNome.Text;

                    StudioMedico.Push(nome);

                    TextBoxNome.Text = ""; //TextBoxNome.Clear();

                    ListBoxPazienti.Items.Add(NumeroProgressivo + " - " + nome);

                    NumeroProgressivo++;
                }
                else
                {
                    MessageBox.Show("Non puoi lasciare il campo \"Nome Paziente\" Vuoto!", "Attenzione!", MessageBoxButtons.OK, MessageBoxIcon.Warning);
                }
            }
            else
            {
                MessageBox.Show("É stato raggiunto il numero massimo di pazienti in attesa!", "Attenzione!", MessageBoxButtons.OK, MessageBoxIcon.Warning);
                TextBoxNome.Text = "";
            }        
        }
        
        private void ButtonProssimoPaziente_Click(object sender, EventArgs e)
        {
                MessageBox.Show(StudioMedico.Pop(), "Comunicazione", MessageBoxButtons.OK, MessageBoxIcon.Asterisk);

            try
            {
                ListBoxPazienti.Items.RemoveAt(0);
            }
            catch
            {
                    //vuoto poiché é stato già notificato all'utente l'errore nella riga 65 con il metodo POP
            }
            
        }

        private void ButtonApriStudio_Click(object sender, EventArgs e)
        {
            try
            {
                
                if (TextBoxNumeroMassimo.TextLength == 0)
                {
                   MessageBox.Show("Il numero massimo non può essere vuoto!", "Attenzione!", MessageBoxButtons.OK, MessageBoxIcon.Warning);
                }
                else
                {
                    if (Convert.ToInt32(TextBoxNumeroMassimo.Text) <= 0)
                    {
                        MessageBox.Show("Il campo non può essere Minore o Uguale a Zero!", "Attenzione!", MessageBoxButtons.OK, MessageBoxIcon.Warning);
                    }
                    else
                    {
                        MaxPazienti = Convert.ToInt32(TextBoxNumeroMassimo.Text);

                        AttivaProgramma();
                    }
                }
                
            }
            catch
            {
                MessageBox.Show("Il campo non può contenere lettere!", "Attenzione!", MessageBoxButtons.OK, MessageBoxIcon.Warning);
            }

            
        }
       

        private void ButtonChiudiStudio_Click(object sender, EventArgs e)
        {
            DialogResult risposta;

            //controllo coda vuota ed esito risposta ---------------------
            if (ListBoxPazienti.Items.Count != 0)
            {
                risposta = MessageBox.Show("Ci sono ancora Pazienti in coda! \nSicuro di voler Chiudere lo Studio?", "Attenzione!", MessageBoxButtons.YesNo, MessageBoxIcon.Warning);
                
                if(risposta == DialogResult.Yes)
                {
                    DisattivaProgramma();

                    TextBoxNumeroMassimo.Text = "";
                    ListBoxPazienti.Items.Clear();

                    CicloDiPulizia_Coda();

                    NumeroProgressivo = 1;

                    
                }
            }
            else
            {
                DisattivaProgramma();

                TextBoxNumeroMassimo.Text = "";
                ListBoxPazienti.Items.Clear();

                CicloDiPulizia_Coda();

                NumeroProgressivo = 1;

            }
        }


        //Utility---------------------------------------
        public void AttivaProgramma()
        {
            ButtoneInserisci.Enabled = true;
            ButtonChiudiStudio.Enabled = true;
            ButtonProssimoPaziente.Enabled = true;
            TextBoxNome.Enabled = true;
            ListBoxPazienti.Enabled = true;

            TextBoxNumeroMassimo.Enabled = false;
            ButtonApriStudio.Enabled = false;
        }

        public void DisattivaProgramma()
        {
            ButtoneInserisci.Enabled = false;
            ButtonChiudiStudio.Enabled = false;
            ButtonProssimoPaziente.Enabled = false;
            TextBoxNome.Enabled = false;
            ListBoxPazienti.Enabled = false;

            TextBoxNumeroMassimo.Enabled = true;
            ButtonApriStudio.Enabled = true;
        }

        public void CicloDiPulizia_Coda()
        {
            int Ripetizioni = NumeroProgressivo - 1;
            for (int i=0; i<Ripetizioni; i++)
            {
                StudioMedico.Clean();
            }
        }
        private void TextBoxNome_TextChanged(object sender, EventArgs e)
        {

        }

        private void TextBoxNumeroMassimo_TextChanged(object sender, EventArgs e)
        {
            
        }

        private void CodaStudioMedicoForm_Load(object sender, EventArgs e)
        {

        }
    }
}
