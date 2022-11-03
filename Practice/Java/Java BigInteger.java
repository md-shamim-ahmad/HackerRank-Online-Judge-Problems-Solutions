import java.util.*;
import java.math.*;

public class Solution {

    public static void main(String[] args) {
        /* Enter your code here. Read input from STDIN. Print output to STDOUT. Your class should be named Solution. */
        Scanner stdin = new Scanner(System.in);        
        BigInteger c = stdin.nextBigInteger();
        BigInteger d = stdin.nextBigInteger();
        
        System.out.print(c.add(d)+"\n"+c.multiply(d));
    }
}
