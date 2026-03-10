
class Concatenation{
	public static void main(String args[]){
		String s1="hello";
		String s2="world";
		String s3=s1+s2;
		
		boolean b= ( s2==s3 && s1==s3);
		if(b){
		System.out.println("All three variables point to same object :"+b);
		}else{
		System.out.println("All three variables point to different object :"+b);	
		}
	}	
}