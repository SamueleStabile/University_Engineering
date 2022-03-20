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
  
        public Vettura GetFirst()
        {
            return (first);
        }
    }
}