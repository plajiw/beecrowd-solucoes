// beecrowd | 1002 - Área do Círculo

#include <stdio.h>

int main()
{
    double raio, area, PI;
    PI = 3.14159;

    scanf("%lf", &raio);

    area = PI * (raio * raio);

    printf("A=%.4lf\n", area);

    return 0;
}