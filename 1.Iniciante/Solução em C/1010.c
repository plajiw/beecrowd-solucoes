// beecrowd | 1010 - Simple Calculate

#include <stdio.h>

int main()
{
    int cdg_1, qtd_1, cdg_2, qtd_2;
    double vlr_1, vlr_2, total;

    scanf("%d %d %lf", &cdg_1, &qtd_1, &vlr_1);
    scanf("%d %d %lf", &cdg_2, &qtd_2, &vlr_2);

    total = qtd_1 * vlr_1 + qtd_2 * vlr_2;

    printf("VALOR A PAGAR: R$ %.2lf\n", total);

    return 0;
}
