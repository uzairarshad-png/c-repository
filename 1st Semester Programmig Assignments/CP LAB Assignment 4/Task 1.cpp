#include<iostream>
using namespace std;
int main()
{
	int start, end, i;
	cout << "Enter the Starting ASCII value: ";
	cin >> start;
	cout << "Enter the Enging ASCII Value";
	cin >> end;
	for (i = start; i <= end; i++) {
		cout << "\nASCII Value:" << i << "\tCharacter Value:" << char(i);
	}
	return 0;
}