#include <iostream>

using namespace std;

int main() {

	const int conv = 60;
	double degree, minute, second;
	double latitude;
	cout << "Enter a latitude in degrees, minutes and seconds:\nFirst, enter the dgrees: ";
	cin >> degree;
	cout << "Next, enter the minutes of arc: ";
	cin >> minute;
	cout << "Finally, enter the seconds of arc: ";
	cin >> second;
	latitude = degree + minute / conv + second / conv / conv;
	cout << degree << " degrees, " << minute << " minutes, " << second << " seconds = " << latitude << " degrees";

	return 0;
}