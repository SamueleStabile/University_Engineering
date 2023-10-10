public class App {
    public static void main(String[] args) throws Exception {

        Studente s = new Studente("Francesco" , "Spinelli" , "6931");
        Studente s1 = new Studente("Samuele" , "Stabile" , "6931");
        Studente s2 = new Studente("Marco" , "Novissimo" , "6931");

        System.out.println(s.getNome() + s.getCognome() + s.getMatricola());
        System.out.println("Info\n");

        System.out.println(s.getInfoStudente());
        System.out.println(s1.getInfoStudente());
        System.out.println(s2.getInfoStudente());

        
        Aula M = new Aula(150);

        System.out.println( M.getMaxPosti());

        M.entrataStudente(s);
        M.entrataStudente(s1);
        M.entrataStudente(s2);
        M.elencoStudenti();

    }
}
