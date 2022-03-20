using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace Samuele_Stabile_Pila
{
    class Vettura
    {
        //attributi
        private string targa;
        private int cilindrata;
        private Vettura next;
        


        //costruttore
        public Vettura(string targa, int cilindrata)
        {
            this.targa = targa;                 //ricorda il this
            this.cilindrata = cilindrata;
            next = null;
        }

        

        public string GetTarga() {

            return (targa);

        }

        public int GetCilindrata()
        {

            return (cilindrata);

        }

        public Vettura GetNext()
        {

            return (next);

        }

        public void setNext(Vettura Pila)
        {
           next = Pila;
        }
        
       
    }
} 
