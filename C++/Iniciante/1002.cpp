#include <iostream>
#include <iomanip> // Para setprecision
using namespace std;

const double PI = 3.14159;

int main()
{
    double raio, area;

    cin >> raio;
    area = (raio * raio) * PI;

    cout << fixed << setprecision(4) << "A=" << area << endl;

    return 0;
}
