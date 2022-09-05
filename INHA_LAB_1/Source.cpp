/*
	BAUS Philippe
	INHA LAB 1
	Exercice 3
*/

#include <iostream>
using namespace std;

//Prototype of add function
int add(int, int);

int main() {
	int num1, num2, sum;
	cout << "Enter 2 numbers to add: " << endl;
	cin >> num1 >> num2;
	
	//Function call
	sum = add(num1, num2);
	cout << "Sum = " << sum;
	return 0;
}

//Definition of add function
int add(int a, int b) 
{
	int add;
	add = a + b;

	//Return statement
	return add;
}