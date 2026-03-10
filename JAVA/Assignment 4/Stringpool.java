
class Stringpool{
	public static void main(String args[]){
		String str1=new String("hello");
		String str2=str1.intern();
		String str3="hello";
		
		
		boolean b= (str2==str3);
		
		
		
		if(b){
			System.out.println("Both variables point to same object :"+b);
		}else{
		System.out.println("Both variables point to different object :"+b);
			}
		
	}	
}