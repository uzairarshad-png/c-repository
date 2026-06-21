/*#include<iostream>
using namespace std;
int r_pop(int i_pairs, int months)
{
	if (months == 0) return i_pairs;
	if (months == 1) return i_pairs * 2;
	else return r_pop(i_pairs, months - 1) + r_pop(i_pairs, months - 2);
}
int main()
{
	int i_pairs, months, pop;
	cout << " ENTER INITIAL NUMBER OF RABBIT PAIRS = ";
	cin >> i_pairs;
	cout << " ENTER NUMBER OF MONTHS = ";
	cin >> months;
	if (i_pairs < 0 || months < 0)
	{
		cout << " INVALID INPUT! NUMBERS MUST BE POSITIVE!" << endl;
		return 1;
	}
	pop = r_pop(i_pairs, months);
	cout << " AFTER " << months << " MONTHS, RABBIT POPULATION = " << pop << " PAIRS " << endl;
	return 0;
}*/