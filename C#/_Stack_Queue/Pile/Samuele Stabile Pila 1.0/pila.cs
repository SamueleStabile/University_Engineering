using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace Samuele_Stabile_Pila
{
    class pila
    {

        private int nnodi;  //numero di automobili presenti
        private Vettura first;

        //-------PROVE--------
        string AccumuloTarga = "";
        int AccumuloCilindrata = 0;
        //--------------------

        public pila()
        {
            nnodi = 0;
        }

        public void Push(string targa, int cilindrata)
        {
            Vettura App = new Vettura(targa, cilindrata);
            if (nnodi==0)
            {
                first = App;
                nnodi++;
            }
            else
            {
                App.setNext(first);
                first = App;
                nnodi++;
            }
        }

        public string Pop()
        {
            Vettura App;
            if (nnodi == 0)
            {
                return "lista vuota";
            }
            App = first;
            first = App.GetNext();
            nnodi--;
            return "Eliminata targa" + App.GetTarga();
            
        }
         
        public void Visualizza(int tipo)
        { 
            Vettura App;
            string targa;
            int cilindrata;
             

            if (tipo==1)
            {
                App = first;
                
                do
                {
                    //Qui dovrei mettere qualcosa per visualizzare ma scrivendo questa frase mi é appena venuto in mente come fare LOL

                    targa = App.GetTarga();
                    cilindrata = App.GetCilindrata();

                    //---------------------PROVE--------------------------

                    //AccumuloCilindrata = AccumuloCilindrata + cilindrata;
                    //AccumuloTarga = AccumuloTarga + targa;

                    //listBox_Targa.Items.Add(targa);
                    //listBox_Cilindrata.Items.Add(targa);

                    first = App.GetNext();
                    App = first;

                } while (App == null);

                
            }
            
        }
        
    }
}