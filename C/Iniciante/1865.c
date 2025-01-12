// beecrowd | 1865 - Mjölnir

#include <stdio.h>
#include <string.h>

int main()
{
    int C;
    scanf("%d", &C);

    for (int i = 0; i < C; i++)
    {
        char nome[100];
        int newtons;

        scanf("%s %d", nome, &newtons);

        if (strcmp(nome, "Thor") == 0)
        {
            printf("Y\n");
        }

        else
        {
            printf("N\n");
        }
    }

    return 0;
}
