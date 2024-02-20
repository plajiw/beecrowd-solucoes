// beecrowd | 1040 - Average 3

#include <stdio.h>

int main()
{
    double n1, n2, n3, n4;
    int p1 = 2, p2 = 3, p3 = 4, p4 = 1;
    double media;

    scanf("%lf %lf %lf %lf", &n1, &n2, &n3, &n4);

    media = ((n1 * p1) + (n2 * p2) + (n3 * p3) + (n4 * p4)) / (p1 + p2 + p3 + p4);

    printf("Media: %.1lf\n", media);

    if (media >= 7)
    {
        printf("Aluno aprovado.\n");
    }
    else if ((media >= 5) && (media <= 6.9))
    {
        printf("Aluno em exame.\n");

        double exam;
        scanf("%lf", &exam);

        printf("Nota do exame: %.1lf\n", exam);

        media = (media + exam) / 2.0;

        if (media >= 5)
        {
            printf("Aluno aprovado.\n");
            printf("Media final: %.1lf\n", media);
        }
        else
        {
            printf("Aluno reprovado.\n");
            printf("Media final: %.1lf\n", media);
        }

    }
    else
    {
        printf("Aluno reprovado.\n");
    }

    return 0;
}
