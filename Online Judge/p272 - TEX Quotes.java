import java.io.BufferedInputStream;
import java.util.*;

class Main {
    /*
        272 - TEX Quotes
     */
    static Scanner scanner = new Scanner(new BufferedInputStream(System.in));

    public static void main(String[] args) {

        boolean flag = true;        // true ``   false ''
        while (scanner.hasNext())
        {
            String s1 = scanner.nextLine();
            for (int i = 0; i < s1.length(); i++) {
                if(s1.charAt(i) == '"' && flag == true)
                {
                    System.out.print("``");
                    flag = false;
                    continue;
                }
                else if(s1.charAt(i) == '"' && flag == false)
                {
                    System.out.print("''");
                    flag = true;
                    continue;
                }
                System.out.print(s1.charAt(i));
            }
            System.out.print("\n");
        // end while
        }

    // end main
    }

}
