/*#include <iostream>
#include <string>
using namespace std;
const int SIZE = 5;
void displayInventory(string products[], int quantity[]) {
    cout << "\nCurrent Inventory:\n";
    for (int i = 0; i < SIZE; i++) {
        cout << i + 1 << ". " << products[i] << ": " << quantity[i] << " units" << endl;
    }
    cout << endl;
}
int findProduct(string products[], string name) {
    for (int i = 0; i < SIZE; i++) {
        if (products[i] == name)
            return i;
    }
    return -1;  // product not found
}
int main() {
    string products[SIZE] = { "Apples", "Oranges", "Bananas", "Bread", "Milk" };
    int quantity[SIZE] = { 100, 80, 60, 50, 100 };

    string productName;
    int restockQty;
    char choice;

    displayInventory(products, quantity);

    do {
        cout << "Enter the product name to restock: ";
        cin >> productName;

        int index = findProduct(products, productName);
        if (index == -1)cout << "\nError: Product '" << productName << "' not found in inventory. Please enter a valid product name.\n\n";
        else {
            cout << "Enter the quantity to restock: ";
            cin >> restockQty;

            if (restockQty <= 0)cout << "\nError: Invalid quantity. Please enter a positive number.\n\n";
            else {
                quantity[index] += restockQty;
                cout << "\nProduct '" << products[index] << "' successfully restocked with " << restockQty << " units.\n";
                displayInventory(products, quantity);
            }
        }
        cout << "Would you like to restock another product? (Y/N): ";
        cin >> choice;
        cout << endl;

    } while (choice == 'Y' || choice == 'y');
    cout << "Exiting the program. Thank you!\n";
    return 0;
}
*/