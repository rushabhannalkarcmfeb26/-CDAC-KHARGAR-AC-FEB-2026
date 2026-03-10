import java.util.Scanner;

public class VowelCounter {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);

       
        System.out.print("Enter a string: ");
        String inputString = scanner.nextLine();
        scanner.close();

        
        String lowerCaseString = inputString.toLowerCase();

        int vowelCount = 0;

        for (int i = 0; i < lowerCaseString.length(); i++) {
            char currentChar = lowerCaseString.charAt(i);

           
            if (currentChar == 'a' || currentChar == 'e' || currentChar == 'i' || currentChar == 'o' || currentChar == 'u') {
                vowelCount++;
            }
        }

        
        System.out.println("The total number of vowels in the string is: " + vowelCount);
    }
}
