import java.util.Arrays;
import java.util.Scanner;
import java.util.ArrayList;
class Ascarray{
	public static void main(String args[]){
		int[] array=new int[5];
		
		Scanner sc=new Scanner(System.in);
			System.out.println("Enter 5 integers");
			for(int i=0;i<array.length;i++){
				System.out.println(" Enter number " +(i+1)+ " : ");
				array[i]=sc.nextInt();
				}	
				Arrays.sort(array);
			System.out.println("The sorted array is: " + Arrays.toString(array));
			
	}		
		
	}	
