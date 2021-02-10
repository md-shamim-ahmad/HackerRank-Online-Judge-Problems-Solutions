import java.io.*;
import java.util.*;
import java.text.*;
import java.math.*;
import java.util.regex.*;

public class Solution {

    public static void main(String[] args) {
        /* Enter your code here. Read input from STDIN. Print output to STDOUT. Your class should be named Solution. */
        Scanner stdin = new Scanner(System.in);
        int t = stdin.nextInt();
        while(t-- > 0) {
            String str = stdin.next();
            char str1[] = new char[str.length()];
            char str2[] = new char[str.length()];
            int j = 0, k = 0;
            for(int i = 0; i < str.length(); i++) {
                if(i % 2 == 0) {
                    str1[j++] = str.charAt(i);
                }
                else {
                    str2[k++]=str.charAt(i);
                }
            }
            for (int i = 0; i < j; i++){
                System.out.print(str1[i]);
            }
            System.out.print(" ");
            for (int i = 0; i < k; i++){
                System.out.print(str2[i]);
            }
            System.out.println();

        }
       
    }
}
