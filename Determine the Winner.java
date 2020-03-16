import java.util.*;

public class Main {
    public static void main(String[] args) {
        Scanner stdin = new Scanner(System.in);
        char suit = stdin.next().charAt(0);
        int n = stdin.nextInt();
        while (n-- > 0) {
            char a = stdin.next().charAt(0);
            int num1 = stdin.nextInt();
            char b = stdin.next().charAt(0);
            int num2 = stdin.nextInt();
            if(a == suit && b != suit) {
                System.out.println("Player 1 wins");
            }
            else if(a != suit && b == suit){
                System.out.println("Player 2 wins");
            }
            else if (a == suit && b == suit) {
                if(num1 == num2) {
                    System.out.println("Draw");
                }
                else if(num1 > num2) {
                    System.out.println("Player 1 wins");
                }
                else {
                    System.out.println("Player 2 wins");
                }
            }
            else {
                if(num1 == num2) {
                    System.out.println("Draw");
                }
                else if(num1 > num2) {
                    System.out.println("Player 1 wins");
                }
                else {
                    System.out.println("Player 2 wins");
                }
            }
        }
    }
}
