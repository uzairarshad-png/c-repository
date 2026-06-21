/*#include <iostream>
using namespace std;

int main() {
    int size, choice;

    cout << "Welcome to Star Pattern Generator\n";
    cout << "-------------------------------------------------\n";
    cout << "Choose the type of star pattern:\n";
    cout << "1. Hollow Stars\n";
    cout << "2. Filled Stars\n";
    cout << "3. Pyramid Stars\n";
Choice:
    {
        cout << "Enter your choice (1-3): ";
        cin >> choice;
    }
    if (choice > 3 || choice < 0) {
        goto Choice;
    }
Size:
    {
        cout << "Enter the size of the pattern: ";
        cin >> size;
    }

    if (size <= 1) {
        goto Size;
    }

    cout << "\nGenerated Star Pattern:\n\n";

    // Pattern generation using nested loops
    switch (choice) {
    case 1: // Hollow Stars
        for (int i = 1; i <= size; i++) {
            for (int j = 1; j <= size; j++) {
                if (i == 1 || i == size || j == 1 || j == size)
                    cout << "* ";
                else
                    cout << "  ";
            }
            cout << endl;
        }
        break;

    case 2: // Filled Stars
        for (int i = 1; i <= size; i++) {
            for (int j = 1; j <= i; j++) {
                cout << "* ";
            }
            cout << endl;
        }
        break;
        

    case 3: // Pyramid Stars
        for (int i = 1; i <= size; i++) {
            for (int space = i; space < size; space++)
                cout << " ";
            for (int star = 1; star <= (2 * i - 1); star++)
                cout << "*";
            cout << endl;
        }
        break;

    }

    cout << "\n Pattern generation complete! \n";

    return 0;
}
*/