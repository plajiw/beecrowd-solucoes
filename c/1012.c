// beecrowd | 1012 - Area

#include <stdio.h>

#define PI 3.14159

int main()
{
    double A, B, C;
    double triangulo, area_circulo, trapezio, quadrado, retangulo;

    scanf("%lf %lf %lf", &A, &B, &C);

    triangulo = (A * C) / 2.0;

    area_circulo = PI * (C * C); // A = PI * R^2

    trapezio = ((A + B) * C) / 2.0; // (B + b) * h / 2

    quadrado = B * B;

    retangulo = A * B;

    printf("TRIANGULO: %.3lf\n", triangulo);
    printf("CIRCULO: %.3lf\n", area_circulo);
    printf("TRAPEZIO: %.3lf\n", trapezio);
    printf("QUADRADO: %.3lf\n", quadrado);
    printf("RETANGULO: %.3lf\n", retangulo);

    return 0;
}