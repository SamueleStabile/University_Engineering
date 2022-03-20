using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace Centro_Medico_Alpha
{
    class Paziente
    {
        private string nome;
        private int num;
        private Paziente next;

        //COSRTRUTTORE------------------------------------------------------------------
        public Paziente(string nome, int num)  
        {
            this.nome = nome;
            this.num = num;
            next = null;
        }

        //METODI------------------------------------------------------------------------
        public string getNome()
        {
            return (nome);
        }

        public int getNum()
        {
            return (num);
        }

        public Paziente getNext()
        {
            return (next);
        }

        public void setNext(Paziente Paz)
        {
            next = Paz;
        }
    }
}
