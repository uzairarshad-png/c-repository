#include <iostream> 
using namespace std;

int main() {
    double balance = 8000.0;

    cout << "=== Bank Account Management ===" << endl;
    cout << "Initial Balance: Rs. " << balance << endl;

    // First transaction: Withdraw Rs. 2000 
    double withdrawamount = 2000;

        balance -= withdrawamount;
        cout << "After withdrawing Rs. " << withdrawamount<< ", Balance: Rs. " << balance << endl;

double depositamount = 10000;
balance += depositamount;
cout << "After depositing Rs. " << depositamount<< ", Balance: Rs. " << balance << endl;

cout << "===============================" << endl;
cout << "Final Account Balance: Rs. " << balance << endl;

return 0;
}