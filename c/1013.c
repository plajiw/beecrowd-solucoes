//  beecrowd | 1013 - The Greatest

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a, b, c, maiorAB, maiorABC;

    scanf("%d %d %d", &a, &b, &c);

    maiorAB = (a + b + abs(a - b)) / 2; // Maior valor entre A e B
    maiorABC = (maiorAB + c + abs(maiorAB - c)) / 2; // Maior valor entre o resultadoAB e C
    
    printf("%d eh o maior\n", maiorABC);

    return 0;
}