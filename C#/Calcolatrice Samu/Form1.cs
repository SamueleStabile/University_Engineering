using System;
using System.Collections.Generic;
using System.ComponentModel;
using System.Data;
using System.Drawing;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using System.Windows.Forms;

namespace Somma_2_numeri_Samu
{
    public partial class Forma_Gino : Form
    {
        //dichiarazione variabili globali
        float addendo1, addendo2, result;
        public Forma_Gino()
        {
            InitializeComponent();
        }

        private void Form1_Load(object sender, EventArgs e)
        {
         
        }

        private void txtNum1_TextChanged(object sender, EventArgs e)
        {
                addendo1 = float.Parse(txtNum1.Text);
        }

        private void txtNum2_TextChanged(object sender, EventArgs e)
        {
                addendo2 = float.Parse(txtNum2.Text);  
        }

        private void btnCalcola_Click(object sender, EventArgs e)
        {
   
        }

        private void Result_Click(object sender, EventArgs e)
        {
           
        }

        private void btn_plus_Click(object sender, EventArgs e)
            
        {
            if (txtNum1.TextLength == 0)
                MessageBox.Show("Il Primo numero é vuoto");
            else if (txtNum2.TextLength == 0)
                MessageBox.Show("Il Secondo numero é vuoto");
            else
            result = addendo1 + addendo2;
            Result.Text = result.ToString();
        }

        private void btn_less_Click(object sender, EventArgs e)
        {
            if (txtNum1.TextLength == 0)
                MessageBox.Show("Il Primo numero é vuoto");
            else if (txtNum2.TextLength == 0)
                MessageBox.Show("Il Secondo numero é vuoto");
            else
            result = addendo1 - addendo2;
            Result.Text = result.ToString();
        }

        private void btn_divide_Click(object sender, EventArgs e)
        {
            if (txtNum1.TextLength == 0)
                MessageBox.Show("Il Primo numero é vuoto");
            else if (txtNum2.TextLength == 0)
                MessageBox.Show("Il Secondo numero é vuoto");
            if (addendo2 == 0)
                MessageBox.Show("Non si può dividere per zero ");
            else
            result = addendo1 / addendo2;
            Result.Text = result.ToString();
        }

        private void btn_per_Click(object sender, EventArgs e)
        {
            if (txtNum1.TextLength == 0)
                MessageBox.Show("Il Primo numero é vuoto");
            else if (txtNum2.TextLength == 0)
                MessageBox.Show("Il Secondo numero é vuoto");
            else
            result = addendo1 * addendo2;
            Result.Text = result.ToString();
        }

        private void lblNum1_Click(object sender, EventArgs e)
        {

        }

        private void lblNum2_Click(object sender, EventArgs e)
        {

        }
    }
}
