import java.util.*;

public class Main {
    public static void main(String[] args) {
        Scanner stdin = new Scanner(System.in);
        int n = stdin.nextInt();
        factorial(n);
    }
    public static void factorial(int n) {
        long m =  n;
        while (n != 1) {
            m = m * (n - 1);
            n -= 1;
        }
        System.out.println(m);
    }
}
