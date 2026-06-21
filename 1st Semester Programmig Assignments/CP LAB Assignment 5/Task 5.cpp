#include <iostream>
using namespace std;

int main() {
    int n = 5;

    cout << "Inverted Right Triangle:\n\n";
    for (int i = n; i >= 1; i--) {
        for (int j = 1; j <= i; j++) cout << "* ";
        cout << '\n';
    }
    cout << '\n';

    cout << "Hollow Square:\n\n";
    for (int i = 1; i <= n; ++i) {
        for (int j = 1; j <= n; ++j) {
            if (i == 1 || i == n || j == 1 || j == n) cout << "* ";
            else cout << "  ";
        }
        cout << '\n';
    }
    cout << '\n';

    cout << "Combination of Patterns:\n\n";
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= i; j++)
            cout << "* ";
        for (int j = i; j < n; j++) {
            cout << "  ";
        }

        for (int j = 1; j <= n; j++) {
            if (i == 1 || i == n || j == 1 || j == n) cout << "* ";
            else cout << "  ";
        }
        cout << '\n';
    }

    return 0;
}