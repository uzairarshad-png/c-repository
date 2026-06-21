#include<iostream>
using namespace std;
int main()
{
	int l, w, h, vol;
	cout << "\nEnter the length of the rectangular box:";
	cin >> l;
	cout << "\nEnter the width of the rectangular box: ";
	cin >> w;
	cout << "\nEnter the height of the rectangular box:";
	cin >> h;
	vol = l * w * h;
	cout << "The volume of the rectangular box is " << vol;
	return 0;
}
