#include <iostream>

using namespace std;

int main() {

	long long popG, popUS;
	double p;

	cout << "Enter the world' population: ";
	cin >> popG;
	cout << "Enter the population of the US: ";
	cin >> popUS;

	p = double(popUS) / double(popG) * 100;

	cout << "The population of the US is " << p << " of the world population.";

	return 0;
}