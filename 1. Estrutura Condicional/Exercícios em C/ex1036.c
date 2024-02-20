// beecrowd | 1036 - Fórmula de Bhaskara

#include <stdio.h>
#include <math.h>

int main() {
    double a, b, c, delta, r1, r2;

    scanf("%lf %lf %lf", &a, &b, &c);

    delta = b * b - 4 * a * c;

    if (a != 0 && delta > -1) {
        r1 = (-b + sqrt(delta)) / (a * 2);
        r2 = (-b - sqrt(delta)) / (a * 2);

        printf("R1 = %.5lf\n", r1);
        printf("R2 = %.5lf\n", r2);
    } else {
        printf("Impossivel calcular\n");
    }

    return 0;
}
