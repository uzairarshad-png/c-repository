#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

void menu(string items[], float prices[], int size) {
    for (int i = 0; i < size; i++) {
        cout << i + 1 << ". " << items[i] << " - PKR" << prices[i] << endl;
    }
    cout << endl;
}

int order(int quant[], string items[], float prices[], int size) {
    char more;
    do {
        int itemNum, qty;
    Items: {
        cout << "Enter item number to order (1-" << size << "): ";
        cin >> itemNum;
        }
    if (itemNum < 1 || itemNum > size) {
        cout << "Error: Invalid item number! Please enter a number between 1 and " << size << ".\n\n";
        goto Items;
    }
Quant: {
    cout << "Enter quantity for " << items[itemNum - 1]
        << ": ";
    cin >> qty;
    }
if (qty <= 0) {
    cout << "Error: Quantity must be a positive number.\n\n";
    goto Quant;
}
quant[itemNum - 1] += qty;
cout << "Do you want to add more items? (y/n): ";
cin >> more;
cout << endl;
    } while (more == 'y' || more == 'Y');
    return 0;
}

float discount(float subtotal) {
    if (subtotal > 500.00) {
        return subtotal * 0.10;
    }
    return 0;
}

float tax(float amount) {
    return amount * 0.10;
}

void summary(int quant[], string items[], float prices[], int size) {
    float subtotal = 0.0;
    float delivery = 3.00;

    cout << "=== Order Summary ===\n";
    for (int i = 0; i < size; i++) {
        if (quant[i] > 0) {
            float itemTotal = prices[i] * quant[i];
            cout << items[i] << " x" << quant[i] << " = PKR" << itemTotal << endl;
            subtotal += itemTotal;
        }
    }

    cout << "Subtotal: PKR" << subtotal << endl;

    float Discount = discount(subtotal);
    if (Discount > 0) {
        cout << "Discount (10%): -PKR" << Discount << endl;
    }

    float amountAfterDiscount = subtotal - Discount;

    float salesTax = tax(amountAfterDiscount);
    cout << "Sales Tax (10%): PKR" << salesTax << endl;

    cout << "Delivery Charge: PKR" << delivery << endl;

    float finalTotal = amountAfterDiscount + salesTax + delivery;

    cout << "Final Total: PKR" << finalTotal << endl;
    cout << "Thank you for using our Supermarket!" << endl;
}

int main() {
    const int size = 5;
    char opt;
    int decision;
    do
    {
        string items[size] = { "Sugar", "Oil", "Wheat","Rice", "Ice Cream" };
        float prices[size] = { 239.00, 499.00, 189.00, 140.00, 149.00 };
        int quant[size] = { 0 };

        cout << fixed << setprecision(2);
        cout << "=== Welcome to SuperMarket Billing Counter=== \n";
        cout << "\n1. Process a Customer\n2. Exit.\nEnter your choice: ";
        cin >> decision;
        if (decision == 2)
        {
            break;
        }
        else if (decision == 1)
        {
            menu(items, prices, size);
            order(quant, items, prices, size);
            summary(quant, items, prices, size);
            cout << "\nDo you want to make another transaction(Y/N)?: ";
            cin >> opt;
        }
        } while (opt == 'Y' || opt == 'y');
    return 0;
}