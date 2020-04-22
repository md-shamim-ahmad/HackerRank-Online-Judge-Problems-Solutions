import java.util.*;

public class Solution {
    public static void main(String[] args) {
        Scanner stdin = new Scanner(System.in);
        int n = stdin.nextInt();
        int diagonal1 = 0, diagonal2 = 0;
        int[][] Matrix = new int[n][n];
        int[][] Rev_Matrix = new int[n][n];
        for (int i = 0; i < n; i++) {
            for (int j = 0, p = n - 1; j < n; j++) {
                int element = stdin.nextInt();
                Matrix[i][j] = element;
                Rev_Matrix[i][p--] = element;
            }
            diagonal1 += Matrix[i][i];
            diagonal2 += Rev_Matrix[i][i];
        }
        Rev_Matrix = null;
        Matrix = null;
        System.out.println(Math.abs(diagonal1 - diagonal2));
    }
}

