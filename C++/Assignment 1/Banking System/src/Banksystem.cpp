/*
 * Banksystem.cpp
 *
 *  Created on: 3 Mar 2026
 *      Author: Asus
 */

#include<iostream>
#include<stdlib.h>
#include<string>

using namespace std;

class Bank {

public:

	int accountNumber;
	char accountHolderName[50];
	double balance;


public:



	char* getAccountHolderName() {
		return accountHolderName;
	}

	int getAccountNumber() const {
		return accountNumber;
	}

	void setAccountNumber(int accountNumber) {
		this->accountNumber = accountNumber;
	}

	double getBalance() const {
		return balance;
	}

	void setBalance(double balance) {
		this->balance = balance;
	}

void deposit(double amount) {

	cout << "Enter account number: " << endl;
	cin >> accountNumber;

	cout << "Enter amount to deposit: " << endl;
	cin >> amount;

	cout << "Amount deposited successfully! to "<< accountNumber  << endl;
	balance += amount;

	cout << "Current balance: " << balance << endl;


 return;

}

void withdraw(double amount) {

	cout << "Enter account number: " << endl;
	cin >> accountNumber;

	cout << "Enter amount to withdraw: " << endl;
	cin >> amount;

	if(amount > balance)

		cout << "Insufficient Balance" <<endl;

	else{

	cout << "Amount withdrawn successfully!" << endl;
	balance -= amount;

	cout << "Current balance: " << balance << endl;

}
	return;
}
void displayAccountDetails() {


	cout << "Account Number: " << accountNumber << endl;
	cout << "Account Holder Name: " << accountHolderName << endl;
	cout << "Current Balance: " << balance <<endl;

	return;
}

};

 int main() {

	Bank b1;


	cout << "Enter account holder name: " << endl;
    cin >> b1.accountHolderName;

	cout << "Enter account number: " << endl;
	cin >> b1.accountNumber;

	cout << "Enter currrent balance: " << endl;
	cin >> b1.balance;



    void menu();

	cout << "Choose an option: " << endl;
	cout << "1. Deposit" << endl;
	cout << "2. Withdraw" << endl;
	cout << "3. Display Account Details" << endl;
	cout << "4. Exit" << endl;

	int choice;
	cin >> choice;

	switch(choice) {

		case 1:
			b1.deposit(0);
			break;

		case 2:
			b1.withdraw(0);
			break;

		case 3:
			b1.displayAccountDetails();
			break;

		case 4:
			exit(0);
			break;

		default:
			cout << "Invalid choice!" << endl;

}

exit(0);
}






