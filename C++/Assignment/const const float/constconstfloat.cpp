#include<iostream>
#include <iomanip>


using namespace std;

const float pi = 3.14159f;
float circlearea(float radius) {
			return pi * radius * radius;
		}

		float circleperimeter(float radius) {
			return 2 * pi * radius;
		}

int main() {

      float radius, area, perimeter;

    //  pi=3.0f; // assignment of read only variaable 'pi' error

		float circlearea(float radius);
		float circleperimeter(float radius);

		cout << "Enter the radius of the circle: ";
		cin >> radius;

		area= circlearea(radius);

		cout << fixed << std::setprecision(4);

		cout << "The area of the circle with radius " << radius << " is : " << area << endl;

		perimeter = circleperimeter(radius);

		cout << "The perimeter of the circle with radius " << radius << " is : " << perimeter << endl;

		return 0;




	// Uncommenting the following line will cause a compilation error
	// because pi is a constant and cannot be modified.
	// pi = 3.14159;

	return 0;
}
