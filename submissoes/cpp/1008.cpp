// beecrowd | 1008 - Salário

#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    int id, horas;
    double valorHora, salario;

    cin >> id, horas, valorHora;

    salario = horas * valorHora;

    cout << "NUMBER = " << id << endl;
    cout << "SALARY = " << fixed << setprecision(2) << salario << endl;

    return 0;
}
