package it.unisa.diem.oop22.veicoli;

public class Moto extends Veicolo {
    private boolean guidaLibera;

    public Moto(String numTelaio, String modello, String alimentazione, String targa, boolean guidaLibera) {

        super(numTelaio, modello, alimentazione, targa);
        this.guidaLibera = guidaLibera;
    }

    @Override
    public boolean controllaTarga() {
        String targa = getTarga();
        return targa.matches("[A-Z]{2}\\d{5}");
    }

    public boolean getGuidaLibera() {
        if (this.guidaLibera) {
            return true;
        } else {
            return false;
        }
    }

    @Override
    public String toString() {
        if (this.guidaLibera) {
            return super.toString() + ", GuidaLibera: true";
        } else {
            return super.toString() + ", GuidaLibera: false";
        }
    }
}
