// beecrowd | 2679 - Sucessor Par

#include <iostream>
using namespace std;

int main()
{
    int X;
    cin >> X;
    int proximo_par;

    if (X % 2 == 0)
    { 
        proximo_par = X + 2;
    }

    else
    { 
        proximo_par = X + 1;
    }

    cout << proximo_par << endl;

    return 0;
}