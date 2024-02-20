//  beecrowd | 1017 - Fuel Spent

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    int tempo, velocidade;
    double distancia;

    scanf("%d %d", &tempo, &velocidade);

    distancia = tempo * velocidade;

    distancia = distancia / 12;

    printf("%.3lf\n", distancia);

    return 0;
}