import java.io.BufferedInputStream;
import java.util.*;

class Main {
    /*
        p11547 - Automatic Answer
        
     */
    static Scanner scanner = new Scanner(new BufferedInputStream(System.in));

    public static void main(String[] args) {

        int test;
        test = scanner.nextInt();

        for (int i = 0; i < test; i++) {
            Double n;
            n = scanner.nextDouble();
            n = n * 567;
            n = n / 9;
            n = n + 7492;
            n = n * 235;
            n = n / 47;
            n = n - 498;
            n = Math.abs(n);        // remove -ve sign

            // tens column digit
            Double mod = n % 100;
            mod = mod / 10;
            mod = Math.floor(mod);  // reduce decimal point
            System.out.format("%.0f\n",mod);
        }

    // end main
    }

}
