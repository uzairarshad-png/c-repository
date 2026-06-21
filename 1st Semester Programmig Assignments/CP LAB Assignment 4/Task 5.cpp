#include<iostream>
using namespace std;
int main()
{
	int num, i=1;
	mul:
	cout << "Enter a Number to see it's multiplication table: ";
	cin >> num;
	cout << endl;
	if (num < 1) {
		goto mul;
	}
	cout << "Multiplication table for " << num << " is" << endl;
	do {
		cout << num << "\t*" << "\t" << i << "\t=" << "\t" << num * i << endl;
		i++;
	} while (i <= 10);
	return 0;
}