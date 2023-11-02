package samueleStabile.dataStructures;

public class Studente {
    private String nome;
    private String matricola;
    private double votoMedio;

    public Studente(String nome, String matricola, double votoMedio) {
        this.nome = nome;
        this.matricola = matricola;
        this.votoMedio = votoMedio;
    }

    public String getNome() {
        return nome;
    }

    public void setNome(String nome) {
        this.nome = nome;
    }

    public String getMatricola() {
        return matricola;
    }

    public double getVotoMedio() {
        return votoMedio;
    }

    public void setVotoMedio(double votoMedio) {
        this.votoMedio = votoMedio;
    }

    @Override
    public String toString() {
        return "Studente: " + this.nome + " " + this.matricola + " " + this.votoMedio;
    }
}
