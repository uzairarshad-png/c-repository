#include <iostream>
#include <iomanip>
#include <string>
using namespace std;
void displayMenu(string items[], float prices[], int size) {
    for (int i = 0; i < size; i++) {
        cout << i + 1 << ". " << items[i] << " - $" << prices[i] << endl;
    }
    cout << endl;
}
int takeOrder(int quantity[], string items[], float prices[], int size) {
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
        cout << "Enter quantity for " << items[itemNum - 1] << ": ";
        cin >> qty;
        }
        if (qty <= 0) {
            cout << "Error: Quantity must be a positive number.\n\n";
            goto Quant;
        }

        quantity[itemNum - 1] += qty;

        cout << "Do you want to add more items? (y/n): ";
        cin >> more;
        cout << endl;

    } while (more == 'y' || more == 'Y');

    return 0;
}
char getDeliveryChoice() {
    char mode;
    cout << "Choose delivery (d) or pickup (p): ";
    cin >> mode;
    cout << endl;

    while (mode != 'd' && mode != 'D' && mode != 'p' && mode != 'P') {
        cout << "Invalid choice! Enter 'd' for delivery or 'p' for pickup: ";
        cin >> mode;
    }
    return mode;
}
void displaySummary(int quantity[], string items[], float prices[], int size, char mode) {
    float total = 0.0;
    float deliveryFee = 3.00;
    cout << "=== Order Summary ===\n";
    for (int i = 0; i < size; i++) {
        if (quantity[i] > 0) {
            float itemTotal = prices[i] * quantity[i];
            cout << items[i] << " x" << quantity[i] << " = $" << itemTotal << endl;
            total += itemTotal;
        }
    }
    if (mode == 'd' || mode == 'D') {
        cout << "Delivery fee: $" << deliveryFee << endl;
        total += deliveryFee;
    }
    cout << "Total: $" << total << endl;
    cout << "Thank you for ordering with FastBite!" << endl;
}
int main() {
    const int SIZE = 5;
    string items[SIZE] = { "Burger", "Pizza", "Fries", "Soda", "Ice Cream" };
    float prices[SIZE] = { 5.99, 8.49, 2.99, 1.99, 3.50 };
    int quantity[SIZE] = { 0 };
    cout << fixed << setprecision(2);
    cout << "=== Welcome to FastBite Online Ordering ===\n";
    displayMenu(items, prices, SIZE);

    takeOrder(quantity, items, prices, SIZE);

    char mode = getDeliveryChoice();

    displaySummary(quantity, items, prices, SIZE, mode);

    return 0;
}