//C++ Program to Display Multiplication table up to 10
#include <iostream>
using namespace std;

int main() {
	int n;
	
	cout << "Enter a positive integer: ";
	cin >> n;
	for (int i = 0; i <= 10; ++i) {
		cout << n << " x " << i << " = " << n * i << endl;
	}

	return 0;
}
