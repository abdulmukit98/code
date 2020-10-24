import java.util.Scanner;

public class Main {
    /*
        online judge 100 - The 3n + 1 problem
    */

    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        int i;
        int j;

        while (scanner.hasNext())
        {
            int max = 0;
            i = scanner.nextInt();
            j = scanner.nextInt();

            if(i<j)
                for (int k = i; k <= j; k++) {
                    max = Math.max(max, count(k));
                }
            else if (i>j)
                for (int k = j; k <= i; k++) {
                    max = Math.max(max, count(k));
                }
            else if (i==j)
                max = count(i);

            System.out.println(i + " " + j + " " + max);
        }
    }

    static int count(int n)
    {
        int cnt = 1;        // initial n
        while (n != 1)
        {
            //System.out.println(n);
            if (n%2 == 1) n = 3*n +1;
            else if (n%2 == 0) n = n/2;
            cnt++;
        }
        return cnt;
    }
}
