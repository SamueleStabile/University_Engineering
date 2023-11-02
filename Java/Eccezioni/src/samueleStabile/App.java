package samueleStabile;

import samueleStabile.dataStructures.StackStudenti;
import samueleStabile.exceptions.EmptyStackException;
import samueleStabile.exceptions.FullStackException;
import samueleStabile.dataStructures.Studente;

public class App {
    public static void main(String[] args) {
        // Creazione di uno stack con una capacità massima di 3 studenti
        StackStudenti stack = new StackStudenti(2);

  
        try {
            Studente studente1 = new Studente("Marco", "12345", 85.5);
            Studente studente2 = new Studente("Samu", "67890", 75.0);
            Studente studente3 = new Studente("Dio", "54321", 90.0);

            // Creazione di alcuni oggetti Studente

            // Inserimento degli studenti nello stack
            stack.push(studente1);
            stack.push(studente2);
            stack.push(studente3);

            // Stampa degli studenti nello stack
            System.out.println("Studenti nello stack:");
            while (!stack.isEmpty()) {
                Studente topStudente = stack.top();
                System.out.println(topStudente);
                stack.pop();
            }

            // Tentativo di pop da uno stack vuoto (lancerà EmptyStackException)
            // stack.pop();

            // Tentativo di push su uno stack pieno (lancerà FullStackException)
            // stack.push(new Studente("Dave", "99999", 78.5));

        } catch (FullStackException | EmptyStackException e) {
            System.out.println("Eccezione gestita: " + e.getMessage());
        }
    }
}
