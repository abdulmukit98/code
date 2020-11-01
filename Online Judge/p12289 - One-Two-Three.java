import java.io.BufferedInputStream;
import java.util.*;

class Main {
    /*
        p12289 - One-Two-Three

     */
    static Scanner scanner = new Scanner(new BufferedInputStream(System.in));

    public static void main(String[] args) {

        int test;
        test = scanner.nextInt();

        String num;
        Integer n= 0;
        for (int i = 0; i < test; i++) {
            num = scanner.next();

            if (num.length() == 5)
                n = 3;

            if (num.length() == 3)
            {
                int one = 0, two = 0;

                if (num.charAt(0) == 'o')
                    one++;
                if(num.charAt(1) == 'n')
                    one++;
                if (num.charAt(2) == 'e')
                    one++;
                /////////////////////////
                if(num.charAt(0) == 't')
                    two++;
                if (num.charAt(1) == 'w')
                    two++;
                if(num.charAt(2) == 'o')
                    two++;

                if(one>=2) n=1;
                else if (two>=2) n=2;

            // endif
            }

            System.out.println(n);
        }

    // end main
    }

}
