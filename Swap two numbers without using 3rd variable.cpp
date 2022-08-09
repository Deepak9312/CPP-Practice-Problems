//CPP Program to Swap two numbers without using 3rd variable
#include <iostream>
using namespace std;

int main() {
	int num1, num2;
	cout << "Enter first number: ";
	cin >> num1;

	cout << "Enter second number:";
	cin >> num2;

	cout << "Before swapping numbers are: " << num1 << " and " << num2 << endl;

	num1 = num1 + num2;
	num2 = num1 - num2;
	num1 = num1 - num2;

	cout << "After swapping numbers are: " << num1 << " and " << num2;
	return 0;
}
