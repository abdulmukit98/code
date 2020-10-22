import java.util.Scanner;

public class haleon {
    /*
        timus 1409. Two Gangsters


        Harry shot 4    larry shot 7

        H H H H
              L L L L L L L

        both of them shot mid-can
        Harry dont shot = larry -1
        Larry dont shot = harry -1
    */

    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        int H,L;
        H = scanner.nextInt();
        L = scanner.nextInt();

        System.out.println((L-1) + " " + (H-1));
    }
}
