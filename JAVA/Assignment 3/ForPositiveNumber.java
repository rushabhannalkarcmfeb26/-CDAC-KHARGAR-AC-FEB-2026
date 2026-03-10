import java.util.Scanner;
class ForPositiveNumber{
	
	public static void main(String args[]){
	 Scanner sc=new Scanner(System.in);
	          System.out.println("Enter a Positive Number");
	          int i=sc.nextInt();
			  		 
	 	          do{
					 
					 System.out.println("Enter a positive number");
					 i=sc.nextInt();
					 } while(i<=0); 
					 
	               System.out.println("You entered a positive number:"+i);
		  }
}


 