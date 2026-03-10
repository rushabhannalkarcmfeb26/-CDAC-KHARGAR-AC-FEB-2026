import java.util.Scanner;
 

public class Palindrome{

    public static boolean isPalindrome(String str) {
       
        String cleanStr = str.replaceAll("[^a-zA-Z0-9]", "").toLowerCase(); //
        int left = 0;
        int right = cleanStr.length() - 1;

        while (left < right) {
            if (cleanStr.charAt(left) != cleanStr.charAt(right)) {
                return false; 
            }
            left++;
            right--;
        }
        return true; 
    }

    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        System.out.println("Enter a string to check if it is a palindrome:");
        String input = scanner.nextLine();

        if (isPalindrome(input)) {
            System.out.println("\"" + input + "\" is a palindrome.");
        } else {
            System.out.println("\"" + input + "\" is not a palindrome.");
        }
    }
}



		 
		 