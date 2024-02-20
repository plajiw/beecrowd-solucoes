// beecrowd | 1038 - Snack

#include <stdio.h>

int main()
{
    int X, Y;
    double price;

    scanf("%d %d", &X, &Y);

    switch (X)
    {
    case 1:
        price = 4;
        break;
    case 2:
        price = 4.50;
        break;
    case 3:
        price = 5;
        break;
    case 4:
        price = 2;
        break;
    case 5:
        price = 1.50;
        break;
    }

    printf("Total: R$ %.2f\n", Y * price);

    return 0;
}
