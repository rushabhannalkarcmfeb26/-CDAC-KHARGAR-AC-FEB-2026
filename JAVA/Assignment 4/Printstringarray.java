import java.util.Scanner;
class Printstringarray{
	public static void main(String args[]){
		String[] array=new String[4];
		
		Scanner sc=new Scanner(System.in);
			System.out.println("Enter 4 Strings");
			for(int i=0;i<array.length;i++){
				System.out.println(" Enter String " +(i+1)+ " : ");
				array[i]=sc.nextLine();
					
			}	
			for(String n:array){
					 System.out.println(n );
					}
	        
	}		
		
	}	
