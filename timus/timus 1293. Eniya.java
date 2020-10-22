import java.util.Scanner;

public class haleon {
    /*
        timus 1293. Eniya

        N number
        A length
        B width
        2 processing on both side
     */

    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        int N, A, B;
        N = scanner.nextInt();
        A = scanner.nextInt();
        B = scanner.nextInt();

        System.out.println(N * A * B * 2);
    }
}
