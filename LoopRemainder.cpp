

#include <iostream>
using namespace std;

int main()
{
    
    int p, q;
    cin >> p;
    cin >> q;

    
    while (p >= q)
        p = p - q;

    cout << p << endl;

}

