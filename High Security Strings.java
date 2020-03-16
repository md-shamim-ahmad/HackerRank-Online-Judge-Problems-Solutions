import java.io.*;
import java.math.*;
import java.security.*;
import java.text.*;
import java.util.*;
import java.util.concurrent.*;
import java.util.function.*;
import java.util.regex.*;
import java.util.stream.*;
import static java.util.stream.Collectors.joining;
import static java.util.stream.Collectors.toList;

public class Solution {
    public static void main(String[] args) throws IOException {
        Scanner stdin = new Scanner(System.in);
        String password = stdin.next();
        int weight_a = stdin.nextInt();
        int value = 0;
        for(int i = 0; i < password.length(); i++) {
            int num = password.charAt(i) - 97 + weight_a;
            value += (num % 26);
        }
        System.out.println(value);
    }
}
