import java.io.BufferedInputStream;
import java.util.*;

class Main {
    /*
        p11727 - Cost Cutting

     */
    static Scanner scanner = new Scanner(new BufferedInputStream(System.in));

    public static void main(String[] args) {

        int test;
        test = scanner.nextInt();

        for (int t = 1; t <= test; t++) {
            int salary[] = new int[3];

            for (int i = 0; i < 3; i++) {
                salary[i] = scanner.nextInt();
            }
            Arrays.sort(salary);
            System.out.format("Case %d: %d\n", t, salary[1]);   // midian
        }
        
    // end main
    }

}
