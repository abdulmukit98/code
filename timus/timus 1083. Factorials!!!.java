import java.util.Scanner;

public class haleon {
    /*
        timus 1083. Factorials!!!

        let say n = 55  k = !!!! = 4
        55 . 55-4 . 55-8 . 55-12 . .........   55%4

        n = 55    k = !!!!! = 5
        55 . 55-5 . 55-10 . ..............  5

        loop iterate while n>0
    */

    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        int n;
        String k;
        n = scanner.nextInt();
        k = scanner.next();
        int len = k.length();

        fact(n, len);
    }

    public static void fact(int n, int k)
    {
        int mul = 1;
        while (n > 0) {
            mul = mul * n;
            n = n-k;
        }
        System.out.println(mul);
    }
}
