package it.unisa.diem.oop22.Exceptions;

public class AutorimessaVuotaException extends BoxException {
    public AutorimessaVuotaException() {
        super("L'autorimessa è vuota, nessun veicolo può uscire.");
    }
}
