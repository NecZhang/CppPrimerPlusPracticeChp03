#include <iostream>

using namespace std;

int main() {

	char isISO;
	double mile, km, gal, L;
	cout << "Using ISO(y/n): ";
	cin >> isISO;

	switch (isISO)
	{
	case 'y': 
		cout << "Enter distance in km: ";
		cin >> km;
		cout << "Enter usage of gasoline in liter: ";
		cin >> L;
		cout << "Result: " << L / km * 100;
		break;
	case 'n':
		cout << "Enter distance in mile: ";
		cin >> mile;
		cout << "Enter usage of gasoline in gallon: ";
		cin >> gal;
		cout << "Result: " << mile / gal;
		break;
	default:
		cout << "Invalid!";
		break;
	}

	return 0;
}