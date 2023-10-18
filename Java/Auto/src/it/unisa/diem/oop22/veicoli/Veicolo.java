package it.unisa.diem.oop22.veicoli;

public abstract class Veicolo {
    private String numTelaio;
    private String modello;
    private String alimentazione;
    private String targa;

    public Veicolo (String numTelaio, String modello, String alimentazione, String targa){
        this.numTelaio = numTelaio;
        this.modello = modello;
        this.alimentazione = alimentazione;
        this.targa = targa;
    }

    public String getNumTelaio(){
        return this.numTelaio;
    }
    public String getModello(){
        return this.modello;
    }
    public String getAlimentazione(){
        return this.alimentazione;
    }
    public String getTarga(){
        return this.targa;
    }

    public abstract boolean controllaTarga();

    public String toString(){
        return "\nTelaio: " + this.numTelaio + ", Modello: " + this.modello + ", Alimentazione: " + this.alimentazione + ", Targa: " + this.targa;
    }
    
}



