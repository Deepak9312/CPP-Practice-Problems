//C++ Program to Find Sum and Average of three numbers.
#include <iostream>
#include <stdlib.h>
using namespace std;

int main() {
	int num1, num2, num3, sum, avg;
	cout << "Enter 1st number: ";
	cin >> num1;
	cout << "Enter 2nd number: ";
	cin >> num2;
	cout << "Enter 3rd number: ";
	cin >> num3;

	sum = num1 + num2 + num3;
	avg = sum / 3;
	cout << "Sum of 3 entered number is " << sum << "\n";
	cout << "Average of 3 entered number is " << avg << "\n";
	return 0;
}
