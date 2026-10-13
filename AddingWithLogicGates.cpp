/*
Name: Rocco Rodriguez
Course: COMPE 160
Week: 2 Question: 2
Brief: AND the two values to see where the has to be a carry. "a" becomes XOR'd/added to combined
the rest and then "b" becomes the carried digits to be XOR'd.
*/

#include <iostream>
using namespace std;

int main()
{
    
    int a;
    int b;
    int c;

    cin >> a;
    cin >> b;

    for (int i = 0; i < 9; i++) {

        c = a & b;
        a = a xor b;
        b = c << 1;

    }

    cout << a << endl;

}
