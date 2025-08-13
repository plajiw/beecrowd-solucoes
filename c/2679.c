// beecrowd | 2679 - Sucessor Par

#include <stdio.h>

int main()
{
    int X;
    scanf("%d", &X);
    int proximo_par;

    if (X % 2 == 0)
    { // Entrada é par
        proximo_par = X + 2;
    }

    else
    { // Entrada é ímpar
        proximo_par = X + 1;
    }

    printf("%d\n",proximo_par);

    return 0;
}