
class Stringliteral{
	public static void main(String args[]){
		String s1="java";
		String s2="java";
		String s3="java";
		
		boolean b= (s1==s2==s3);
		if(b){
		System.out.println("All three vaariables point to same object :"+b);
		}else{
		System.out.println("All three vaariables point to differernt object :"+b);	
		}
	}	
}