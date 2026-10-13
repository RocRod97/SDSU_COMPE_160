/*
Name: Rocco Rodriguez
Course: COMPE 160
Week: 3 Question: 2
Brief: Nested for loop to get the amount of rows and establish an ascending i. 
Then inside make it print asterisks equal to i.
*/

#include <iostream>
using namespace std;

int main()
{
    
    for (int i = 0; i < 4; i++) {

        for (int u = 0; u <= i; u++) {

            cout << "*";

        }

        cout << endl;

    }


}

