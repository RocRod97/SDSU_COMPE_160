
#include <iostream>
using namespace std;

int main()
{
	
	int year;
	int result;

	cout << "Enter a year to see if it's a leap year: ";
	cin >> year;

	result = ((year % 4 == 0 && year % 100 != 0) || year % 400 == 0);

	cout << result << endl;


}
