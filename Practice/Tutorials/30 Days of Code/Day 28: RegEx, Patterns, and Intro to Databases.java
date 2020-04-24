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
        int N = scanner.nextInt();
        scanner.skip("(\r\n|[\n\r\u2028\u2029\u0085])?");
        ArrayList<String> data = new ArrayList<String>();
        for (int NItr = 0; NItr < N; NItr++) {
            String[] firstNameEmailID = scanner.nextLine().split(" ");
            String firstName = firstNameEmailID[0];
            String emailID = firstNameEmailID[1];
            String str = "@gmail.com";
            boolean check = false;
            //System.out.println(emailID.charAt(emailID.length() - 10));
            for (int i = emailID.length() - 10, j = 0; i < emailID.length(); i++, j++) {
                if (emailID.charAt(i) == str.charAt(j)) {
                    check = true;
                }
                else {
                    check = false;
                    break;
                }
            }
            if (check) {
                data.add(firstName);
            }
            Collections.sort(data);
        }
        for (String name : data) {
            System.out.println(name);
        }
        scanner.close();
    }
}

