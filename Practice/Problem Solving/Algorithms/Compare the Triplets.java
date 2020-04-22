import java.util.*;

public class Solution {
    public static void main(String[] args) {
        Scanner stdin = new Scanner(System.in);
        int[] a_arr = new int[3];
        for (int i = 0; i < 3; i++) {
            a_arr[i] = stdin.nextInt();
        }
        int a = 0, b = 0;
        for (int i = 0; i < 3; i++) {
            int num = stdin.nextInt();
            if (num == a_arr[i]) {
                continue;
            }
            else if (num > a_arr[i]){
                b++;
            }
            else {
                a++;
            }
        }
        System.out.println(a + " " + b);
    }
}

