import java.io.BufferedInputStream;
import java.util.*;

class Main {
    /*
        11172 - Relational Operator


     */
    static Scanner scanner = new Scanner(new BufferedInputStream(System.in));

    public static void main(String[] args) {

        int test;
        test = scanner.nextInt();
        for (int i = 0; i < test; i++) {
            int a,b;
            a = scanner.nextInt();
            b = scanner.nextInt();

            if(a < b)
                System.out.println("<");
            else if(a > b)
                System.out.println(">");
            else System.out.println("=");
        }

    // end main
    }

}
