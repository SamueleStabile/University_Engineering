using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace Alunni_Samu
{
    class alunni
    {
        //attributi
        private string nome;
        private const int Max = 30;

        //costruttore
        public alunni (string nomeAlunno)
        {
            nome = nomeAlunno;
        }
        
        //altri metodi
        public string cercaNome()
        {
            return nome;
        }

    }
}
