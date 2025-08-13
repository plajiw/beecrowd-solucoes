// beecrowd | 2234 - Cachorros-Quentes

#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    int H, P;

    cin >> H >> P;

    double media = static_cast<double>(H) / P; // Cast para converter um dos valores em double

    cout << fixed << setprecision(2) << media << endl;
}