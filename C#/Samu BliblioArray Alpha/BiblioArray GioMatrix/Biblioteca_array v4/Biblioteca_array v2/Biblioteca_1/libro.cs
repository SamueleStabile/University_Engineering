using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace Biblioteca_1
{
    class libro
    {
        //proprietà
        //UML
        public string titolo;
        public string codice;
        public float  prezzo;
        public string autore;
        public int    ncopie;
        private int    lb_prestato;
         
        //metodi
        public libro()  //costruttore
        { 
            titolo = "tit_x";
            codice = "cod_x";
            prezzo = 0;
            autore = "aut_x";
            ncopie = 0;
        }

        
        
        public void prestito()
        {
            ncopie = ncopie - 1;
        }
        public void restituzione()
        {
            ncopie = ncopie + 1;
        }
        


    }
}
