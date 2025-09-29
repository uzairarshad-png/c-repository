#include <iostream>
#include<vector>
using namespace std;
int main()
{
	int numofemployees;
	cout << "Welcome to the Emplaoyee Payroll Calculator!" << endl;
	cout << "Enter the number of employees: ";
	cin >> numofemployees;
	vector<double> hourlywage(numofemployees);
	vector<double> hoursworked(numofemployees);
	vector<double> weeklypay(numofemployees);
	// Input details for all employees
	for (int i = 0; i < numofemployees; i++)
	{
		cout << "\nEmployee #" << (i + 1) << " details:\n";
		cout << "Enter hourly wage: ";
		cin >> hourlywage[i];
		cout << "Enter hours worked in a week:";
		cin >> hoursworked[i];
		// Calculate weekly pay
		weeklypay[i] = hourlywage[i] * hoursworked[i];
	}
	// Display payroll for all employees at the end
	cout << "\nPayroll for all employees:\n";
	for (int i = 0; i < numofemployees; i++)
	{
		cout << "Employee #" << (i + 1) << ": $" << weeklypay[i] << endl;
	}
	return 0;
}