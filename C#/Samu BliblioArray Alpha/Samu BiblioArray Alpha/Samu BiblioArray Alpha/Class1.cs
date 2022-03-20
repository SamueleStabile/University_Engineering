using System;

public class Class1
{
	class libro
	{
        //Attributi
        public string nome;
        public string codice;
        public float prezzo;
        public string autore;
        public int copie;
        public int lbPrestati;

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
