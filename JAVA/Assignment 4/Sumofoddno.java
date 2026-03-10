import java.util.Scanner;
class Sumofoddno{
		
	public static void main(String args[]){
		int i;
		int s=0;
	Scanner sc=new Scanner(System.in);
		System.out.println("Enter a number.");
	int N= sc.nextInt();
	System.out.print("The Sum of odd numbers from 1 to "+N+"is:");
		for(i=1;i<=N;i++){
			if(i%2!=0){
					s+=i;
				  
			 }			 
	}
				  System.out.print(+s);
	
	}	  
}	
	
	
	
	
	