import java.io.*;
import java.util.*;
import java.text.*;
import java.math.*;
import java.util.regex.*;

public class Solution {

    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int n = sc.nextInt();
        PriorityQueue<Integer> pQueue = new PriorityQueue<Integer>();
        
        for(int i = 0; i < n; i++) {
            int q = sc.nextInt();
            switch(q) {
                case 1 : 
                    pQueue.add(sc.nextInt());
                    break;
                case 2 : 
                    pQueue.remove(sc.nextInt());
                    break;
                case 3 : 
                    System.out.println(pQueue.peek());
                    break;
            }
        }
    }
}

