package it.unisa.diem.oop22.veicoli;

public class Camion extends Veicolo {
    private int numeroAssi;

    public Camion (String numTelaio, String modello, String alimentazione, String targa, int numeroAssi){

        super(numTelaio, modello, alimentazione, targa);
        this.numeroAssi 