import java.io.BufferedInputStream;
import java.util.*;

class Main {
    /*
        p11364 - Parking

     */
    static Scanner scanner = new Scanner(new BufferedInputStream(System.in));

    public static void main(String[] args) {

        int test;
        test = scanner.nextInt();

        for (int i = 0; i < test; i++) {
            int n;
            n = scanner.nextInt();

            Vector<Integer> shop = new Vector<>();
            for (int j = 0; j < n; j++) {
                int a = scanner.nextInt();
                shop.add(a);
            }
            Collections.sort(shop);

            int low = shop.get(0);
            int high = shop.get(shop.size()-1);
            int walk = (high - low) * 2;
            System.out.println(walk);
        }

    // end main
    }

}
