//  beecrowd | 1020 - Idade em Dias

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    int anos, meses, dias;

    scanf("%d", &dias);

    anos = dias / 365;
    dias %= 365;

    meses = dias / 30;
    dias %= 30;

    printf("%d ano(s)\n", anos);
    printf("%d mes(es)\n", meses);
    printf("%d dia(s)\n", dias);

    return 0;
}