#include <iostream>
#include <string>
using namespace std;

class Student {
private:
    int rollNo;
    string name;
    int marks;

public:
    // 1. Default constructor
    Student() {
        rollNo = 0;
        name = "Unknown";
        marks = 0;
    }

    // 2. Parameterized constructor
    Student(int r, string n, int m) {
        rollNo = r;
        name = n;
        marks = m;
    }

    // 3. Constructor using this-> pointer
    Student(int rollNo, string name, int marks) {
        this->rollNo = rollNo;
        this->name = name;
        this->marks = marks;
    }

    // 4. Function to print student details
    void printDetails() const {
        cout << "\n--- Student Details ---\n";
        cout << "Roll No : " << rollNo << endl;
        cout << "Name    : " << name << endl;
        cout << "Marks   : " << marks << endl;
    }
};

int main() {
    //   Object using default constructor
    Student s1;
    cout << " Object created using Default Constructor";
    s1.printDetails();

    //  Object using parameterized constructor
    Student s2(101, "Amit", 85);
    cout << " Object created using Parameterized Constructor";
    s2.printDetails();
	
	
	Student s3(105, "Kiran", 75);
    cout << " Object created using Parameterized Constructor.";
    s3.printDetails();


    //  Object using constructor with this-> pointer
    Student s4(102, "Sneha", 92);
    cout << "Object created using Constructor with this-> pointer";
    s4.printDetails();

    

   
   
    return 0;
}
