

#include <iostream>
using namespace std;

int main()
{
	int n;
	int p;
	int q;


	if(n < 20 || n > 99)
		cout << "Wrong Number" << endl;

	else{

		q = n % 10;
		p = n / 10;


switch(p)
{

case 2: cout << "twenty" << endl; break;
case 3: cout << "thirty" << endl; break;
case 4: cout << "Forty" << endl; break;
case 5: cout << "fifty" << endl; break;
case 6: cout << "sixty" << endl; break;
case 7: cout << "Seventy" << endl; break;
case 8: cout << "Eighty" << endl; break;
case 9: cout << "Ninety" << endl; break;

}

switch(q) {

case 1: cout << "one" << endl; break;
case 2: cout << "two" << endl; break;
case 3: cout << "three" << endl; break;
case 4: cout << "four" << endl; break;
case 5: cout << "five" << endl; break;
case 6: cout << "six" << endl; break;
case 7: cout << "seven" << endl; break;
case 8: cout << "eight" << endl; break;
case 9: cout << "nine" << endl; break;

}

	}




}


