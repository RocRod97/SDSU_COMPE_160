/*Name: Rocco Rodriguez
Course COMPE 160
Week 1 Question [1]
Brief: Put 2 values into 1 variable before asking for the third.*/

#include <iostream>
using namespace std;

int main()
{
    int a;
    int b;

    cout << "Please input your first number: ";
    cin >> a;
    cout << "\nPlease input your second number: ";
    cin >> b;

    a = a + b;

    cout << "\nPlease input your third number: ";
    cin >> b;

    a = a + b;

    cout << "\nYour numbers added together is: " << a << endl;

}

