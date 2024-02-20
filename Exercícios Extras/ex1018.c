//  beecrowd | 1018 - Cédulas

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    int cedula;

    scanf("%d", &cedula);

    printf("%d\n", cedula);

    printf("%d nota(s) de R$ 100,00\n", cedula / 100);
    cedula %= 100;

    printf("%d nota(s) de R$ 50,00\n", cedula / 50);
    cedula %= 50;

    printf("%d nota(s) de R$ 20,00\n", cedula / 20);
    cedula %= 20;

    printf("%d nota(s) de R$ 10,00\n", cedula / 10);
    cedula %= 10;

    printf("%d nota(s) de R$ 5,00\n", cedula / 5);
    cedula %= 5;

    printf("%d nota(s) de R$ 2,00\n", cedula / 2);
    cedula %= 2;

    printf("%d nota(s) de R$ 1,00\n", cedula / 1);

    return 0;
}