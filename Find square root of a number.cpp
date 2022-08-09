//C++ Program to Find square root of a number
#include <iostream>	
#include <cmath>
using namespace std;

int main() {
	float num, sqnum;
	cout << "Enter a number: ";
	cin >> num;

	sqnum = sqrt(num);
	cout << "Square root of " << num << " is " << sqnum;
	return 0;
}
