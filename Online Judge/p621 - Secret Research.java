import java.io.BufferedInputStream;
import java.util.Scanner;

class Main {
    /*
        p621 - Secret Research


     */
    static Scanner scanner = new Scanner(new BufferedInputStream(System.in));
    public static void main(String[] args) {

        int test;
        test = scanner.nextInt();

        for (int t = 0; t < test; t++) {
            String s1;
            s1 = scanner.next();
            if (s1.compareTo("1")==0 || s1.compareTo("4")==0 || s1.compareTo("78")==0)
            {
                System.out.println("+");
                continue;
            }

            // s35
            else if (s1.charAt(s1.length()-1)=='5' && s1.charAt(s1.length()-2)=='3')
            {
                System.out.println("-");
                continue;
            }

            // 9s4
            else if (s1.charAt(0)=='9' && s1.charAt(s1.length()-1)=='4')
            {
                System.out.println("*");
                continue;
            }

            // any other case including 190s, -not complete
            System.out.println("?");

        }

    }


}
