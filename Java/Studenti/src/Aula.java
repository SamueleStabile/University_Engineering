

public class Aula {
    private int maxPosti;
    private Studente studenti[];
    private int count;

    public Aula(int maxPosti){
        this.maxPosti = maxPosti;
        this.studenti = new Studente[maxPosti]; 
        this.count = 0;
      
    }
    
    public Boolean aulaPiena(int Posti){

         if(this.maxPosti == Posti){
            return true;
         }else{
            return false;
         }

    }
     public Boolean aulaVuota(int Posti){

         if(this.maxPosti == Posti){
            return false;
         }else{
            return true;
         }

    } 

    public int getMaxPosti() {
        return maxPosti;
    }


    public void entrataStudente(Studente studente) {
        if (this.count < maxPosti) {

            studenti[this.count] = studente;
            this.count++;

            System.out.println(studente.getNome() + " è entrato in aula.");
        } else {
            System.out.println("Aula piena. Non è possibile far entrare altri studenti.");
        }
    }
    
    public void uscitaStudente(){
        if (this.count > 0 ) {
            
             this.count--;
            Studente studenteUscito = studenti[this.count];
           

            System.out.println(studenteUscito.getNome() + " è uscito dall'aula.");
        } else {
            System.out.println("Aula vuota. Nessun studente da far uscire.");
        }
    }

        public void elencoStudenti() {
        System.out.println("\nStudenti presenti in aula:");
        for (int i = 0; i < count; i++) {
            System.out.println(studenti[i].getNome());
        }
    }


}

