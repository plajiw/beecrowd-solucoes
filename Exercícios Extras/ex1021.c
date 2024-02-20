//  beecrowd | 1021 - Notas e Moedas

#include <stdio.h>

int main() {
    double valor;
    int n100, n50, n20, n10, n5, n2; // Notas
    int c1, c50, c25, c10, c05, c01; // Centavos

    scanf("%lf", &valor);

    int centavos = valor * 100;

    n100 = centavos / 10000;
    centavos %= 10000;

    n50 = centavos / 5000;
    centavos %= 5000;

    n20 = centavos / 2000;
    centavos %= 2000;

    n10 = centavos / 1000;
    centavos %= 1000;

    n5 = centavos / 500;
    centavos %= 500;

    n2 = centavos / 200;
    centavos %= 200;

    c1 = centavos / 100;
    centavos %= 100;

    c50 = centavos / 50;
    centavos %= 50;

    c25 = centavos / 25;
    centavos %= 25;

    c10 = centavos / 10;
    centavos %= 10;

    c05 = centavos / 5;
    centavos %= 5;

    c01 = centavos;

    printf("NOTAS:\n");
    printf("%d nota(s) de R$ 100.00\n", n100);
    printf("%d nota(s) de R$ 50.00\n", n50);
    printf("%d nota(s) de R$ 20.00\n", n20);
    printf("%d nota(s) de R$ 10.00\n", n10);
    printf("%d nota(s) de R$ 5.00\n", n5);
    printf("%d nota(s) de R$ 2.00\n", n2);
    printf("MOEDAS:\n");
    printf("%d moeda(s) de R$ 1.00\n", c1);
    printf("%d moeda(s) de R$ 0.50\n", c50);
    printf("%d moeda(s) de R$ 0.25\n", c25);
    printf("%d moeda(s) de R$ 0.10\n", c10);
    printf("%d moeda(s) de R$ 0.05\n", c05);
    printf("%d moeda(s) de R$ 0.01\n", c01);

    return 0;
}
