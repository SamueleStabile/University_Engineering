package it.unisa.diem.oop22.box;

import it.unisa.diem.oop22.Exceptions.AutorimessaPienaException;
import it.unisa.diem.oop22.Exceptions.AutorimessaVuotaException;
import it.unisa.diem.oop22.veicoli.*;

public class Autorimessa extends Box {
    private Veicolo veicoli[];
    private int testa;
    private int coda;
    private int riemp;

    public Autorimessa(int maxPosti, String nome) {
        super(maxPosti, nome);
        this.veicoli = new Veicolo[maxPosti];
        this.testa = 0;
        this.coda = 0;
        this.riemp = 0;
    }

    @Override
    public Veicolo esce() throws AutorimessaVuotaException {
        if (riemp > 0) {
            Veicolo veicoloUscito = veicoli[testa];
            veicoli[testa] = null;
            testa = (testa + 1) % maxPosti;
            riemp--;
            System.out.println(veicoloUscito.getTarga() + " è uscito dall'autorimessa.");
            return veicoloUscito;
        } else {
            throw new AutorimessaVuotaException();
        }
    }

    @Override
    public void entra(Veicolo veicolo) throws AutorimessaPienaException {
        if (riemp < maxPosti) {
            coda = (coda + 1) % maxPosti;
            veicoli[coda] = veicolo;
            riemp++;
            System.out.println(veicolo.getTarga() + " è entrato nell'autorimessa.");
        } else {
            throw new AutorimessaPienaException();
        }
    }

    @Override
    public String toString() {
        StringBuilder sb = new StringBuilder();
        sb.append(super.toString()).append("\n");

        for (Veicolo veicolo : veicoli) {
            if (veicolo != null) {
                sb.append(veicolo.toString()).append("\n");
            }
        }

        return sb.toString();
    }

}
