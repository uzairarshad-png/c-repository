#include<iostream>
using namespace std;
int main()
{
	clrscr();
	int g1, g2, g3, a;
	float avg;
	cout << "\nEnter the marks of 1st Course: "
		cin >> g1;
	cout << "\nEnter the marks of 2nd Course: "
		cin >> g2;
	cout << "\nEnter the marks of 3rd Course: "
		cin >> g3;
	a = g1 + g2 + g3;
	avg = (float)a / 3;
	cout << "\nThe average marks of three courses is: " << avg;
	return 0;
}