// beecrowd | 1006 - Média 2

#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    const int PesoA = 2, PesoB = 3, PesoC = 5;
    double A, B, C, MEDIA;

    cin >> A >> B >> C;

    MEDIA = (A * PesoA + B * PesoB + C * PesoC) / (PesoA + PesoB + PesoC);

    cout << fixed << setprecision(1) << "MEDIA = " << MEDIA << endl;

    return 0;
}