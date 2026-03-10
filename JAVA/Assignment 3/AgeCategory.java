import java.util.Scanner;
class AgeCategory{
	
	public static void main(String args[]){
		Scanner sc=new Scanner(System.in);
		  System.out.println("Enter Your Age");
		  int A=sc.nextInt();
		  if(A>0 && A<=18){
			  System.out.println("You are a minor.");
		  }else if(A>18 &&A <=59){
			  System.out.println("You are an adult.");
		  }else{
			  System.out.println("You are a senior citizen.");
		  }
	   }
			
	 }
	
	
	
	
	
