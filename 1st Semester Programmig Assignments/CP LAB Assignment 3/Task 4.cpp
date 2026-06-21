#include<iostream>
using namespace std;

int main()
{
	int available=25, book, Rem;
	cout << "Welcome to the Ticket Reservation System!" << endl;
	cout << "Enter the number of seats you want to reserve: ";
	cin >> book;
	if (book < available) {
		Rem = available - book;
		cout << "Seats Reserved Successfully! Enjoy your journey." << endl;
		cout << "Remaining Available Seats: " << Rem;
	}
	else{
		cout << "You exceed the limit of available seats.";
	}
	return 0;
}