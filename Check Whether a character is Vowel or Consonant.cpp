//C++ Program to Check Whether a character is Vowel or Consonant.
#include <iostream>
using namespace std;

int main() {
	char ch;
	bool isVowel;
	cout << "Enter an alphabet: ";
	cin >> ch;

	isVowel = (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u' || ch == 'A' || ch == 'E' || ch == 'I' || ch == 'O' || ch == 'U');
	if (!isalpha(ch)) {
		cout << ("Please enter alphabets only");
	}
	else if (isVowel) {
		cout << ch << " is a vowel";
	}
	else {
		cout << ch << " is a consonant";
	}
	return 0;
}
