import java.util.*;

public class Solution {
    public static void main(String[] args) {
        Scanner stdin = new Scanner(System.in);
        int n = stdin.nextInt();
        int positive = 0, negative = 0, zero = 0;
        for (int i = 0; i < n; i++) {
            int num = stdin.nextInt();
            if (num == 0) {
                zero++;
            }
            else if (num > 0) {
                positive++;
            }
            else {
                negative++;
            }
        }
        System.out.printf("%.6f\n",(double) positive / n);
        System.out.printf("%.6f\n", (double) negative / n);
        System.out.printf("%.6f\n",(double) zero / n);
    }
}
