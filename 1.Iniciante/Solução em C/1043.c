// beecrowd | 1043 - Triângulo

#include <stdio.h>

int main()
{
    double a, b, c;

    scanf("%lf %lf %lf", &a, &b, &c);

    // Condição de existência de um triângulo: a medida de cada lado deve ser menor que a soma das medidas dos outros dois lados
    if ((a < b + c) && (b < a + c) && (c < b + a))
    {
        double perimetro;
        perimetro = a + b + c;
        printf("Perimetro = %.1lf\n", perimetro);
    }
    else
    {
        double area_trapezio;
        area_trapezio = ((a + b) * c) / 2;
        printf("Area = %.1lf\n", area_trapezio);
    }

    return 0;
}
