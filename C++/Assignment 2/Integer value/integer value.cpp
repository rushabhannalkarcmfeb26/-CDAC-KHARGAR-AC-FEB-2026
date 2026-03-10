#include <iostream>
using namespace std;

int main() {
  
    int num = 10;
    cout << " Initial Value ";
    cout << "num = " << num << endl;

  
    int *ptr = &num;   // pointer to num
    int &ref = num;    // reference to num

    //  Modify using pointer
    *ptr = 20;
    cout << " After Pointer Modification \n";
    cout << "num = " << num  << endl;

    //  Modify using reference
    ref = 30;
    cout << " After Reference Modification \n";
    cout << "num = " << num  << endl;

    
   
    cout << "num = " << num << endl;
    cout << "*ptr = " << *ptr << " After Pointer "<< endl; 
    cout << "ref = " << ref <<" After Reference " << endl;

    return 0;
}
