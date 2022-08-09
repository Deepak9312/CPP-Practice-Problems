//C++ Program to Find All Roots of a Quadratic Equation
#include <iostream>
#include <cmath>
using namespace std;

int main() {
	float a, b, c, discriminant, x1, x2, realPart, imaginaryPart;
	cout << "For quadadric equation \"ax^2+bx+c=0\", enter coefficients a, b and c\n";
	cout << "Enter a: ";
	cin >> a;
	cout << "Enter b: ";
	cin >> b;
	cout << "Enter c: ";
	cin >> c;
	discriminant = (b * b) - (4 * a * c);

	if (discriminant > 0) {
		x1 = (-b + sqrt(discriminant)) / (2 * a);
		x2 = (-b - sqrt(discriminant)) / (2 * a);
		cout << "Roots are real and different\n";
		cout << "Root 1: " << x1 << endl;
		cout << "Root 2: " << x2 << endl;
	}
	else if (discriminant == 0) {
		x1 = -b / (2 * a);
		cout << "Root are real and same\n";
		cout << "Root1 = Root2: " << x1 << endl;
	}
	else {
		realPart = -b / (2 * a);
		imaginaryPart = sqrt(-discriminant) / (2 * a);
		cout << "Roots are complex and different\n";
		cout << "Root1: " << realPart << " + " << imaginaryPart << "i" << endl;
		cout << "Root2: " << realPart << " - " << imaginaryPart << "i" << endl;
	}
	return 0;
}
