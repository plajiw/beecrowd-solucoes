// beecrowd | 2159 - Número Aproximado de Primos

#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

int main()
{

    int long long N; // Para suportar até entradas de 10^9

    cin >> N;

    double LogN = log(N); // Logaritmo natural (ln)

    double minimo = N / LogN;
    double maximo = 1.25506 * minimo;

    cout << fixed << setprecision(1) << minimo << " " << maximo << endl;

    return 0;
}