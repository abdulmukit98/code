import java.io.BufferedInputStream;
import java.util.*;

class Main {
    /*
        p12577 - Hajj-e-Akbar

     */
    static Scanner scanner = new Scanner(new BufferedInputStream(System.in));

    public static void main(String[] args) {

        int t=0;
        while (scanner.hasNext())
        {
            String s1 = scanner.next();
            if (s1.compareTo("*") == 0)
                break;

            if (s1.compareTo("Hajj") == 0)
                System.out.format("Case %d: Hajj-e-Akbar\n", ++t);

            else if (s1.compareTo("Umrah") == 0)
                System.out.format("Case %d: Hajj-e-Asghar\n", ++t);
        }


    // end main
    }

}
