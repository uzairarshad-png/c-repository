#include <iostream>
using namespace std;

int main()
{
    int numofemployees;

    cout << "Welcome to the Employee Payroll Calculator!" << endl;
    cout << "Enter the number of employees: ";
    cin >> numofemployees;

    // Declare arrays with maximum size
    double hourlywage[100];   // assuming max 100 employees
    double hoursworked[100];
    double weeklypay[100];

    // Input details for all employees
    for (int i = 0; i < numofemployees; i++)
    {
        cout << "\nEmployee #" << (i + 1) << " details:\n";
        cout << "Enter hourly wage: ";
        cin >> hourlywage[i];
        cout << "Enter hours worked in a week: ";
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
