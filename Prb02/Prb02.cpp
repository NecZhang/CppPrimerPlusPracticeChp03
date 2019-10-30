#include <iostream>
#include <math.h>

using namespace std;

int main() {

	const int hConv = 12;
	const double inchToMeter = 0.0254;
	const double kGToPound = 2.2;
	int ft, in;
	double weight, kGweight, mHight, BMI;
	
	cout << "Enter your hight in foot and inch:\nFt: ";
	cin >> ft;
	cout << "In: ";
	cin >> in;
	cout << "Enter your weight in pound: ";
	cin >> weight;

	mHight = inchToMeter * (ft * hConv + in);
	kGweight = weight / kGToPound;
	BMI = kGweight / pow(mHight, 2);

	cout << "Your BMI: " << BMI;

	return 0;
}