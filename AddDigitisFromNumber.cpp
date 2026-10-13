
#include <iostream>
using namespace std;

int main()
{
	int a;
	int b = 0;
	int c = 0;

	cout << "Please input a number: ";
	cin >> a;

	while (a != 0) {
		
		//b = a % 10;
		c = c + (a % 10); //This line replaces the 2 other ones
		a = a / 10;
		//c = c + b;

	}

	cout << c << endl;


}
