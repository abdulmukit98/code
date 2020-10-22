import java.util.Scanner;

public class haleon {
    /*
        timus 1264 Workdays

        let N = 5, M = 2

        arr[0] = 0      cnt[0]++
        arr[0] = 1      cnt[1]++
        arr[0] = 2      cnt[2]++

        arr[1] = 0      cnt[0]++
        arr[1] = 1      cnt[1]++
        arr[1] = 2      cnt[2]++

        arr[2] = 0      cnt[0]++
        arr[2] = 1      cnt[1]++
        arr[2] = 2      cnt[2]++

        arr[3] = 0      cnt[0]++
        arr[3] = 1      cnt[1]++
        arr[3] = 2      cnt[2]++

        arr[4] = 0      cnt[0]++
        arr[4] = 1      cnt[1]++
        arr[4] = 2      cnt[2]++            N -->  0 --- N-1
                                            M --> 0 --- M
        result = N * M+1
     */

    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        int N, M;
        N = scanner.nextInt();
        M = scanner.nextInt();

        System.out.println(N * (M+1));
    }
}
