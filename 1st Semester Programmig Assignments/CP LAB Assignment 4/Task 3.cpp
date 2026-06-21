#include <iostream>
using namespace std;

int main() {
    int num;
    int primes[10];      // to store prime numbers entered (max 10)
    int primeCount = 0;  // number of primes found
    int sum = 0;         // sum of primes

    cout << "Enter 10 integers:\n";

    // Read 10 integers
    for (int i = 1; i <= 10; ++i) {
        cout << "Enter number " << i << ": ";
        cin >> num;

        bool isPrime = true;

        if (num <= 1) {
            isPrime = false; // 0, 1 and negatives are not prime
        }
        else {
            for (int j = 2; j * j <= num; ++j) {
                if (num % j == 0) {
                    isPrime = false;
                    break;
                }
            }
        }

        // If number is prime, store it and add to sum (do NOT print yet)
        if (isPrime) {
            primes[primeCount++] = num;
            sum += num;
        }
    }

    // Print primes just before the sum
    cout << "\nPrime numbers entered are: ";
    if (primeCount == 0) {
        cout << "None";
    }
    else {
        for (int i = 0; i < primeCount; ++i) {
            cout << primes[i];
            if (i != primeCount - 1) cout << " ";
        }
    }

    cout << "\n\nThe sum of prime numbers entered is: " << sum << endl;

    return 0;
}
