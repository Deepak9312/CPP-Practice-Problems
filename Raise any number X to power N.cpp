//C++ Program to Raise any number X to power N
#include <iostream>
#include <cmath>
using namespace std;

int main() {
	int x, n, xn;
	cout << "Enter X: ";
	cin >> x;
	cout << "Enter N: ";
	cin >> n;
	xn = pow(x, n);
	cout << "Number " << x << " to power " << n << " is " << xn;
	return 0;
}
