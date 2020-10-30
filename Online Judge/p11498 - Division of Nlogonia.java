import java.io.BufferedInputStream;
import java.util.*;

class Main {
    /*
        p11498 - Division of Nlogonia

     */
    static Scanner scanner = new Scanner(new BufferedInputStream(System.in));

    public static void main(String[] args) {

        while (true)
        {
            int test;
            test = scanner.nextInt();
            if (test==0)
                break;

            // Division point x, y
            int dpx, dpy;
            dpx = scanner.nextInt();
            dpy = scanner.nextInt();

            for (int i = 0; i < test; i++) {
                // residence x, y
                int rx, ry;
                rx = scanner.nextInt();
                ry = scanner.nextInt();

                if(rx==dpx || ry==dpy)
                {
                    System.out.println("divisa");
                    continue;
                }

                if(rx>dpx && ry>dpy)            //1st
                    System.out.println("NE");

                if(rx<dpx && ry>dpy)            //2nd
                    System.out.println("NO");

                if(rx<dpx && ry<dpy)            //3rd
                    System.out.println("SO");

                if(rx>dpx && ry<dpy)            //4th
                    System.out.println("SE");
            //end for
            }
        //end while
        }
    // end main
    }

}
