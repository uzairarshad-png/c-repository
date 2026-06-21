#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
	double miles, km;
	const double mtomk = 1.60934;
	cout << "Welcome to the World Travel Planner!";
	cout << "\n\nEnter the distance you travel to plan in miles: ";
	cin >> miles;
	km = miles * mtomk;
	cout << "Covered Distance:";
	cout << "\nYou plan to travel: " << miles << " miles" << endl;
	cout << "In international metrics, that is approximately: "<< km << " kilometers" << endl;
	return 0;
}