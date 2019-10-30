#include <iostream>

using namespace std;

int main() {

	double uISO, uUS;
	const double hkmToMile = 62.14;
	const double galToL = 3.875;

	cout << "Enter usage of gasoline in ISO: ";
	cin >> uISO;

	uUS = 1 / uISO * hkmToMile * galToL;
	cout << "Usage of gasoline in US stantard: " << uUS << "mpg";

	return 0;
}