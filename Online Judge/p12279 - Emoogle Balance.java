import java.io.BufferedInputStream;
import java.util.*;

class Main {
    /*
        p12279 - Emoogle Balance

     */
    static Scanner scanner = new Scanner(new BufferedInputStream(System.in));

    public static void main(String[] args) {

        int N, t=0;
        while (scanner.hasNext())
        {
            N = scanner.nextInt();
            if (N==0) break;

            int balance = 0;
            for (int i = 0; i < N; i++) {
                int event = scanner.nextInt();

                if (event>0)
                    balance = balance+1;
                if (event == 0)
                    balance = balance-1;
            //end for
            }
            System.out.format("Case %d: %d\n", ++t, balance);
        //end while
        }

    // end main
    }

}
