/*#include <iostream>
using namespace std;

// Function to find least significant digit
int leastsigdig(int num) {
    return num % 10;
}

// Function to find most significant digit
int mostsigdig(int num) {
    return num / 100;
}

// Function to calculate sum of digits
int sumofdig(int num) {
    int sum = 0;
    while (num > 0) {
        sum += num % 10;
        num /= 10;
    }
    return sum;
}

// Function to check if number is palindrome
bool ispalindrome(int num) {
    int original = num;
    int reversed = 0;

    while (num > 0) {
        int digit = num % 10;
        reversed = reversed * 10 + digit;
        num /= 10;
    }

    return (original == reversed);
}

int main() {
    int num, leastdig, mostdig, sum;
    bool palindrome;
    cout << "Enter a three-digit number: ";
    cin >> num;

    if (num < 100 || num > 999) {
        cout << "Invalid input! Please enter a three-digit number." << endl;
        return 0;
    }

    leastdig = leastsigdig(num);
    mostdig = mostsigdig(num);
    sum = sumofdig(num);
    palindrome = ispalindrome(num);

    cout << "Least Significant Digit: " << leastdig << endl;
    cout << "Most Significant Digit: " << mostdig << endl;
    cout << "Sum of Digits: " << sum << endl;

    if (palindrome)
        cout << num << " is a palindrome." << endl;
    else
        cout << num << " is not a palindrome." << endl;

    return 0;
}
*/