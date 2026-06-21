/*#include<iostream>
using namespace std;
void reverse(int arry[], int size){
    int start = 0, end = size - 1;
    while (start < end) {
        swap(arry[start], arry[end]);
        start++;
        end--;
    }
}
int main()
{
    int arry[10] = {}, size = 10;
    cout << "Enter 10 Integer Ratings!" << endl;
    cout << "\n";
    for (int i = 0; i < 10; i++){
        cout << "Rating " << i + 1 << " = ";
        cin >> arry[i];
    }
    reverse(arry, size);
    cout << "\nRatings in reverse order:" << endl;
    for (int i = 0; i < 10; i++){
        cout << arry[i];
        if (i < 9)cout << " ";
    }
    cout << endl;
    return 0;
}*/