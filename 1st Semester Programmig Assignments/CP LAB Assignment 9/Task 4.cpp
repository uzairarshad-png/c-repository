/*#include <iostream>
#include <iomanip>
using namespace std;

const int ROWS = 5;
const int COLS = 5;

void displaySeats(char seats[ROWS][COLS]) {
    cout << "\nSeat Matrix:\n";
    cout << "----------------\n\n";
    cout << "    ";
    for (int c = 1; c <= COLS; c++)
        cout << c << "   ";
    cout << endl;

    for (int i = 0; i < ROWS; i++) {
        cout << i + 1 << "   ";
        for (int j = 0; j < COLS; j++) {
            cout << seats[i][j] << "   ";
        }
        cout << endl;
    }
}

void reserveSeat(char seats[ROWS][COLS]) {
    int r, c;
    char type;

    cout << "\nEnter Row (1-5): ";
    cin >> r;
    cout << "Enter Column (1-5): ";
    cin >> c;

    if (r < 1 || r > ROWS || c < 1 || c > COLS) {
        cout << "Invalid seat position!\n";
        return;
    }

    if (seats[r - 1][c - 1] != '0') {
        cout << "Seat already reserved!\n";
        return;
    }

    cout << "Enter Professional Type (F=Finance, M=Marketing, E=Engineering): ";
    cin >> type;

    type = toupper(type);

    if (type == 'F' || type == 'M' || type == 'E') {
        seats[r - 1][c - 1] = type;
        cout << "Seat reserved successfully!\n";
    }
    else {
        cout << "Invalid professional type!\n";
    }
}

void countProfessionals(char seats[ROWS][COLS]) {
    int finance = 0, marketing = 0, engineering = 0;

    for (int i = 0; i < ROWS; i++) {
        for (int j = 0; j < COLS; j++) {
            if (seats[i][j] == 'F') finance++;
            else if (seats[i][j] == 'M') marketing++;
            else if (seats[i][j] == 'E') engineering++;
        }
    }

    cout << "\nProfessional Counts:\n";
    cout << "Finance (F): " << finance << endl;
    cout << "Marketing (M): " << marketing << endl;
    cout << "Engineering (E): " << engineering << endl;
}

void countAvailable(char seats[ROWS][COLS]) {
    int available = 0;
    for (int i = 0; i < ROWS; i++)
        for (int j = 0; j < COLS; j++)
            if (seats[i][j] == '0')
                available++;

    cout << "\nAvailable Seats: " << available << endl;
}

int main() {
    char seats[ROWS][COLS];
    for (int i = 0; i < ROWS; i++)
        for (int j = 0; j < COLS; j++)
            seats[i][j] = '0';

    int choice;

    do {
        cout << "\n========= MENU =========\n";
        cout << "1. Reserve a Seat\n";
        cout << "2. Count of Each Professional Type\n";
        cout << "3. Count of Available Seats\n";
        cout << "4. Display Seat Matrix\n";
        cout << "5. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) {
        case 1:
            reserveSeat(seats);
            break;

        case 2:
            countProfessionals(seats);
            break;

        case 3:
            countAvailable(seats);
            break;

        case 4:
            displaySeats(seats);
            break;

        case 5:
            cout << "Exiting Program...\n";
            break;

        default:
            cout << "Invalid choice! Try again.\n";
        }

    } while (choice != 5);

    return 0;
}
*/