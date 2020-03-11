import java.io.*;
import java.math.*;
import java.security.*;
import java.text.*;
import java.util.*;
import java.util.concurrent.*;
import java.util.regex.*;

public class Solution {

    private static final Scanner scanner = new Scanner(System.in);

    public static void main(String[] args) {
        int n = scanner.nextInt();                scanner.close();
        int cnt = 0, t = 0;
        while (n > 0) {
            int rem = n % 2;
            if (rem == 1) {
                cnt++;
                if (cnt > t)
                    t = cnt;
            } else
                cnt = 0;
            n /= 2;
        }
        System.out.println(t);
    }
}
