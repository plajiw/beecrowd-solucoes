// beecrowd | 1009 - Salary with Bonus

#include <stdio.h>

int main() {
    char vendedor[20]; // Para ler o nome do vendedor
    double salario, vendas, total;

    scanf("%s %lf %lf", vendedor, &salario, &vendas); // Não precisa passar o endereço da variável, pois a string em C é um array de caracteres e já passa o endereço de memória. Além disso, você deve garantir que a string tenha espaço suficiente para armazenar o nome inserido pelo usuário.

    total = salario + vendas * 0.15;

    printf("TOTAL = R$ %.2lf\n", total);

    return 0;
}
