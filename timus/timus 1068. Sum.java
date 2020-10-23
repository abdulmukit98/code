import java.util.Scanner;

public class haleon {
    /*
        timus 1068. Sum

    */

    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        int n = scanner.nextInt();
        int sum = 0;

        if(n<0)
            for (int i = n; i <= 1; i++) {
                sum = sum + i;
            }
        else if (n>0)
            for (int i = 1; i <= n; i++) {
                sum = sum + i;
            }
        else if (n==0)
            sum = 1;
        
        System.out.println(sum);
    }
}
