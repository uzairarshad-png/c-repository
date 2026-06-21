#include<iostream>
using namespace std;

int main()
{
	int f1, f2, f3;
	cout << "Enter the age of Friend 1:";
	cin >> f1;
	cout << "Enter the age of Friend 2:";
	cin >> f2;
	cout << "Enter the age of Friend 3:";
	cin >> f3;
	
	if (f1 < f2 && f1 < f3)
	{
		cout << "The youngest friend is Friend 1 with an age of " << f1;
	}

	else if (f2 < f1 && f2< f3)
	{
		cout << "The youngest friend is Friend 2 with an age of " << f2;
	}

	else if (f3 < f2 && f3 < f1)
	{
		cout << "The youngest friend is Friend 3 with an age of " << f3;
	}

	else {
		cout << "You entered Equal ages of all friends";
	}

	return 0;
}