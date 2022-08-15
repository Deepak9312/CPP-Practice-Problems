//C++ Program to Find the Factorial of a Given Number
#include <iostream>
using namespace std;

int main() {
	int n;
	long factorial = 1.0;

	cout << "Enter a positive interger: ";
	cin >> n;
	if (n < 0) {
		cout << "Error! Factorial of negative number doesn't exist";
	}
	else {
		for (int i = 1; i <= n; ++i) {
			factorial *= i;
		}
		cout << "Factorial of " << n << " = " << factorial;
	}
	return 0;
}
