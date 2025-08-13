// beecrowd | 2003 - Domingo de Manhã

#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    int horas, minutos;

    while (scanf("%d:%d", &horas, &minutos) != EOF)
    {
        const int horarioEncontro = 8 * 60; // Horário do encontro em minutos (8:00 = 480 minutos)

        // Calcula o horário de chegada de Bino (horário em que acorda + 60 minutos de deslocamento)
        int horarioChegada = horas * 60 + minutos + 60;

        // Se horarioChegada <= horarioEncontro, o atraso será 0; caso contrário, será a diferença entre os dois
        int atraso = max(0, horarioChegada - horarioEncontro);

        cout << "Atraso maximo: " << atraso << endl;
    }

    return 0;
}
