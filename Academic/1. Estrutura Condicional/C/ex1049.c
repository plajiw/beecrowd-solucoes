// beecrowd | 1049 - Animal

#include <stdio.h>
#include <string.h>

void ler_string(char *buffer, int length)
{
    fgets(buffer, length, stdin);
    buffer[strcspn(buffer, "\n")] = '\0';
}

int main()
{

    char descricao[3][20];

    for (int i = 0; i < 3; i++)
    {
        ler_string(descricao[i], sizeof(descricao[i]));
    }

    if (strcmp(descricao[0], "vertebrado") == 0)
    {
        if (strcmp(descricao[1], "ave") == 0)
        {
            if (strcmp(descricao[2], "carnivoro") == 0)
            {
                printf("aguia\n");
            }
            else if ((strcmp(descricao[2], "onivoro") == 0))
            {
                printf("pomba\n");
            }
        }

        else if (strcmp(descricao[1], "mamifero") == 0)
        {
            if (strcmp(descricao[2], "onivoro") == 0)
            {
                printf("homem\n");
            }
            else if (strcmp(descricao[2], "herbivoro") == 0)
            {
                printf("vaca\n");
            }
        }
    }

    else if (strcmp(descricao[0], "invertebrado") == 0)
    {
        if (strcmp(descricao[1], "inseto") == 0)
        {
            if (strcmp(descricao[2], "hematofago") == 0)
            {
                printf("pulga\n");
            }
            else if (strcmp(descricao[2], "herbivoro") == 0)
            {
                printf("lagarta\n");
            }
        }
        else if (strcmp(descricao[1], "anelideo") == 0)
        {
            if (strcmp(descricao[2], "hematofago") == 0)
            {
                printf("sanguessuga\n");
            }
            else if (strcmp(descricao[2], "onivoro") == 0)
            {
                printf("minhoca\n");
            }
        }
    }

    return 0;
}
