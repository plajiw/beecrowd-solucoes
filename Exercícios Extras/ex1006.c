// beecrowd | 1006 - Average 2

#include <stdio.h>

int main()
{

    double A, B, C, average;

    double P1 = 2, P2 = 3, P3 = 5;

    scanf("%lf %lf %lf", &A, &B, &C);
    
    average = (A * P1 + B * P2 + C * P3) / 10.0;

    printf("MEDIA = %.1lf\n", average); 

    return 0;
}
