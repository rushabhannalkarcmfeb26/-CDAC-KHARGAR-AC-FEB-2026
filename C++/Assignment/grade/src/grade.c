
 #include <stdio.h>

  int main(){

	 //Total Marks of 5 subjects
	float TM = 500;
	 //five float values
	float f1 = 78;
    float f2 = 85;
    float f3 = 95;
    float f4 = 75;
    float f5 = 68;
    float f6= (f1+f2+f3+f4+f5);
    float f7= (f6/TM)*100;

    printf("The total marks obtained are %1f\n", f6);
    printf("Percentage of marks is %f\n", f7);
    return 0;

 }



