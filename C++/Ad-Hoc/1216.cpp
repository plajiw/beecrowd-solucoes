// beecrowd | 1216 - Getline One

#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

int main()
{
    string nome;
    double distancia, soma = 0.0;
    int count = 0;

    while (getline(cin, nome))
    {
        cin >> distancia;
        cin.ignore(); // Ignora o '\n' no buffer

        soma += distancia;
        count++;
    }

    cout << fixed << setprecision(1) << soma / count << endl;

    return 0;
}
