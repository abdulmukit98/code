import java.io.BufferedInputStream;
import java.util.*;

class Main {
    /*
        1124 - Celebrity jeopardy
        
        just echo/re-print the input again
     */
    static Scanner scanner = new Scanner(new BufferedInputStream(System.in));

    public static void main(String[] args) {

        while (scanner.hasNext())
        {
            String s1 = scanner.nextLine();
            System.out.println(s1);
        }

    // end main
    }

}
