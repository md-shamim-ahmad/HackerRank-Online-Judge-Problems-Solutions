/* package codechef; // don't place package name! */

import java.util.*;
import java.lang.*;
import java.io.*;

/* Name of the class has to be "Main" only if the class is public. */
public class Main {
    public static void main(String[] args) throws java.lang.Exception {
        Scanner stdin = new Scanner(System.in);
        int n = stdin.nextInt();
        int k = stdin.nextInt();
        int cnt = 0, max = 0;
        for (int i = 0; i < n; i++) {
            int num = stdin.nextInt();
            max = Math.max(num, max);
        }
        if(max - k > 0)
            System.out.println(max - k);
        else
            System.out.println(0);
    }
}
