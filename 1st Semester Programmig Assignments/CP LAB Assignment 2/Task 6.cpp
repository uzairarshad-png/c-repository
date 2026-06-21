#include <iostream> 
using namespace std;
int main() {
	int totalsecs, hrs, mins, secs;
	cout << "Welcome to the Clock Time Converter" << endl; 
	cout << "Enter the time duration in seconds: ";
	cin >> totalsecs;
	hrs = totalsecs / 3600;
	mins = (totalsecs % 3600) / 60;
	secs = totalsecs % 60;
	cout << "\nResults:" << endl;
	cout << "----------------" << endl;
	cout << "Original Time: " << totalsecs << " seconds" << endl;
	cout << "Converted Time: " << hrs << " hour, "
		<< mins << " minutes, and "
		<< secs << " seconds" << endl;
	return 0;
}