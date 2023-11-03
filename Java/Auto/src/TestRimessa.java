import it.unisa.diem.oop22.veicoli.Veicolo;
import it.unisa.diem.oop22.veicoli.Autovettura;
import it.unisa.diem.oop22.veicoli.Moto;
import it.unisa.diem.oop22.veicoli.Camion;
import it.unisa.diem.oop22.box.*;
import it.unisa.diem.oop22.Exceptions.*;

public class TestRimessa {

    /**
     * @param args the command line arguments
     */
    public static void main(String[] args) {
        // TODO code application logic here
        Autorimessa a = new Autorimessa(5, "Parcheggio E1");
        try {

            a.entra(new Camion("sdf244", "Fiat CX45", "Gasolio", "TT656671", 4));
            a.entra(new Camion("spl265", "Volvo PTG", "Gasolio", "YH96671", 6));
            a.entra(new Autovettura("mk23t", "Fiat Punto", "Metano", "EA566FM", 5));
            a.entra(new Autovettura("cgt612", "Fiat Idea", "Gasolio", "AQ9Y7UUU", 5));
            a.entra(new Moto("das7896", "Honda Hornet", "Benzina", "AT51233", false));
          
            // trigger per throware piena
            // a.entra(new Moto("gdt7896", "Suzuki Bandit", "Benzina", "AT5123N", false)); 
            
            //triggers per throware vuota
            a.esce();
            a.esce();
            a.esce();
            a.esce();
            a.esce();
            a.esce();
            a.esce();
        
        } catch (AutorimessaPienaException e) {
            System.out.println("Errore: " + e.getMessage());
        } catch (AutorimessaVuotaException e) {
            System.out.println("Errore: " + e.getMessage());
        }
        System.out.println(a);

    }

}
