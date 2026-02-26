// beecrowd | 2159 - Número Aproximado de Primos

#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

int main()
{

    int long long N;

    cin >> N;

    double LogN = log(N);

    double minimo = N / LogN;
    double maximo = 1.25506 * minimo;

    cout << fixed << setprecision(1) << minimo << " " << maximo << endl;

    return 0;
}