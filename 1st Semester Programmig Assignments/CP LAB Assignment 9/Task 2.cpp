/*#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    int students, assignments;

    cout << "Enter number of students: ";
    cin >> students;
    cout << "Enter number of assignments: ";
    cin >> assignments;

    int matrix[100][100];

    cout << "\nEnter the grades (Students x Assignments):\n";
    for (int i = 0; i < students; i++) 
    {
        for (int j = 0; j < assignments; j++) 
        {
            cin >> matrix[i][j];
        }
    }

    cout << "\nOriginal Matrix (Students x Assignments):\n";
    for (int i = 0; i < students; i++) 
    {
        for (int j = 0; j < assignments; j++) 
        {
            cout << matrix[i][j] << " ";
        }
        cout << endl;
    }

    int transpose[100][100];

    for (int i = 0; i < assignments; i++) 
    {
        for (int j = 0; j < students; j++) 
        {
            transpose[i][j] = matrix[j][i];
        }
    }

    cout << "\nTransposed Matrix (Assignments x Students):\n";
    for (int i = 0; i < assignments; i++) 
    {
        for (int j = 0; j < students; j++) 
        {
            cout << transpose[i][j] << " ";
        }
        cout << endl;
    }

    cout << "\nAverage Grades for Each Assignment:\n";
    cout << fixed << setprecision(2);

    for (int i = 0; i < assignments; i++) 
    {
        double sum = 0;
        for (int j = 0; j < students; j++) 
        {
            sum += transpose[i][j];
        }
        double avg = sum / students;
        cout << "Assignment " << i + 1 << ": " << avg << endl;
    }

    return 0;
}
*/