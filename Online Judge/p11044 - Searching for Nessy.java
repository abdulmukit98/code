import java.io.BufferedInputStream;
import java.util.*;

class Main {
    /*
        11044 - Searching for Nessy
     */
    static Scanner scanner = new Scanner(new BufferedInputStream(System.in));

    public static void main(String[] args) {

        int test;
        test = scanner.nextInt();
        for (int i = 0; i < test; i++) {
            Double n,m;
            n = scanner.nextDouble();
            m = scanner.nextDouble();

            // border cell dont need. so we reduce them
            Double num = Math.ceil((n-2) / 3) * Math.ceil((m-2) / 3);
            System.out.format("%.0f\n", num);
        }

    // end main
    }

}
