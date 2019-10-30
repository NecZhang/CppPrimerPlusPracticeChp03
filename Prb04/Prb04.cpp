#include <iostream>

using namespace std;

int main() {

	long secIn;
	const int minToSec = 60;
	const int hToMin = 60;
	const int dToH = 24;
	int min, h, d, sec;
	
	cout << "Enter the number of seconds: ";
	cin >> secIn;

	d = secIn / (minToSec * hToMin * dToH);
	h = secIn % (minToSec * hToMin * dToH) / (minToSec * hToMin);
	min = secIn % (minToSec * hToMin * dToH) % (minToSec * hToMin) / minToSec;
	sec = secIn % (minToSec * hToMin * dToH) % (minToSec * hToMin) % minToSec;

	cout << secIn << " seconds = " << d << " days, " << h << " hours, " << min << " minutes, " << sec << " seconds";

	return 0;
}