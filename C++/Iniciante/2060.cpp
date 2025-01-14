// beecrowd | 2060 - Desafio de Bino

#include <iostream>
using namespace std;

int main()
{
    int N;
    cin >> N;

    int lista[N];

    int count2 = 0, count3 = 0, count4 = 0, count5 = 0;

    for (int i = 0; i < N; i++)
    {

        cin >> lista[i];

        if (lista[i] % 2 == 0)
            count2++;

        if (lista[i] % 3 == 0)
            count3++;

        if (lista[i] % 4 == 0)
            count4++;

        if (lista[i] % 5 == 0)
            count5++;
    }

    cout << count2 << " Multiplo(s) de 2" << endl;
    cout << count3 << " Multiplo(s) de 3" << endl;
    cout << count4 << " Multiplo(s) de 4" << endl;
    cout << count5 << " Multiplo(s) de 5" << endl;

    return 0;
}