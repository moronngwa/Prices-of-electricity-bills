// Prices of electricity.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

int main() {
	double unit, bill;
	int fixedcharge = 110;
		

	
	cout.setf(ios::fixed);
	cout.precision(2);
	cout << "Enter the unit that you have used" <<std:: endl;
	cin >> unit;

	

	if (unit <= 150) {
		bill = unit * 5.50 + fixedcharge;
		cout << " your bill is equal to R" << bill;
	}
	else if (unit > 150 && unit <= 300) {
		bill = fixedcharge + (150 * 5.50) + (unit - 150);
		cout << " your bill is equal to R" << bill;
	}
	else if (unit > 300 && unit<= 500) {
		bill = fixedcharge + (110 + 5.50) + (150 * 6) + (unit - 300) * 6.50;
			cout << " your bill is equal to R" << bill;
	}
	else if (unit < 500) {
		bill= fixedcharge + (110 + 5.50) + (200 * 6.50) + (unit - 500) * 7;
		cout << "your bill is equal to R" << bill;
	}

	return 0;
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
