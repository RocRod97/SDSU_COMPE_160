/*
Name: Rocco Rodriguez
Course: COMPE 160
Week: 1 Question: [2]
Brief: Use the xor lgic gates to store 2 values in 1 and then xor 1 variable, b, out to get remainder a.
Repeat with b.
*/

#include <iostream>
using namespace std;

int main()
{

	int a; //001
	int b; //010

	cout << "Please input your first number: ";
	cin >> a;
	cout << "\nPlease input your second number: ";
	cin >> b;

	a = a ^ b; //011
	b = a ^ b; //001
	a = a ^ b; //010

	cout << "\nBefore swap a = " << b << " and b = " << a << endl;
	cout << "After swap a = " << a << " and b = " << b << endl;

}

