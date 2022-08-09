//C++ Program to Generate 10 random numbers between 0 and 100
#include <iostream>
#include <stdlib.h>
using namespace std;

int main() {
	cout << "Randomly generated numbers: ";
	for (int i = 1; i <= 10; i++) {
		int num = rand() % 100;
		cout << num << " ";
	}
	return 0;
}
