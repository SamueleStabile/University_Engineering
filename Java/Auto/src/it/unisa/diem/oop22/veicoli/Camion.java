package it.unisa.diem.oop22.veicoli;

public class Camion extends Veicolo {
    private int numeroAssi;

    public Camion (String numTelaio, String modello, String alimentazione, String targa, int numeroAssi){

        super(numTelaio, modello, alimentazione, targa);
        this.numeroAssi = numeroAssi;
    }


    @Override
    public boolean controllaTarga() {
        String targa = getTarga(); 
        return targa.matches("[A-Z]{2}\\d{6}");
    }

    public int getNumeroAssi(){
        return this.numeroAssi;
    }

    @Override
    public String toString(){
        return super.toString() + ", NumeroAssi: " + this.numeroAssi;
    }
}
