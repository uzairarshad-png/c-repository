#include <iostream> 
#include <iomanip> 
#include <string>
using namespace std;

int main() {
    string service;
    int quantity;
    double feePerUnit, total, tax, grandTotal;

    cout << "=== Excel Laboratories Billing System ===" << endl;
    cin.ignore();
    cout << "Enter Service Description (e.g., MRI, Blood Test, X-ray): ";
    getline(cin, service);

    cout << "Enter Quantity: ";
    cin >> quantity;

    cout << "Enter Service Fee per Unit (Rs.): ";
    cin >> feePerUnit;

    total = quantity * feePerUnit;
    tax = total * 0.05;
    grandTotal = total + tax;

    cout << left << setw(20) << "Service" << ": " << service << endl;
    cout << left << setw(20) << "Quantity" << ": " << quantity << endl;
    cout << left << setw(20) << "Fee per Unit" << ": Rs. " << fixed << setprecision(2) << feePerUnit << endl;
    cout << left << setw(20) << "Total" << ": Rs. " << fixed << setprecision(2) << total << endl;
    cout << left << setw(20) << "Tax (5%)" << ": Rs. " << fixed << setprecision(2) << tax << endl;
    cout << left << setw(20) << "Grand Total" << ": Rs. " << fixed << setprecision(2) << grandTotal << endl;
    cout << "===============================" << endl;

    return 0;
}