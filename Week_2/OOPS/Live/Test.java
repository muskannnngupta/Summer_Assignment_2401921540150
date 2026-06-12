package Live;
import Music.playable;
import Music.String.Veena;
import Music.wind.Saxophone;

public class Test {
    
    public static void main(String[] args) {
        
         Veena V1 = new Veena();
         V1.Play();

         Saxophone S1 = new Saxophone();
         S1.Play();

         playable veena = new Veena();
         veena.Play();

         playable saxophone = new Saxophone();
         saxophone.Play();


    }
}
