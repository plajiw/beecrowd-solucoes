// beecrowd | 1048 - ajuste de Salário

#include <stdio.h>

int main()
{
    double salario;
    int ajuste;

    scanf("%lf", &salario);

    if (salario <= 400.00)
    {
        ajuste = 15;
    }

    else if (salario <= 800.00)
    {
        ajuste = 12;
    }

    else if (salario <= 1200.00)
    {
        ajuste = 10;
    }

    else if (salario <= 2000)
    {
        ajuste = 7;
    }

    else
    {
        ajuste = 4;
    }


    printf("Novo salario: %.2lf\n", salario + (salario * ajuste / 100.0)); // Ao dividir um int por um double, o valor será promovido automaticamente para um double
    printf("Reajuste ganho: %.2lf\n", salario * ajuste / 100.0);
    printf("Em percentual: %d %%\n", ajuste);

    return 0;
}
