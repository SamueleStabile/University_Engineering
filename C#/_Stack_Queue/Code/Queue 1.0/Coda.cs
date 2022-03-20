using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace Centro_Medico_Alpha
{
    class Coda
    {
        private Paziente first;
        private Paziente last;
        private int NumeroProgressivo;

        //COSTRUTTORE
        public Coda()
        {
            first = null;
            last = null;
            NumeroProgressivo = 1;
        }

        //-------------------PUSH
        public void Push(string nome)
        {
            Paziente Paz = new Paziente(nome, NumeroProgressivo);

            if (first == null)
            { 
                first = last = Paz; //first = (last = paz)
            }
            else
            {
                last.setNext(Paz);
                last = Paz;
            }
            NumeroProgressivo++;
        }

        //-----------------------POP
        public string Pop()
        {
            string msg;
            Paziente Paz;

            if (first == null)
            {
                msg = "     Sala d'attesa vuota!\nNon é possibile cancellare";
            }
            else
            {
                Paz = first;
                first = Paz.getNext(); 
                msg = "Il prossimo paziente da visitare é " + Paz.getNome() + " con numero: " + Paz.getNum(); 
            }
            return msg;
            NumeroProgressivo--;
        }

        //CLEAN-----------------------------------
        public void Clean()
        {     
            Paziente Paz;

            if (first == null)
            {

            }
            else
            {
                Paz = first;
                first = Paz.getNext();
                
            }
            NumeroProgressivo = 1;
        }

    }


    

}
