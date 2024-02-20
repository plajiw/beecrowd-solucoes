// beecrowd | 1011 - Sphere

#include <stdio.h>

int main()
{
    double R, PI = 3.14159, volume_esfera;

    scanf("%lf", &R);

    volume_esfera = (4.0/3.0) * PI * (R * R * R);

    printf("VOLUME = %.3lf\n", volume_esfera);

    return 0;
}