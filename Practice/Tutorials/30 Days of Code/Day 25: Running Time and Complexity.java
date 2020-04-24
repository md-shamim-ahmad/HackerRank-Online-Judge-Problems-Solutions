import java.io.*;
import java.util.*;

public class Solution {
    static Scanner stdin = new Scanner(System.in);
    private boolean check(long num) {
        for (int i = 2; i <= Math.sqrt(num); i++) {
            if (num % i == 0) {
                return false;
            }
        }
        return true;
    }
    private void Prime_or_NotPrime () {
        int t = stdin.nextInt();
        while (t-- > 0) {
            long num = stdin.nextInt();
            if (num >= 2 && check(num)) {
                System.out.println("Prime");
            } else {
                System.out.println("Not prime");
            }
        }
    }
    public static void main(String[] args) {
        /* Enter your code here. Read input from STDIN. Print output to STDOUT. Your class should be named Solution. */
        Solution obj = new Solution();
        obj.Prime_or_NotPrime();
    }
}

