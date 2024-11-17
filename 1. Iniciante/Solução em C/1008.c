// beecrowd | 1008 - Salary

#include <stdio.h>

int main() {
    
    int funcionario_num;
    double horas_trabalhadas, vlr_hora, salario;

    scanf("%d %lf %lf", &funcionario_num, &horas_trabalhadas, &vlr_hora);

    salario = horas_trabalhadas * vlr_hora;

    printf("NUMBER = %d\n", funcionario_num);
    printf("SALARY = U$ %.2lf\n", salario);

    return 0;
}
