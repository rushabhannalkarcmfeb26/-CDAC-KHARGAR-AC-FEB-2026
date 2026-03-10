#include <iostream>
#include <string>
using namespace std;

class Employee {
private:
    const int employeeId;   
    string name;
    float salary;

public:
    // Constructor using initializer list
    Employee(int id, string n, float s) : employeeId(id), name(n), salary(s) {
        if(s < 0) {
            cout << "Invalid salary! Setting the salary to 0.\n";
            salary = 0;
        }
    }

 
    void printDetails() const {
        cout << "\n--- Employee Details ---\n";
        cout << "Employee ID : " << employeeId << endl;
        cout << "Name: " << name << endl;
        cout << "Salary: " << salary << endl;
    }
};

int main() {
    
    Employee e1(101, "Amit", 45000.5);
    cout << " Employee created with valid details.";
    e1.printDetails();

    Employee e2(103, "Raj", 0);
    cout << " Employee created with zero salary.";
    e2.printDetails();

   
    Employee e3(104, "Neha", -10000);
    cout << " Employee created with invalid salary handled.";
    e3.printDetails();

    return 0;
}
