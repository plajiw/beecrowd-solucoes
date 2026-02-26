// beecrowd | 2003 - Domingo de Manhã

#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    int horas, minutos;

    while (scanf("%d:%d", &horas, &minutos) != EOF)
    {
        const int horarioEncontro = 8 * 60;

        int horarioChegada = horas * 60 + minutos + 60;

        int atraso = max(0, horarioChegada - horarioEncontro);

        cout << "Atraso maximo: " << atraso << endl;
    }

    return 0;
}
