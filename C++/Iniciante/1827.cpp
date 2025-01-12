// beecrowd | 1827 - Matriz IV

#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int N;

    while (cin >> N)
    {
        // Cria uma matriz NxN usando vector
        vector<vector<int>> matriz(N, vector<int>(N, 0));

        // Preencher a matriz
        for (int Y = 0; Y < N; Y++)
        {
            for (int X = 0; X < N; X++)
            {
                if (X >= N / 3 && X < N - N / 3 && Y >= N / 3 && Y < N - N / 3)
                {
                    matriz[Y][X] = 1; // Qu Fadrado central
                }

                else if (X == Y)
                {
                    matriz[Y][X] = 2; // Diagonal principal
                }

                else if (X + Y == N - 1)
                {
                    matriz[Y][X] = 3; // Diagonal secundária
                }

                else
                {
                    matriz[Y][X] = 0; // Outras células
                }
            }
        }

        // Define o centro da matriz
        matriz[N / 2][N / 2] = 4;

        // Imprimindo a matriz
        for (int Y = 0; Y < N; Y++)
        {
            for (int X = 0; X < N; X++)
            {
                cout << matriz[Y][X];
            }
            cout << endl;
        }

        cout << endl;
    }

    return 0;
}
