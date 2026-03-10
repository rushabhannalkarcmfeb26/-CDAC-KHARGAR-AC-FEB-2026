import java.util.Arrays;
import java.util.Scanner;
import java.util.OptionalInt;
class LargestelementsofArray{
	public static void main(String args[]){
		int[] array=new int[5];
		Scanner sc=new Scanner(System.in);
			System.out.println("Enter 5 integers");
			for(int i=0;i< array.length;i++){
				System.out.println(" Enter number " +(i+1)+ " : ");
				array[i]=sc.nextInt();
				}
				 OptionalInt maxOptional = Arrays.stream(array).max();

       
        if (maxOptional.isPresent()) {
            int largest = maxOptional.getAsInt();
            System.out.println("The largest element in the array is: " + largest);
        } else {
            System.out.println("The array is empty.");
        }
		
		
	}	
}