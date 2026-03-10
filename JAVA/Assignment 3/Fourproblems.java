import java.util.Scanner;
class Fourproblems{
	public static void main(String args[]){
	
        Scanner sc=new Scanner(System.in);
		int choice;
		do{
			System.out.println("Problem Menu");
			System.out.println("1. Grade Evaluation System.");
			System.out.println("2. Leap Year Check.");
			System.out.println("3.Day of the Week.");
			System.out.println("4.Identify Default Values of Variables.");
			System.out.println("5.Exit.");
			System.out.println("Enter Your Choice");
			choice=sc.nextInt();
			
			switch(choice){
				
			case 1:
			 	System.out.println("Enter average marks obtained");
		          float avg= sc.nextFloat();
				  if(avg>=90.0f){
			   System.out.println("The Student has Grade A");
			}else if(avg>70.0f && avg<90.0f){
				System.out.println("The Student has Grade B");
			}else if(avg>50.0f && avg<69.0f){
				System.out.println("The Student has Grade C");
			}else if(avg>30.0f && avg<49.0f){
				System.out.println("The Student has Grade D");
			}else if(avg<30.0f){
				System.out.println("The Student has Failed");
			}
				break;
				
			case 2:
				System.out.println("Type a year");
		       int y =sc.nextInt();
		          if(y%4==0){
			    System.out.println("The given year is a leap year");
		    }else if(y%100!=0){
			    System.out.println("The given year is not a leap year");
		    }
			   break;
			   
			case 3:
			   System.out.println("Type a day number");
				int z =sc.nextInt();
				
				switch(z){
					case 1: 
						System.out.println("Monday");
						break;
					case 2:
						System.out.println("Tuesday");
						break;
					case 3:
						System.out.println("Wednesday");
						break;
					case 4:
						System.out.println("Thursday");
						break;
					case 5:
						System.out.println("Friday");
						break;
					case 6:
						System.out.println("Saturday");
						break;
					case 7:
						System.out.println("Sunday");
					}
				if(z>7){
						System.out.println("Invalid day number");
					}
					break;
					
				case 4:
			   
			   class Variables{
					static byte a=125;
					static short b=28500;
					static int c=25;
					static long d=286;
					static float e=85.0f;
					static double f=151.00;
					static char g='o';
					static boolean h=f>2;
	
				public static void main(String args[]){
					System.out.println("data type byte"  +a);
					System.out.println("data type short"  +b);
					System.out.println("data type int"  +c);
					System.out.println("data type long"  +d);
					System.out.println("data type float"  +e);
					System.out.println("data type double"  +f);
					System.out.println("data type char" +g );
					System.out.println("data type boolean"  +h);
				}
				}
					break;
					
				case 5:
					System.out.println("Exiting the menu..");
				    break;
	   
			}
			
			
		    }while(choice!=5);
			
			
		    }	
	  
			  		 
	 	         
		  }



 