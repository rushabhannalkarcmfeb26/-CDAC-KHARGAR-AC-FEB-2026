import java.util.Arrays;
import java.util.List;
import java.util.Scanner;

class Index{
    public static void main(String[] args) {
       
        Scanner scanner = new Scanner(System.in);
     
        Integer[] numbers = new Integer[5]; 

        System.out.println("Please enter 5 integers:");

       
        for (int i = 0; i < 5; i++) {
            System.out.print("Enter number " + (i + 1) + ": ");
          
            numbers[i] = scanner.nextInt(); 
        }
		Arrays.sort(numbers);
			System.out.println("The sorted array is: " + Arrays.toString(numbers));
       
		System.out.print("Enter the number to search for: ");
        int key = scanner.nextInt();

		int index = Arrays.binarySearch(numbers, key);
	 
		 if (index >= 0) {
            System.out.println("Found! The number " + key + " is at index: " + index);
        } else {
            System.out.println("Not Found");
        }

        
        scanner.close();
    }
}
