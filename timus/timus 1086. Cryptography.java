import java.util.Scanner;

public class haleon {
    /*
        timus 1086. Cryptography

        We want you to write a program that calculates the n-th by order prime number.
        given n
        find n-th prime number
    */
    static int prime[] = new int[15005];

    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);

        make_prime();
        int k = scanner.nextInt();
        for (int i = 0; i < k; i++) {
            int num = scanner.nextInt();
            System.out.println(prime[num]);
        }

    }

    public static void make_prime()
    {
        int d = 1;  //1-indexing
        for (int i = 2; d < prime.length; i++) {

            // j*j <= i reduce tle
            boolean flag = true;
            for (int j = 2; j*j <= i; j++) {
                if (i % j == 0)
                {
                    flag = false;
                    break;
                }
            }

            if (flag == true)
            {
                prime[d] = i;
                d++;
            }
        // end i
        }
        return;
    }


}
