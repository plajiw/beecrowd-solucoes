// beecrowd | 1865 - Mjölnir

#include <iostream>
#include <string>
using namespace std;

int main()
{
    int C;
    cin >> C;

    for (int i = 0; i < C; i++)
    {
        string nome;
        int newtons;

        cin >> nome >> newtons;

        if (nome == "Thor")
        {
            cout << "Y" << endl;
        }

        else
        {
            cout << "N" << endl;
        }
    }

    return 0;
}
