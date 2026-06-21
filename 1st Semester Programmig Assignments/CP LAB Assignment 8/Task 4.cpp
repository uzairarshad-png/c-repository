/*#include<iostream>
using namespace std;
int main() {
    int arry1[5], arry2[5], arry3[5], arry4[5];
    int i, count1 = 0, count2 = 0, count3 = 0, count4 = 0;
    cout << "Enter array 1 elements up to 5 (Enter 0 to terminate):" << endl;
    for (i = 0; i < 5; i++) {
        cin >> arry1[i];
        if (arry1[i] == 0)
            break;
        count1++;
    }
    cout << "Enter array 2 elements up to 5 (Enter 0 to terminate):" << endl;
    for (i = 0; i < 5; i++) {
        cin >> arry2[i];
        if (arry2[i] == 0)
            break;
        count2++;
    }
    cout << "Enter array 3 elements up to 5 (Enter 0 to terminate):" << endl;
    for (i = 0; i < 5; i++) {
        cin >> arry3[i];
        if (arry3[i] == 0)
            break;
        count3++;
    }
    cout << "Enter array 4 elements up to 5 (Enter 0 to terminate):" << endl;
    for (i = 0; i < 5; i++) {
        cin >> arry4[i];
        if (arry4[i] == 0)
            break;
        count4++;
    }
    cout << "\nThe arrays with no zero elements are:\n";
    if (count1 == 5) {
        cout << "Array 1: ";
        for (i = 0; i < 5; i++)
            cout << arry1[i] << " ";
        cout << endl;
    }
    if (count2 == 5) {
        cout << "Array 2: ";
        for (i = 0; i < 5; i++)
            cout << arry2[i] << " ";
        cout << endl;
    }
    if (count3 == 5) {
        cout << "Array 3: ";
        for (i = 0; i < 5; i++)
            cout << arry3[i] << " ";
        cout << endl;
    }
    if (count4 == 5) {
        cout << "Array 4: ";
        for (i = 0; i < 5; i++)
            cout << arry4[i] << " ";
        cout << endl;
    }
    if (count1 != 5 && count2 != 5 && count3 != 5 && count4 != 5)
        cout << "No array without zero values was entered." << endl;
    return 0;
}
*/