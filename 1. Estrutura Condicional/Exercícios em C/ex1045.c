// beecrowd | 1045 - Tipos de Triângulos

#include <stdio.h>

int main()
{
    double a, b, c;

    scanf("%lf %lf %lf", &a, &b, &c);

    double aa = a * a;
    double bb = b * b;
    double cc = c * c;

    if (a >= (b + c) || b >= (a + c) || c >= (a + b))
    {
        printf("NAO FORMA TRIANGULO\n");
    }

    else
    {
        if (aa == (bb + cc) || bb == (aa + cc) || cc == (aa + bb))
        {
            printf("TRIANGULO RETANGULO\n");
        }

        if (aa > (bb + cc) || bb > (aa + cc) || cc > (aa + bb))
        {
            printf("TRIANGULO OBTUSANGULO\n");
        }

        if (aa < (bb + cc) && bb < (aa + cc) && cc < (aa + bb))
        {
            printf("TRIANGULO ACUTANGULO\n");
        }

        if (a == b && b == c)
        {
            printf("TRIANGULO EQUILATERO\n");
        }

        else if (a == b || a == c || b == c)
        {
            printf("TRIANGULO ISOSCELES\n");
        }
    }

    return 0;
}
