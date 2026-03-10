import java.util.Scanner;
class Factorial{
	
	
	public static void main(String args[]){
	long s=1;
	
	Scanner sc=new Scanner(System.in);
		System.out.println("Enter a number.");
	int N= sc.nextInt();
	int i=N;
	for(i=1;i<=N;i++){
	 		 s*=i;
	 	  }
		 	 System.out.println("The factorial of"+N+"is"+s);
	}	  
}	
	
	
	
	
	