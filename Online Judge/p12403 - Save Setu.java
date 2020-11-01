import java.io.BufferedInputStream;
import java.util.*;

class Main {
    /*
        p12403 - Save Setu

     */
    static Scanner scanner = new Scanner(new BufferedInputStream(System.in));

    public static void main(String[] args) {

        int test;
        test = scanner.nextInt();
        int total = 0;

        for (int t = 0; t < test; t++) {
            String operation;
            int donate;

            operation = scanner.next();
            if (operation.compareTo("donate") == 0)
            {
                donate = scanner.nextInt();
                total = total + donate;
            }
            if (operation.compareTo("report") == 0)
                System.out.println(total);

        }

    // end main
    }

}
