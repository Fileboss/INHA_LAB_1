/*
	BAUS Philippe
	INHA LAB 1
	Exercise 1
*/

#include <iostream>
using namespace std;



int main() 
{
	int country, city;
	cout << "Select a country: " << endl;
	cout << "(1)Korea, (2)Japan" << endl;
	cin >> country;
	switch (country) {
	case 1:
		cout << "Select a city: " << endl;
		cout << "(1)Seoul, (2)Incheon" << endl;
		cin >> city;
		if (city == 1) {
			cout << "You select Seoul, Korea" << endl;
		}
		else {
			cout << "You select Incheon, Korea" << endl;
		}
	case 2:
		cout << "Select a city: " << endl;
		cout << "(1)Osaka, (2)Tokyo" << endl;
		cin >> city;
		if (city == 1) {
			cout << "You select Osaka, Japan" << endl;
		}
		else {
			cout << "You select Tokyo, Japan" << endl;
		}
	default:
		cout << "Please select 1 or 2" << endl;
	}
	return 0;
}