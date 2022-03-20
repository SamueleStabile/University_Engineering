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

        Coda StudioMedico = new Coda();

        //-----------------------------

        public CodaStudioMedicoForm()
        {
            InitializeComponent();
        }

        private void ButtoneInserisci_Click(object sender, EventArgs e)
        {
            string nome;
            nome = TextBoxNome.Text;
            StudioMedico.Push(nome);

            TextBoxNome.Text = "";

            ListBoxPazienti.Items.Add(NumeroProgressivo + " - " + nome);

        }

        private void ButtonProssimoPaziente_Click(object sender, EventArgs e)
        {
            MessageBox.Show(StudioMedico.Pop(), "Comunicazione", MessageBoxButtons.OK, MessageBoxIcon.Asterisk);

            ListBoxPazienti.Items.RemoveAt(0);
        }
    }
}
