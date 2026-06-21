#include<iostream>
using namespace std;

int main()
{
	int a;
	cout << "Enter a Number:";
	cin >> a;
	switch (a)
	{
	case 1:
	case 2:
	case 3:
	case 4:
		cout << "Half Degree has passed.";
		break;


	case 5:
	case 6:
	case 7:
	case 8:
			cout << "Full degree has passed.";
			break;

	default:
			cout << "You Entered a Out of Range Number.";
	}
	return 0;

}