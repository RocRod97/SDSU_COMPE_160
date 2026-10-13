#include <iostream>
using namespace std;

int main()
{
    
    int a;
    int b;

    cout << "What did team 1 score? ";
    cin >> a;
    cout << "What did team 2 score? ";
    cin >> b;

    if (a == b)
        cout << "The teams tied" << endl;
    else if (b == 0)
        cout << "Team 1 shutout team 2" << endl;
    else if (a == 0)
        cout << "Team 2 shutout team 1" << endl;
    else if (a > b)
        cout << "The first team won" << endl;
    else if (b > a)
        cout << "The second team won" << endl;


}

