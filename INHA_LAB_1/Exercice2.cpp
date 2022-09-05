/*
	BAUS Philippe
	INHA LAB 1
	Exercice 2
*/

#include <iostream>
using namespace std;

int main()
{
	int x;
	int m = INT_MIN;
	cout << "Type an integer number: " << endl;
	cin >> m;
	for (int i = 1; i < 10; i++) {
		cout << "Type an integer number: " << endl;
		cin >> x;
		if (x > m) {
			m = x;
		}
	}
	cout << "The maximum number you typed is: " << m << endl;
	return 0;
}