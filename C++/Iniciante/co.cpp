#include <iostream>
using namespace std;

void lerString(char *string, int tamanho)
{
    int index = 0;

    while (index < tamanho - 1)
    {
        char ch = cin.get();

        if (ch == '\n' || ch == EOF)
        {
            break;
        }

        string[index++] = ch;
    }

    string[index] = '\0';
}

int main()
{
    char msg[101];
    lerString(msg, 101);

    int posicaoVirgula = -1;

    // Encontrar a posição da vírgula
    for (int i = 0; msg[i] != '\0'; i++)
    {
        if (msg[i] == ',' && posicaoVirgula == -1)
        {
            posicaoVirgula = i;
        }
    }

    if (posicaoVirgula != -1)
    {
        // Imprime a parte antes da vírgula
        for (int i = 0; i < posicaoVirgula; i++)
        {
            cout << msg[i];
        }
        
        cout << endl;

        // Imprime a parte após a vírgula
        for (int i = posicaoVirgula + 1; msg[i] != '\0'; i++)
        {
            cout << msg[i];
        }

        cout << endl;
    }

    return 0;
}
