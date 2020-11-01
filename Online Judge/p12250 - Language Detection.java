import java.io.BufferedInputStream;
import java.util.*;

class Main {
    /*
        p12250 - Language Detection
        
     */
    static Scanner scanner = new Scanner(new BufferedInputStream(System.in));

    public static void main(String[] args) {

        Map<String, String> lannguage = new HashMap<>();
        lannguage.put("HELLO", "ENGLISH");
        lannguage.put("HOLA", "SPANISH");
        lannguage.put("HALLO", "GERMAN");
        lannguage.put("BONJOUR", "FRENCH");
        lannguage.put("CIAO", "ITALIAN");
        lannguage.put("ZDRAVSTVUJTE", "RUSSIAN");

        String greetings;
        int i = 0;
        while (scanner.hasNext())
        {
            greetings = scanner.next();
            if (greetings.compareTo("#") == 0)
                break;

            System.out.format("Case %d: %s\n",
                    ++i, lannguage.getOrDefault(greetings, "UNKNOWN"));
        }

    // end main
    }

}
