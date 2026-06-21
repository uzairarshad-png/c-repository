/*#include <iostream>
#include <string>
using namespace std;

void recordTransaction(double& totalIncome, double& totalExpense) {
    double amount;
    string category;
    cin.ignore();
    cout << "\nEnter Category (Food, Travel, Bills etc): ";
    getline(cin, category);
    cout << "Enter Amount (Positive for Income and Negative for Expense): ";
    cin >> amount;

    if (amount > 0) {
        totalIncome += amount;
        cout << "\nAmount recorded as Income in " << category << " category.\n";
        cout << "Total Income so far: $" << totalIncome << endl;
    }
    else if (amount < 0) {
        totalExpense += amount;
        cout << "\nAmount recorded as Expense in " << category << " category.\n";
        cout << "Total Expense so far: $" << -totalExpense << endl;
    }
    else {
        cout << "\nInvalid amount. Please enter a non-zero value.\n";
    }
}

void viewExpense(double totalExpense) {
    cout << "\nTotal Expenses: $" << -totalExpense << endl;
}

void viewIncome(double totalIncome) {
    cout << "\nTotal Income: $" << totalIncome << endl;
}

void viewBudget(double totalIncome, double totalExpense) {
    double budget = totalIncome + totalExpense; // expense is stored as negative
    cout << "\n--------------------------------";
    cout << "\nTotal Income: $" << totalIncome;
    cout << "\nTotal Expenses: $" << -totalExpense;
    cout << "\n--------------------------------";
    cout << "\nCurrent Balance / Budget Remaining: $" << budget << endl;
}

int main() {
    int choice;
    double totalIncome = 0, totalExpense = 0;

    do {
        cout << "\n===================================";
        cout << "\n\t< Finance Expense Tracker >";
        cout << "\n===================================";
        cout << "\nEnter Option (1-4), 0 to Exit:";
        cout << "\n\t1. Record Transaction";
        cout << "\n\t2. View Expenses";
        cout << "\n\t3. View Income";
        cout << "\n\t4. View Budget";
        cout << "\n\t0. Exit";
        cout << "\n-----------------------------------\n";
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) {
        case 1:
            recordTransaction(totalIncome, totalExpense);
            break;
        case 2:
            viewExpense(totalExpense);
            break;
        case 3:
            viewIncome(totalIncome);
            break;
        case 4:
            viewBudget(totalIncome, totalExpense);
            break;
        case 0:
            cout << "\nExiting Program... Goodbye!\n";
            break;
        default:
            cout << "\nInvalid choice! Please enter between 0-4.\n";
        }

    } while (choice != 0);

    return 0;
}
*/