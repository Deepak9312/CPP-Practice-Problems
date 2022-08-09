//C++ Program to Check if a character is uppercase, lowercase, digit or special character
#include <iostream>
using namespace std;

int main() {
	char ch;
	cout << "Enter a character: ";
	cin >> ch;
	if (ch >= 48 && ch <= 57) {
		cout << ch << " is a digit.";
	}
	else if (ch >= 65 && ch <= 90) {
		cout << ch << " is an uppercase letter.";
	}
	else if (ch >= 97 && ch <= 122) {
		cout << ch << " is a lowercase letter.";
	}
	else {
		cout << ch << " is a special character.";
	}
	return 0;
}
