using System;
using System.Collections.Generic;
using System.ComponentModel;
using System.Data;
using System.Drawing;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using System.Windows.Forms;
using System.IO;

namespace SamuSaveFile
{
    public partial class Form1 : Form
    {
        const int MaxDim = 100;
        string[] FlussoDiCarica = new string[MaxDim]; //Inizializzo il mio vettore di stringhe
        int NumeroRighe = 0;
        


        public Form1()
        {
            InitializeComponent();
        }

        private void WideBox_TextChanged(object sender, EventArgs e)
        {

        }

        private void button1_Click(object sender, EventArgs e)
        {
            StreamWriter FluxWrite = new StreamWriter("file.txt");
            FluxWrite.Write(Notepad.Text); //scrive sul file fino alla sua fine automaticamente
            FluxWrite.Close();
        }

        private void button_Carica_Click(object sender, EventArgs e)
        {
            int i = 0;
            string riga;

            StreamReader fluxR = new StreamReader("file.txt");
            do
            {
                riga = fluxR.ReadLine();
                if (riga != null)
                {
                    FlussoDiCarica[i] = riga;
                    i++;
                }

                NumeroRighe = i;

            } while (riga!=null);

            MessageBox.Show("Ho letto " + i.ToString() + " righe");

            LabelNumero.Text = NumeroRighe.ToString();

            fluxR.Close();

        }

        private void buttonModifica_Click(object sender, EventArgs e)
        {
            

            if (Notepad.Enabled == true)
            {
                Notepad.Enabled = false;
                buttonModifica.Text = "Modifica";
                buttonModifica.ForeColor = Color.LimeGreen;

            }
            else
            {
                Notepad.Enabled = true;
                buttonModifica.Text = "Lock";
                buttonModifica.ForeColor = Color.Red;
            }
            
        }

        private void Notepad_TextChanged(object sender, EventArgs e)
        {

        }

        private void label2_Click(object sender, EventArgs e)
        {

        }

        private void buttonExit_Click(object sender, EventArgs e)
        {
            this.Close();
        }

        private void buttonVisualizza_Click(object sender, EventArgs e)
        {
            string Accumulatore = "";
            for (int c = 0; c < NumeroRighe; c++)
            {
                Accumulatore = Accumulatore + FlussoDiCarica[c] + "\r\n";
            }
            
            Notepad.Text = Accumulatore;
        }

        private void Form1_Load(object sender, EventArgs e)
        {

        }
    }
}
