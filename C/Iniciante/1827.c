// beecrowd | 1827 - Matriz IV

#include <stdio.h>

int main()
{
    int N;

    while (scanf("%d", &N) != EOF)
    {

        // Verifica se N é válido (ímpar e no intervalo 5 ≤ N ≤ 101)
        if (N >= 5 && N <= 101 && N % 2 != 0)
        {
            int matriz[N][N]; // Declaração da matriz quadrada de tamanho N x N

            // Preenchendo os valores na matriz
            for (int Y = 0; Y < N; Y++) // Índice Y (linhas)
            {
                for (int X = 0; X < N; X++) // Índice X (colunas)
                {
                    // Preenche o quadrado central
                    if (
                        X >= N / 3 && X < N - N / 3 && Y >= N / 3 && Y < N - N / 3)
                    {
                        matriz[Y][X] = 1;
                    }

                    // Preenche a diagonal principal
                    else if (X == Y)
                    {
                        matriz[Y][X] = 2;
                    }

                    // Preenche a diagonal secundária
                    else if (X + Y == N - 1)
                    {
                        matriz[Y][X] = 3;
                    }

                    // Todas as outras células fora dessas condições recebem 0
                    else
                    {
                        matriz[Y][X] = 0;
                    }
                }
            }

            // 5. Define o centro da matriz com valor 4
            // O centro está na linha e coluna N/2 (já que N é ímpar)
            matriz[N / 2][N / 2] = 4;

            // Imprimindo a matriz
            for (int Y = 0; Y < N; Y++)
            {
                for (int X = 0; X < N; X++)
                {
                    printf("%d", matriz[Y][X]);
                }
                printf("\n");
            }

            printf("\n");
        }
    }

    return 0;
}
