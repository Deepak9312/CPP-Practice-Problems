//C++ Program to Find cube of number using macros
#include <iostream>
using namespace std;

#define CUBE(x) (x*x*x);

int main() {
	int num, cube;
	cout << "Enter a number: ";
	cin >> num;
	cube = CUBE(num);
	cout << "Cube of " << num << " is " << cube;
	return 0;
}
