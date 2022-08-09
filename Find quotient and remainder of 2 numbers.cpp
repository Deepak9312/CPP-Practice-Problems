//CPP Program to find quotient and remainder of 2 numbers
#include <iostream>
using namespace std;

int main() {
	int divisor, dividend, quotient, remainder;
	cout << "Enter dividend: ";
	cin >> dividend;

	cout << "Enter divisor: ";
	cin >> divisor;

	quotient = dividend / divisor;
	remainder = dividend % divisor;

	cout << "Quotient: " << quotient << "\n";
	cout << "Remainder: " << remainder;
	return 0;
}
