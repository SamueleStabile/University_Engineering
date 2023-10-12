package it.unisa.diem.oop22.veicoli;

public class Autovettura extends Veicolo {
    private int numeroPosti;

    public Autovettura (String numTelaio, String modello, String alimentazione, String targa, int numeroPosti){

        super(numTelaio, modello, alimentazione, targa);
        this.numeroPosti = numeroPosti;
    }


    @Override
    public boolean controllaTarga() {
        String targa = getTarga(); 
        return targa.matches("[A-Z]{2}\\d{3}[A-Z]{2}");
    }

    public int getNumeroPosti(){
        return this.numeroPosti;
    }

    @Override
    public String toString(){
        return super.toString() + ", Numero Posti: " + this.numeroPosti;
    }
}
