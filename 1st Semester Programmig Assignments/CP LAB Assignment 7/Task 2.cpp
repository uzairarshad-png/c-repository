/*#include<iostream>
using namespace std;
void largest(int a, int b) {
	cout << "\nIn first Two Numbers, " << endl;
	if (a > b)cout << a << " is the largest number.";
	else if (b > a)cout << b << " is the largest number.";
	else cout << "Both are equal";
}
void largest(int a, int b, int c) {
	cout << "\nIn first Three Numbers, " << endl;
	if (a > b && a > c)cout << a << " is the largest number.";
	else if (b > a && b > c)cout << b << " is the largest number.";
	else if (c > a && c > b)cout << c << " is the largest number.";
	else cout << "All of them are equal or 2 of them is equal. ";
}
void largest(int a, int b, int c, int d) {
	cout << "\nIn four Numbers, " << endl;
	if (a > b && a > c && a > d)cout << a << " is the largest number.";
	else if (b > a && b > c && b > d)cout << b << " is the largest number.";
	else if (c > a && c > b && c > d)cout << c << " is the largest number.";
	else if (d > a && d > b && d > c)cout << d << " is the largest number.";
	else cout << "All of them are equal or 2 or 3 of them is equal. ";
}

void smallest(int a, int b) {
	cout << "\nIn first Two Numbers," << endl;
	if (a < b)cout << a << " is the smallest number.";
	else if (b < a)cout << b << " is the smallest number.";
	else cout << "Both are equal";
}
void  smallest(int a, int b, int c) {
	cout << "\nIn first Three Numbers, " << endl;
	if (a < b && a < c)cout << a << " is the smallest number.";
	else if (b < a && b < c)cout << b << " is the smallest number.";
	else if (c < a && c < b)cout << c << " is the smallest number.";
	else cout << "All of them are equal or 2 of them is equal. ";
}
void smallest(int a, int b, int c, int d) {
	cout << "\nIn four Numbers, " << endl;
	if (a < b && a < c && a < d)cout << a << " is the smallest number.";
	else if (b < a && b < c && b < d)cout << b << " is the smallest number.";
	else if (c < a && c < b && c < d)cout << c << " is the smallest number.";
	else if (d < a && d < b && d < c)cout << d << " is the smallest number.";
	else cout << "All of them are equal or 2 or 3 of them is equal. ";
}
int main()
{
	int num1, num2, num3, num4;
	cout << "Enter Four Positive Numbers: ";
	cin >> num1 >> num2 >> num3 >> num4 ;
	smallest(num1, num2);
	smallest(num1, num2, num3);
	smallest(num1, num2, num3, num4);
	largest(num1, num2);
	largest(num1, num2, num3);
	largest(num1, num2, num3, num4);
	return 0;
}*/