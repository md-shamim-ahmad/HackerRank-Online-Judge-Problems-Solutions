import java.io.*;
import java.util.*;

public class Solution {
    static Scanner stdin = new Scanner(System.in);
    private void Prime_or_NotPrime () {
        int y1, y2, m1, m2, d1, d2;
        d1 = stdin.nextInt();
        m1 = stdin.nextInt();
        y1 = stdin.nextInt();
        d2 = stdin.nextInt();
        m2 = stdin.nextInt();
        y2 = stdin.nextInt();

        if (y1 > y2) {
            System.out.println(10000);
        } else if (m1 > m2 && y1 >= y2) {
            System.out.println(500 * Math.abs(m1 - m2));
        } else if (d1 > d2 && m1 >= m2 && y1 >= y2) {
            System.out.println(15 * Math.abs(d1 - d2));
        } else {
            System.out.println(0);
        }
    }
    public static void main(String[] args) {
        /* Enter your code here. Read input from STDIN. Print output to STDOUT. Your class should be named Solution. */
        Solution obj = new Solution();
        obj.Prime_or_NotPrime();
    }
}

