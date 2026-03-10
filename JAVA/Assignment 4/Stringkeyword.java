
class Stringkeyword{
	public static void main(String args[]){
		String str1=new String("hello");
		String str2=new String("hello");
		
		
		boolean b= (str1==str2);
		boolean c= (str1.equals(str2));
		
		if(b){
			System.out.println("Both variables point to same object :"+b);
		}else{
		System.out.println("Both variables point to different object :"+b);
			}
		if(c){
			System.out.println("Both variables have same content :"+c);
		}else{
		System.out.println("Both variables have different content :"+c);
	}
	}	
}