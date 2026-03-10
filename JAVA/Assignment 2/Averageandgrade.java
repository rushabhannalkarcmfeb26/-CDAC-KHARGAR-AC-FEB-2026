import java.util.Scanner;
class Averageandgrade{

	
	public static void main(String args[]){
		Scanner sc=new Scanner(System.in);
		System.out.println("Enter the marks in maths");
		   float m= sc.nextFloat();
		System.out.println("Enter the marks in science");
		 float s= sc.nextFloat();
		System.out.println("Enter the marks in history");
		 float h= sc.nextFloat();
		 float avg=((m+s+h)/3);
		 System.out.println("The average marks of student is float avg"+avg);
		    if(avg>=90.0f){
			   System.out.println("The Student has Grade A");
			}else if(avg>70.0f&&avg<90.0f){
				System.out.println("The Student has Grade B");
			}else if(avg>50.0f&&avg<69.0f){
				System.out.println("The Student has Grade C");
			}else if(avg>30.0f&&avg<49.0f){
				System.out.println("The Student has Grade D");
			}else if(avg<30.0f){
				System.out.println("The Student has Failed");
			}
			}
			
		
		
		
		
	
	
	
	
	
	
}