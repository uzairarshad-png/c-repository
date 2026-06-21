#include<iostream>
using namespace std;
int main()
{
	int purchase, Disc;
	cout << "Enter the Total Purchase Amount in Rupees: ";
	cin >> purchase;
	if (purchase > 15000) {
		cout << "\nCongratulations! You get a 10% discount.";
		Disc = purchase - (purchase * (0.1));
		cout << "\nDiscounted Amount: " << Disc;
	}
	else {
		cout << "\nYou cannot avail the Discount Offer.";

	}
	return 0;
}