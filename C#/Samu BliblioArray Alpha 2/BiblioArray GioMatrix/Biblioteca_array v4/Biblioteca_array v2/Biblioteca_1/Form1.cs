using System;
using System.Collections.Generic;
using System.ComponentModel;
using System.Data;
using System.Drawing;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using System.Windows.Forms;

using System.IO;           //Gestione File

namespace Biblioteca_1
{
    public partial class Form1 : Form
    {
        //area global
        libro libro_x;
        int x, nrlibro, nx_libro;
        int qtLibro = 3;
        libro libro_1 = new libro();          //Costruisci un oggetto 
        

        const int MAX_lb = 10;    
        libro[] libreria = new libro[MAX_lb]; //dichiarazione array (new=crea spazio sulla memoria)

        FileStream f;            //oggetto file stream


        public Form1()
        {
            InitializeComponent();
        }

        private void Form1_Load(object sender, EventArgs e) //operazioni automatiche che si eseguono all'inizio del programma 
        {
            

 
        }

        private void label1_Click(object sender, EventArgs e)
        {

        }

        private void button1_Click(object sender, EventArgs e)
        {
            nx_libro = Convert.ToInt32(textBox_nrlibro.Text); //converto nrlibro da string ad intero

            //visualizza dati del libro

                    

                    libreria[nx_libro].titolo = textBox_titolo.Text;
                    libreria[nx_libro].codice = textBox_codice.Text;
                    libreria[nx_libro].prezzo = float.Parse (textBox_prezzo.Text);
                    libreria[nx_libro].autore = textBox_autore.Text;
                    libreria[nx_libro].ncopie = int.Parse(textBox_ncopie.Text);

                    label_visualizza.Text = "Libro aggiornato" + libreria[nx_libro].ncopie.ToString();
                    
           
        }

        private void label6_Click(object sender, EventArgs e)
        {

        }

        private void textBox4_TextChanged(object sender, EventArgs e)
        {

        }

        private void button_visualizza_Click(object sender, EventArgs e)
        {
            //nrlibro = Convert.ToInt32(textBox_nrlibro.Text);
            nx_libro = int.Parse(textBox_nrlibro.Text);

                    textBox_titolo.Text = libreria[nx_libro].titolo; //prede il titolo dal primo box testuale
                    textBox_codice.Text = libreria[nx_libro].codice;
                    textBox_prezzo.Text = libreria[nx_libro].prezzo.ToString();  //ToString  converte da int a string
                    textBox_autore.Text = libreria[nx_libro].autore;
                    textBox_ncopie.Text = libreria[nx_libro].ncopie.ToString();

            
        }

        private void textBox_titolo_TextChanged(object sender, EventArgs e)
        {

        }

        private void textBox_prezzo_TextChanged(object sender, EventArgs e)
        {

        }

        private void textBox_autore_TextChanged(object sender, EventArgs e)
        {

        }

        private void Label_nrlibro_Click(object sender, EventArgs e)
        {

        }

        private void TextBox_nrlibro_TextChanged(object sender, EventArgs e)
        {

        }

        private void TextBox1_TextChanged(object sender, EventArgs e)
        {

        }

        private void Button_prestare_Click(object sender, EventArgs e)
        {
          
           /* nx_libro = Convert.ToInt32(textBox_nrlibro.Text);
            if(nx_libro >= 2)
            {                           //possiamo prestare
                switch (nx_libro)
                {
                    case 1:
                        libro_1.prestito();
                        label_visualizza.Text = "OK...prestato" +libro_1.ncopie.ToString();
                        break;
                    case 2:
                        libro_2.prestito();
                        label_visualizza.Text = "OK...prestato"+ libro_2.ncopie.ToString();
                        break;
                }
                
            }
            else
            {
                label_visualizza.Text = "Prestito non fattibile, copia unica";
            }
            */
        }

        private void Label_visualizza_Click(object sender, EventArgs e)
        {
            
        }

        private void Button1_Click_1(object sender, EventArgs e)
        {
            int I; //contatore
           
            label_visualizza.Text = "NR--TITOLO--AUTORE--PREZZO--COPIE";

            for (I = 0; I < qtLibro; I++) {
                label_visualizza.Text = label_visualizza.Text + "\n" + I.ToString() + "    "
                                                                  + libreria[I].titolo + "  "
                                                                  + libreria[I].autore + "  " 
                                                                  + libreria[I].prezzo + "  " 
                                                                  + libreria[I].ncopie;
                //metto a video il libro selezionato, contenuto nell' Indice I
            }
        }

        private void button2_Click(object sender, EventArgs e)
        {
            if (qtLibro >= MAX_lb)
            {
                label_visualizza.Text = "\n error... Libreria piena";
            }
            else
            {
                libro lb = new libro();              
                libreria[qtLibro] = lb;  

                libreria[qtLibro].autore = textBox_autore.Text;
                libreria[qtLibro].codice = textBox_codice.Text;
                libreria[qtLibro].titolo = textBox_titolo.Text;
                libreria[qtLibro].prezzo = float.Parse( textBox_prezzo.Text);
                libreria[qtLibro].ncopie = Convert.ToInt32( textBox_ncopie.Text);
                qtLibro++;
            }//else
            label_qtLibro.Text = "numero libri... " + qtLibro.ToString();
        }

        private void button3_Click(object sender, EventArgs e)   //salva file
        {
            FileStream flusso = new FileStream("libreria.txt", FileMode.Create, FileAccess.Write);
            StreamWriter f = new StreamWriter(flusso);
            int i;
            for (i = 0; i < qtLibro; i++)
            {
                f.WriteLine(libreria[i].titolo);
                f.WriteLine(libreria[i].autore);
                f.WriteLine(libreria[i].prezzo);
                f.WriteLine(libreria[i].ncopie);
            }//endfor
            label_visualizza.Text = "fatto... salva file";
            f.Close();
        }

        private void button_Carica_File_Click(object sender, EventArgs e)
        {
            FileStream flusso = new FileStream("libreria.txt", FileMode.Open, FileAccess.Read);
            StreamReader f = new StreamReader(flusso);

            string dat;
            int i;
            qtLibro = 0;
            i = 1;
            libro lb = new libro();
            libreria[qtLibro] = lb;

            while (!f.EndOfStream)
            {
                dat = f.ReadLine();

                switch (i)
                {
                    case 1:
                        libreria[qtLibro].titolo=dat;
                        break;
                    case 2:
                        libreria[qtLibro].autore =dat;
                        break;
                    case 3:
                        libreria[qtLibro].prezzo = float.Parse(dat);
                        break;
                    case 4:
                        libreria[qtLibro].ncopie =Convert.ToInt32(dat);
                        qtLibro++;
                        i = 0;
                        break;
                    default:
                        break;
                }//switch
                i++;
            }//while
            textBox_qtLibro.Text = "numero libri... " + qtLibro.ToString();
        }

        private void button_crea_file_Click(object sender, EventArgs e)
        {
            FileStream flusso = new FileStream("libreria.txt", FileMode.Create, FileAccess.Write);
            StreamWriter f = new StreamWriter(flusso);
            f.Close();
            label_visualizza.Text = "File creato...";
        }

        private void Button_restituire_Click(object sender, EventArgs e)
        {

        }

        private void button_exit_Click(object sender, EventArgs e)
        {
            this.Close();
        }
    }
}
