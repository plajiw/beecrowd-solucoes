//  beecrowd | 1019 - Conversão de Tempo

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    int horas, minutos, segundos;

    scanf("%d", &segundos);

    horas = segundos / 3600;
    segundos %= 3600; // O resto da divisão de 3600

    minutos = segundos / 60;
    segundos %= 60;

    printf("%d:%d:%d\n", horas, minutos, segundos);

    return 0;
}