/*#include<iostream>
using namespace std;
float balance = 1000.0;
void blnc() //function for balance checking
{
	cout << "Current Balance of your Account is: " << balance << "$" << endl;
}
void dep() //function for depositing amount
{
	float deposit;
	cout << "Enter an amount to Deposit: ";
	cin >> deposit;
	balance += deposit;
	cout << "Updated Balance is: " << balance << endl;
}
void wtdw() //function for Withdrawing amount
{
	float withdraw;
	
	do{
		cout << "Enter an amount to Withdraw: ";
		cin >> withdraw;
	}
	while (withdraw > balance);
	balance -= withdraw;
	cout << "Updated Balance is: " << balance << endl;
}
int main()
{
	int choice; //variable for inputting choice
Choice:
	{
		cout << "Welcome to the ATM system" << endl;
		cout << "1. Check Balance" << endl;
		cout << "2. Deposit" << endl;
		cout << "3. Withdraw" << endl;
		cout << "4. Exit" << endl;
		//choice section for validation 
		do {
			cout << "Choose an option: ";
			cin >> choice;
		}while (choice > 4 || choice < 1);
	}
	switch (choice) {
	case 1:
		blnc();
		break;

	case 2:
		dep();
		break;

	case 3:
		wtdw();
		break;

	case 4:
		cout << "Thank You for Using our ATM services;";
		break;
	}
	if (choice == 1 || choice == 2 || choice == 3) {
		goto Choice;
	}
	return 0;
}*/