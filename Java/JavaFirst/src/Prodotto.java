public class Prodotto {
    private String codiceProdottto;
    private String nomeProdotto;
    private float  costoProdotto;

    public Prodotto(String codiceProdotto, String nomeProdotto, float costoProdotto){
        this.codiceProdottto = codiceProdotto;
        this.nomeProdotto = nomeProdotto;
        this.costoProdotto = costoProdotto;
    }

    public void setCostoProdotto(float costoProdotto) {
        this.costoProdotto = costoProdotto;
    }

    public float getCostoProdotto() {
        return costoProdotto;
    }

    public void editPrezzo(float prezzo) {
        this.costoProdotto = this.costoProdotto + prezzo;
    }

    public void printProdotto(){
        System.out.println(this.codiceProdottto);
        System.out.println(this.nomeProdotto);
        System.out.println(this.costoProdotto);
    }
}
