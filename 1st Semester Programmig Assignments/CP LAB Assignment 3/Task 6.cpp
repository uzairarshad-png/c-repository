#include<iostream>
using namespace std;

int main()
{
	float temp;
	cout << "Enter the Body temperature in Celsius: ";
	cin >> temp;
	if (temp < 36.5) {
		cout << "Hypothermia! Your Body temperature is below normal." << endl;

	}
	else if (temp > 36.5 && temp < 37.5) {
		cout << "Normal body temperature! You don't need to consult a doctor." << endl;

	}
	else if (temp > 37.5 && temp < 38.5) {
		cout << "Low grade fever! You Should consult a doctor.";

	}
	else {
		cout << "High Fever! You should immediately Consult a Doctor.";
	}

	return 0;
}