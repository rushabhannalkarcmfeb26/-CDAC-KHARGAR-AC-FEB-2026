import java.util.Scanner;
class Posnegarray{
	public static void main(String args[]){
		int[] array=new int[6];
		int count1=0;
		int count2=0;
		Scanner sc=new Scanner(System.in);
			System.out.println("Enter 6 integers");
			for(int i=0;i<array.length;i++){
				System.out.println(" Enter number " +(i+1)+ " : ");
				array[i]=sc.nextInt();
					
			}	
			Arrays.sort(array);
					System.out.println(Arrays.toString(array));
						
	       
	}		
		
	}	
