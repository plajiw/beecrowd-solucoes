// beecrowd | 1051 - Imposto de Renda

#include <stdio.h>

int main()
{
    double renda, imposto;

    imposto = 0;

    scanf("%lf", &renda);

    if (renda > 4500)
    {
        imposto = (renda - 4500.0) * 0.28 + 1500.0 * 0.18 + 1000.0 * 0.08;
    }

    else if (renda > 3000)
    {
        imposto = (renda - 3000.0) * 0.18 + 1000.0 * 0.08;
    }

    else if (renda > 2000)
    {
        imposto = (renda - 2000.0) * 0.08;
    }

    if (imposto == 0.0)
    {
        printf("Isento\n");
    }

    else
    {
        printf("R$ %.2lf\n", imposto);
    }

    // printf(imposto == 0.0 ? "Isento\n" : "Imposto de Renda: R$ %.2lf\n", imposto);

    return 0;
}