// beecrowd | 1827 - Matriz IV

using System;

class URI
{
    static void Main(string[] args)
    {
        string input;

        while ((input = Console.ReadLine()) != null)
        {
            int N;

            // Tenta converter N para inteiro
            if (!int.TryParse(input, out N) || N < 5 || N > 101 || N % 2 == 0)
            {
                // Se a entrada não for válida, pula para a próxima entrada
                continue;
            }

            int[,] matriz = new int[N, N]; // Matriz NxN (2 dimensões)

            // Preenche a matriz
            for (int Y = 0; Y < N; Y++)
            {
                for (int X = 0; X < N; X++)
                {
                    if (X >= N / 3 && X < N - N / 3 && Y >= N / 3 && Y < N - N / 3)
                    {
                        matriz[Y, X] = 1; // Quadrado central
                    }

                    else if (X == Y)
                    {
                        matriz[Y, X] = 2; // Diagonal principal
                    }

                    else if (X + Y == N - 1)
                    {
                        matriz[Y, X] = 3; // Diagonal secundária
                    }

                    else
                    {
                        matriz[Y, X] = 0; // Outras células
                    }
                }
            }

            // Define o centro da matriz
            matriz[N / 2, N / 2] = 4;

            // Imprime a matriz
            for (int Y = 0; Y < N; Y++)
            {
                for (int X = 0; X < N; X++)
                {
                    Console.Write(matriz[Y, X]);
                }

                Console.WriteLine();
            }

            Console.WriteLine();
        }
    }
}
