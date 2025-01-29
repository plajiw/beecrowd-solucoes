// beecrowd | 1023 - Estiagem

#include <iostream>
#include <iomanip>
#include <vector>
using namespace std;

struct cidade
{
    int qtdMoradores;
    int consumoMoradores;
};

int main()
{
    int entrada;
    cin >> entrada;

    vector<cidade> cidades(entrada);

    int totalMoradores = 0;
    double totalConsumo = 0.0;

    for (int i = 0; i < entrada; i++)
    {
        cin >> cidades[i].qtdMoradores >> cidades[i].consumoMoradores;

        totalMoradores += cidades[i].qtdMoradores;
        totalConsumo += cidades[i].consumoMoradores;
    }

    double consumoMedio = totalConsumo / totalMoradores;

    cout << "Consumo medio: " << fixed << setprecision(2) << consumoMedio << " m3/hab" << endl;

    return 0;
}
