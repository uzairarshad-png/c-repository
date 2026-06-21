#include <iostream>
#include <string>
using namespace std;

int main()
{
    string name;
    int age;
    float height;
    string description;

    cout << "Enter The following Details: ";
    cout << "\nName: ";
    cin >> name;
    cout << "Age: ";
    cin >> age;
    cout << "Height: ";
    cin >> height;

    cin.ignore();

    cout << "\nA Short Description about yourself: ";
    getline(cin, description);

    cout << "\n___________________________________________________";
    cout << "\nThe Details that you entered are as follows:";
    cout << "\n___________________________________________________";
    cout << "\nName: " << name;
    cout << "\nAge: " << age;
    cout << "\nHeight: " << height;
    cout << "\nDescription: " << description;

    return 0;
}
