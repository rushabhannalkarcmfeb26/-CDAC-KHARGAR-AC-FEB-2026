import java.util.Scanner;
class PrintEvenno{
		
	public static void main(String args[]){
		int i=1;
	Scanner sc=new Scanner(System.in);
		System.out.println("Enter a number.");
	int N= sc.nextInt();
	System.out.print("The Even numbers from 1to "+N+"are");
		for(i=1;i<=N;i++){
			if(i%2==0){ 
				  System.out.print(" "+i+" ");
			 }
	}	  	
	}	  
}	
	
	
	
	
	