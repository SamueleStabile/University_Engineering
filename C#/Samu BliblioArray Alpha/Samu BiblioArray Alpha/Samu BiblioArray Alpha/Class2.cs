using System;

public class Class1
{
    class libro
    {
        //Attributi
        private string titolo;
        private string codice;
        private float prezzo;
        private string autore;
        private int copie;
        private int lbPrestati;

        //Metodi

        public libro() //costruttore
        {
            titolo = "titolo_x";
            codice = "codice_x";
            prezzo = 0;
            autore = "autore_x";
            copie = 0;


        }

        public void Prestito()
        {
            copie = copie - 1;
        }

        public void Restituzione()
        {
            copie = copie + 1;
        }
    }

}
