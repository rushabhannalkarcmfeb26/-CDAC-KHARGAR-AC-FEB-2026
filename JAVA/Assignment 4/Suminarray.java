import java.util.Scanner;
class Suminarray{
	public static void main(String args[]){
		int[] array=new int[5];
		int s=0;
		
		Scanner sc=new Scanner(System.in);
			System.out.println("Enter 5 integers");
			for(int i=0;i<array.length;i++){
				System.out.println(" Enter number " +(i+1)+ " : ");
				array[i]=sc.nextInt();
					
			}	
			for(int n:array){
					s +=n;
					}
					double avg=s/(array.length);
	         System.out.print(" The Sum of all number is " +s );
	}		
		
	}	
