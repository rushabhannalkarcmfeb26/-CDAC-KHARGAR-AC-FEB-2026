#include <iostream>

using namespace std;

int main()
{
	int x = 10;
	int y = 20;
	int z = 30;

	int *px=&x;
	int *py=&y;
	int *pz=&z;


	cout << "Address of x: " << px << endl; // Output: Address of x
	  cout << "Address of y: " << py << endl; // Output: Address of y
	  	cout << "Address of z: " << pz << endl; // Output: Address of z


	cout << "Value of x: " << *pz << endl; // Output: 10
  cout << "Value of y: " << *py << endl; // Output: 20
	cout << "Value of z: " << *px << endl; // Output: 30

	cout << "Address of x: " << px << endl; // Output: Address of x
  cout << "Address of y: " << py << endl; // Output: Address of y
  	cout << "Address of z: " << pz << endl; // Output: Address of z
	return 0;
}



