import java.io.*;
import java.util.*;

public class Solution {

    public static void main(String[] args) {

        Scanner sc=new Scanner(System.in);
        String A=sc.next();
        /* Enter your code here. Print output to STDOUT. */
        String reverse_A = "";
        for(int i = A.length() - 1; i >= 0; i--) {
            reverse_A += A.charAt(i);
        }
        boolean ans = true;
        for (int i = 0; i < A.length(); i++) {
            if(A.charAt(i) == reverse_A.charAt(i)) {
                ans = true;
            }
            else {
                System.out.println("No");
                ans = false;
                break;
            }
        }
        if (ans == true) {
            System.out.println("Yes");
        }
    }
}
