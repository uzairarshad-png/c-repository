#include<iostream>
using namespace std;
int main()
{
    int items;
	float price, total = 0;
	int quant;
	cout << "Enter the number of different items in stock:";
	cin >> items;
	for (int i = 1; i <= items; i++)
	{
		cout << "\nEnter price per unit(in $) for Item " << i << ":";
		cin >> price;
		cout << "Enter quantity in stock:";
		cin >> quant;
		total += price * quant;
	}
	cout << "\nTotal value of inventory: $" << total << endl;
	return 0;
}