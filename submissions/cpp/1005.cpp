// beecrowd | 1005 - Média 1

#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    const double PA = 3.5;
    const double PB = 7.5;

    double A, B, MEDIA;

    cin >> A >> B;

    MEDIA = (A * PA + B * PB) / 11;

    cout << fixed << setprecision(5) << "MEDIA = " << MEDIA << endl;

    return 0;
}