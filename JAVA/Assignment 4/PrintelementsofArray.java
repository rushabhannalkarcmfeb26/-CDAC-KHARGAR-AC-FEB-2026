import java.util.Scanner;
class PrintelementsofArray{
	public static void main(String args[]){
		int[] array=new int[5];
		Scanner sc=new Scanner(System.in);
			System.out.println("Enter 5 integers");
			for(int i=0;i< array.length;i++){
				System.out.println(" Enter number " +(i+1)+ " : ");
				array[i]=sc.nextInt();
				
			}
				System.out.println("The elements of an array are : ");
				for(int n:array){
					System.out.print(" " +n );
				}
		
		
		
		
	}	
}