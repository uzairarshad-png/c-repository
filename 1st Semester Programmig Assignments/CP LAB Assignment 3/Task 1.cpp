#include<iostream>
using namespace std;

int main()
    {
        char ch;
        cout << "Enter a character: ";
        cin >> ch;

        // Check if digit
        if (ch >= '0' && ch<='9') {
            int num = ch - '0';   // Convert char digit ? integer
            cout << ch << " is a Digit." << endl;
        }
        // Check if vowel
        else if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u' ||
            ch == 'A' || ch == 'E' || ch == 'I' || ch == 'O' || ch == 'U') {
            cout << ch << " is a Vowel." << endl;
        }
        // Check if alphabet but not vowel (so consonant)
        else if ((ch >= 'a' && ch <= 'z') || (ch >= 'A' && ch <= 'Z')) {
            cout << ch << " is a Consonant." << endl;
        }
        else {
            cout << ch << " is neither a letter nor a digit." << endl;
        }

        return 0;
    }