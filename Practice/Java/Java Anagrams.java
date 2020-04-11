import java.util.Scanner;

public class Solution {

    static boolean isAnagram(String a, String b) {
        // Complete the function
        int arr1[] = new int[26];
        int arr2[] = new int[26];
        a = a.toLowerCase();
        b = b.toLowerCase();
        if (a.length() != b.length()) {
            return false;
        }
        else {
            for (int i = 0; i < a.length(); i++) {
                arr1[a.charAt(i) - 'a']++;
                arr2[b.charAt(i) - 'a']++;
            }
            try {
                for (int i = 0; i < 26; i++) {
                    if (arr1[i] != arr2[i]) {
                        return false;
                    }
                }
            } catch (ArrayIndexOutOfBoundsException e) {
                return false;
            }
        }
        return  true;
    }

  public static void main(String[] args) {
    
        Scanner scan = new Scanner(System.in);
        String a = scan.next();
        String b = scan.next();
        scan.close();
        boolean ret = isAnagram(a, b);
        System.out.println( (ret) ? "Anagrams" : "Not Anagrams" );
    }
}

