import java.util.Scanner;
class Leapyear{
	
	public static void main(String args[]){
		
		Scanner sc=new Scanner(System.in);
		System.out.println("Type a year");
		int y =sc.nextInt();
		if(y%4==0){
			System.out.println("The given year is a leap year");
		}else if(y%100!=0){
			System.out.println("The given year is not a leap year");
		}
		
		
	}
}