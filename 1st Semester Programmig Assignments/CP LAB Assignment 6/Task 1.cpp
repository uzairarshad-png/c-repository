/*#include<iostream>
#include<math.h>
using namespace std;

float sum(float a, float b) {
	float sum;
	sum = a + b;
	return sum;
}
float diff(float a, float b) {
	float diff;
	diff = a - b;
	return diff;
}

float mult(float a, float b) {
	float mult;
	mult = a * b;
	return mult;
}

float div(float a, float b) {
	float div;
	div = a / b;
	return div;
}

float power(float a, float b) {
	float power;
	power = pow(a, b);
	return power;
}

int main() {
	float num1, num2, result;
	char operation;

	cout << "Welcome to Uzair's Personal Calculator!";

numbers:
	{
		cout << "Enter the First Number: ";
		cin >> num1;
		cout << "Enter the Second  Number: ";
		cin >> num2;
	}
operations:
	{
		cout << "\n+\n-\n*\n/\n^\n";
		cout << "\nSelect the Operation  ";
		cin >> operation;
	}
	switch (operation) {
	case '+':
		result = sum(num1, num2);
		cout << "The Sum of Two given Numbers is: " << result;
		break;

	case '-':
		result = diff(num1, num2);
		cout << "The Difference of Two given Numbers is: " << result;
		break;

	case '*':
		result = mult(num1, num2);
		cout << "The Multiplication of Two given Numbers is: " << result;
		break;

	case '/':
		result = div(num1, num2);
		cout << "The Division of Two given Numbers is: " << result;
		break;

	case '^':
		result = power(num1, num2);
		cout << "The result of Two given Numbers is: " << result;
		break;
	default:
		cout << "You Entered an invalid character;";
		goto operations;
}
	char decision;
	cout << "\nDo you want to perform any other operation on the given numbers(Y/N): ";
	cin >> decision;
	if (decision == 'Y' || decision == 'y')
		goto operations;
	else if (decision == 'N' || decision == 'n') {
		cout << "\nDo you want to input new Numbers to perform another operations(Y/N): ";
		cin >> decision;
		if (decision == 'Y' || decision == 'y') {
			goto numbers;
		}
	}
	cout << "\nThank you for using calculator!";
	return 0;
}*/