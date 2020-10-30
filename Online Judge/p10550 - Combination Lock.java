import java.io.BufferedInputStream;
import java.util.*;

class Main {
    /*
        10550 - Combination Lock

        Counting angle for clockwise is (start point) - ( end point )
        Counting angle for counter clockwise is (end point) - (start point )
     */
    static Scanner scanner = new Scanner(new BufferedInputStream(System.in));

    public static void main(String[] args) {

        while (scanner.hasNext())
        {
            int start, first, second, third, turn = 0;
            start = scanner.nextInt();
            first = scanner.nextInt();
            second = scanner.nextInt();
            third = scanner.nextInt();

            if (start==0 && first==0 && second==0 && third==0)
                break;

            // clockwise start to first (sp - ep)
            turn = turn + (start - first + 40) % 40;

            start = first;
            // counter clockwise first to second (ep - sp)
            turn = turn + (second - start + 40) % 40;

            start = second;
            // clockwise second to third (sp - ep)
            turn = turn + (start - third + 40) % 40;

            // 3 complete turn
            turn = turn + 120;

            // Degree = turn/40 * 360
            Double degree = ( Double.valueOf(turn) / 40) * 360;
            System.out.format("%.0f\n",degree);
        }

    // end main
    }

}
