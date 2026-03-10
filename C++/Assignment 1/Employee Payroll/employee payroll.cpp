#include <iostream>
#include <string>
#include <vector>
using namespace std;

class Employee {
private:
    int empID;
    string empName;
    double empSalary;
    double grossSalary;

public:
    // Constructor
    Employee(int id = 0, string name = "", double salary = 0.0) {
        empID = id;
        empName = name;
        empSalary = salary;
        grossSalary = 0.0;
    }

    // Setters
    void setEmpID(int id) {
        if(id <= 0) {
            cout << "❌ Invalid Employee ID! Must be positive.\n";
        } else {
            empID = id;
        }
    }

    void setEmpName(string name) {
        if(name.empty()) {
            cout << "❌ Invalid name! Please enter a non-empty name.\n";
        } else {
            empName = name;
        }
    }

    void setEmpSalary(double salary) {
        if(salary < 0) {
            cout << "❌ Invalid salary! Cannot be negative.\n";
        } else {
            empSalary = salary;
        }
    }

    // Getters
    int getEmpID() { return empID; }
    string getEmpName() { return empName; }
    double getEmpSalary() { return empSalary; }
    double getGrossSalary() { return grossSalary; }

    // Calculate gross salary with bonus rules
    void calculateGrossSalary() {
        if(empSalary <= 5000) {
            grossSalary = empSalary + (empSalary * 0.10);
        } else if(empSalary <= 10000) {
            grossSalary = empSalary + (empSalary * 0.15);
        } else {
            grossSalary = empSalary + (empSalary * 0.20);
        }
        cout << "✅ Gross Salary calculated successfully!\n";
    }

    // Display employee details
    void displayEmployeeDetails() {
        cout << "\n--- Employee Details ---\n";
        cout << "Employee ID     : " << empID << endl;
        cout << "Employee Name   : " << empName << endl;
        cout << "Basic Salary    : Rs." << empSalary << endl;
        cout << "Gross Salary    : Rs." << grossSalary << endl;
    }
};

int main() {
    vector<Employee> employees;
    int choice;

    do {
        cout << "\n--- Employee Payroll Menu ---\n";
        cout << "1. Add a New Employee\n";
        cout << "2. Calculate Gross Salary\n";
        cout << "3. Display Employee Details\n";
        cout << "4. Update Employee Information\n";
        cout << "5. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;

        switch(choice) {
        case 1: {
            int id;
            string name;
            double salary;
            cout << "Enter Employee ID: ";
            cin >> id;
            cout << "Enter Employee Name: ";
            cin.ignore();
            getline(cin, name);
            cout << "Enter Employee Salary: ";
            cin >> salary;

            // Ensure unique ID
            bool exists = false;
            for(auto &e : employees) {
                if(e.getEmpID() == id) {
                    exists = true;
                    break;
                }
            }
            if(exists) {
                cout << "❌ Employee ID already exists! Try again.\n";
            } else {
                Employee emp(id, name, salary);
                employees.push_back(emp);
                cout << "✅ Employee added successfully!\n";
            }
            break;
        }
        case 2: {
            int id;
            cout << "Enter Employee ID to calculate gross salary: ";
            cin >> id;
            bool found = false;
            for(auto &e : employees) {
                if(e.getEmpID() == id) {
                    e.calculateGrossSalary();
                    found = true;
                    break;
                }
            }
            if(!found) cout << "❌ Employee not found!\n";
            break;
        }
        case 3: {
            int id;
            cout << "Enter Employee ID to display details: ";
            cin >> id;
            bool found = false;
            for(auto &e : employees) {
                if(e.getEmpID() == id) {
                    e.displayEmployeeDetails();
                    found = true;
                    break;
                }
            }
            if(!found) cout << "❌ Employee not found!\n";
            break;
        }
        case 4: {
            int id;
            cout << "Enter Employee ID to update: ";
            cin >> id;
            bool found = false;
            for(auto &e : employees) {
                if(e.getEmpID() == id) {
                    string newName;
                    double newSalary;
                    cout << "Enter New Name: ";
                    cin.ignore();
                    getline(cin, newName);
                    cout << "Enter New Salary: ";
                    cin >> newSalary;
                    e.setEmpName(newName);
                    e.setEmpSalary(newSalary);
                    cout << "✅ Employee information updated!\n";
                    found = true;
                    break;
                }
            }
            if(!found) cout << "❌ Employee not found!\n";
            break;
        }
        case 5:
            cout << "👋 Exiting program...\n";
            break;
        default:
            cout << "❌ Invalid choice! Try again.\n";
        }
    } while(choice != 5);

    return 0;
}
