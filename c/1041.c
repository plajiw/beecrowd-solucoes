// beecrowd | 1041 - Coordenadas de um Ponto

#include <stdio.h>

int main()
{
    double x, y;

    scanf("%lf %lf", &x, &y);

    if (x > 0 && y > 0) // Quadrante 1 (+x +y)
    {
        printf("Q1\n");
    }

    else if (x < 0 && y > 0) // Quadrante 2 (-x +y)
    {
        printf("Q2\n");
    }

    else if (x < 0 && y < 0) // Quadrante 3 (-x -y)
    {
        printf("Q3\n");
    }

    else if (x > 0 && y < 0) // Quadrante 4 (+x -y)
    {
        printf("Q4\n");
    }

    else
    {
        if (x == 0 && y != 0)
        {
            printf("Eixo Y\n");
        }

        else if (y == 0 && x != 0)
        {
            printf("Eixo X\n");
        }

        else
        {
            printf("Origem\n");
        }
    }

    return 0;
}
