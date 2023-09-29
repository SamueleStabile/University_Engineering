public class Main {
    public static void main(String[] args) {

        Prodotto p1 = new Prodotto("001" , "Nero", 9);
        Prodotto p2 = new Prodotto("002" , "Bianco", 9);
        Prodotto p3 = new Prodotto("003" , "Gialle", 90);

        Prodotto prodotti[] = new Prodotto[3];

        prodotti[0] = p1;
        prodotti[1] = p2;
        prodotti[2] = p3;

        for( int i = 0; i < prodotti.length; i++){
            prodotti[i].printProdotto();
        }
    }
}
