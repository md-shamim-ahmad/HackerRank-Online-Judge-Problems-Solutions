import java.io.*;
import java.util.*;
import java.text.*;
import java.math.*;
import java.util.regex.*;

public class Solution {
	
    public static void main(String[] args) {
        int i = 4;
        double d = 4.0;
        String s = "HackerRank ";
		
        Scanner scan = new Scanner(System.in);
        int Integer = scan.nextInt();
        Integer += i;
        double db = scan.nextDouble();
        db += d;
        scan.nextLine();
        String str = scan.nextLine();
        System.out.printf("%d\n%.1f\n",Integer, db);
        System.out.println(s + str);

        scan.close();
    }
}
