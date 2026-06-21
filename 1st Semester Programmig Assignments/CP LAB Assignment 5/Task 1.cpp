/*#include <iostream>
#include<string>
using namespace std;

int main() {
    int numDepartments;
    cout << "Enter the number of departments: ";
    cin >> numDepartments;
    cin.ignore(); // only once, right after reading numDepartments

    for (int dept = 1; dept <= numDepartments; dept++) {
        cout << "\n--- Department " << dept << " ---\n";

        double totalSalary = 0;

        for (int emp = 1; emp <= 10; emp++) {
            string name, designation;
            double salary;

            cout << "\nEnter details for Employee " << emp << ":\n";
            cout << "Name: ";
            getline(cin, name);  // no need for cin.ignore() here

            cout << "Salary: ";
            cin >> salary;
            cin.ignore(); // clear newline after numeric input

            cout << "Designation: ";
            getline(cin, designation);

            // Display entered data
            cout << "\nEmployee " << emp << " Details:\n";
            cout << "Name: " << name << endl;
            cout << "Salary: " << salary << endl;
            cout << "Designation: " << designation << endl;

            totalSalary += salary;
        }

        cout << "\nTotal Salary paid to Department " << dept << ": " << totalSalary << "\n";
    }

    return 0;
}
*/