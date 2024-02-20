//  beecrowd | 1014 - Consumption

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int X;
    double Y, resultado;

    scanf("%d %lf", &X, &Y);

    resultado = X / Y;

    printf("%.3lf km/l\n", resultado);

    return 0;
}