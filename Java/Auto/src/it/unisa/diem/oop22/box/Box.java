package it.unisa.diem.oop22.box;

import it.unisa.diem.oop22.veicoli.Veicolo;
import it.unisa.diem.oop22.Exceptions.*;

public abstract class Box {
    public int maxPosti;
    private String nome;

    public Box(int maxPosti, String nome) {
        this.maxPosti = maxPosti;
        this.nome = nome;
    }

    public abstract void entra(Veicolo veicolo) throws AutorimessaPienaException;

    public abstract Veicolo esce() throws AutorimessaVuotaException;

    public String toString() {
        return "NomeBox=" + nome;    
    }
}
