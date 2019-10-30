#include <iostream>

using namespace std;

int main() {

	const int conv = 12;
	int hight;

	cout << "Enter your hight in integer inch: ";
	cin >> hight;

	int hightFeet = hight / conv;
	int hightInch = hight % conv;

	cout << "Your hight is " << hightFeet << " feet and " << hightInch << " inches.";

	return 0;
}