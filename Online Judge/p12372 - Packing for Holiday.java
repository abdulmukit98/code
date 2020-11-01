import java.io.BufferedInputStream;
import java.util.*;

class Main {
    /*
        p12372 - Packing for Holiday

     */
    static Scanner scanner = new Scanner(new BufferedInputStream(System.in));

    public static void main(String[] args) {

        int test;
        test = scanner.nextInt();

        for (int t = 1; t <= test; t++) {
            int l, w, h;
            l = scanner.nextInt();
            w = scanner.nextInt();
            h = scanner.nextInt();

            if(l<=20 && w<=20 && h<=20)
                System.out.format("Case %d: good\n",t);
            else System.out.format("Case %d: bad\n",t);
        }

    // end main
    }

}
