/*#include<iostream>
using namespace std;
int main() {
    int time[3];  // time[0] = hours, time[1] = minutes, time[2] = seconds
    char direction;

    cout << "Enter current time (hours minutes seconds): ";
    for (int i = 0; i < 3; i++) {
        cin >> time[i];
    }

    cout << "Enter rotation direction (L for left / R for right): ";
    cin >> direction;

    int temp;
    if (direction == 'L' || direction == 'l') {
        // Rotate left
        temp = time[0];
        time[0] = time[1];
        time[1] = time[2];
        time[2] = temp;
        cout << "\nTime rotated to the LEFT successfully.\n";
    }
    else if (direction == 'R' || direction == 'r') {
        // Rotate right
        temp = time[2];
        time[2] = time[1];
        time[1] = time[0];
        time[0] = temp;
        cout << "\nTime rotated to the RIGHT successfully.\n";
    }
    else {
        cout << "\nInvalid direction entered.\n";
        return 0;
    }
    cout << "Updated Time on Digital Clock: ";
    for (int i = 0; i < 3; i++) {
        cout << time[i] << " ";
    }
    cout << endl;
    return 0;
}
*/