/*
 * Student.cpp
 *
 *  Created on: 3 Mar 2026
 *      Author: Asus
 */

#include<iostream>
#include<stdio.h>
#include<string>

using namespace std;

class Student {

private:

	char name[50];
	int rollNumber;
	float marks;
	char grade;

public:
	char getGrade() const {
		return grade;
	}

	void setGrade(char grade) {
		this->grade = grade;
	}

	float getMarks() const {
		return marks;
	}

	void setMarks(float marks) {
		this->marks = marks;
	}

	int getRollNumber() const {
		return rollNumber;
	}

	void setRollNumber(int rollNumber) {
		this->rollNumber = rollNumber;
	}



};


int main() {

	    char name[50];
		int rollNumber;
		float marks;
		char grade;

	cout << "Enter student name: " << endl;
	cin.getline(name, 50);

	cout << "Enter roll number: " << endl;
	cin >> rollNumber;

	cout << "Enter marks: " << endl;
	cin >> marks;

	cout << "Student Name: " << name << endl;
	cout << "Roll Number: " << rollNumber << endl;
	cout << "Marks: " << marks << endl;


	  if ( marks < 60.0) {
		grade = 'F';
	} else if (marks >= 60.0 && marks <= 69.0) {
		grade = 'D';
	} else if (marks >= 70.0 && marks <= 79.0) {
		grade = 'C';
	} else if (marks >= 80.0 && marks < 89.0) {
		grade = 'B';
	} else if (marks >= 90.0 && marks <= 100.0) {
		grade = 'A';
	} else {
		cout << "Invalid marks!" << endl;
		return grade; // Exit with an error code
	}

	  cout << "Grade: " << grade << endl;

	return 0;
}

