//C++ Program to Convert day into week and year
#include <iostream>
using namespace std;

int main() {
	float day, week, year;
	cout << "Enter number of days: ";
	cin >> day;

	week = day / 7;
	year = day / 365;

	cout << day << " days is " << week << " weeks and " << year << " years";
	return 0;
}
