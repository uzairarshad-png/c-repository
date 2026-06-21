/*#include <iostream>
using namespace std;

int main()
{
    int Students, correct;
    cout << "Welcome to the Academic Excellence Awards Ceremony Calculator!" << endl;
    cout << "Enter the number of students receiving awards: ";
    cin >> Students;

    // Fixed-size array (assuming max 100 students)
    unsigned long long factorial[100];

    // Loop through each student
    for (int i = 0; i < Students; i++)
    {
        cout << "\nStudent " << i + 1 << ":\n";
        cout << "How many problems did they solve correctly? : ";
        cin >> correct;

        factorial[i] = 1; // initialize factorial

        // Calculate factorial
        for (int j = 1; j <= correct; j++)
        {
            factorial[i] *= j;
        }
    }

    // Display results
    cout << "\nHere are the factorial values corresponding to each student's score:\n";
    for (int i = 0; i < Students; i++)
    {
        cout << "Student " << i + 1 << ": Factorial = " << factorial[i] << endl;
    }

    return 0;
}
*/

#include <iostream> 
using namespace std;
int main()
{
    int Students, correct;
    cout << "Welcome to the Academic Excellence Awards Ceremony Calculator!" << endl;
    cout << "Enter the number of students receiving awards: ";
    cin >> Students;
    // Fixed-size array (assuming max 100 students)

    unsigned long long factorial[100];

    // Loop through each student 
    for (int i = 0; i < Students; i++)
    {
        cout << "\nStudent " << i + 1 << ":\n";
        cout << "How many problems did they solve correctly? : ";
        cin >> correct;

        factorial[i] = 1; // initialize factorial 

        // Calculate factorial 
        for (int j = 1; j <= correct; j++)
        {
            factorial[i] *= j;
        }
    }

    // Display results 
    cout << "\nHere are the factorial values corresponding to each student's score:\n";
    for (int i = 0; i < Students; i++)
    {
        cout << "Student " << i + 1 << ": Factorial = " << factorial[i] << endl;
    }

    return 0;
}