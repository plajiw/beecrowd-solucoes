// beecrowd | 2765 - Entrada e Saída com Virgula

#include <iostream>
using namespace std;

void lerString(char *string, int tamanho)
{
    int index = 0;

    while (index < tamanho - 1)
    {
        cin.get(string[index]);

        if (string[index] == '\n')
        {
            string[index] = '\0';
            return;
        }

        index++;
    }

    string[index] = '\0';
}

int tamanhoString(const char *string)
{
    int comprimento = 0;

    while (string[comprimento] != '\0')
    {
        comprimento++;
    }

    return comprimento;
}

int main()
{
    char msg[1001];

    lerString(msg, 1001);

    int comprimento = tamanhoString(msg);
    int posicaoVirgula = 0;

    // Loop para encontrar a posição da vírgula
    for (int i = 0; i < comprimento; i++)
    {
        if (msg[i] == ',')
        {
            posicaoVirgula = i;
            break;
        }
    }

    if (posicaoVirgula)
    {
        // Loop para imprimir até a vírgula
        for (int i = 0; i < posicaoVirgula; i++)
        {
            cout << msg[i];
        }

        cout << endl;

        // Loop para imprimir após a vírgula
        for (int j = posicaoVirgula + 1; j < comprimento; j++)
        {
            cout << msg[j];
        }

        cout << endl;
    }

    return 0;
}