#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

typedef struct Node
{
    char dado;
    struct Node *proximo;
} Node;

void push(Node **topo, char valor)
{
    Node *newNode = (Node *)malloc(sizeof(Node));
    if (newNode == NULL)
        return;

    newNode->dado = valor;
    newNode->proximo = *topo;
    *topo = newNode;
}

char pop(Node **topo)
{
    if (*topo == NULL)
        return '\0';

    Node *temp = *topo;
    char poppedData = temp->dado;
    *topo = (*topo)->proximo;

    free(temp);
    return poppedData;
}

bool ehVazio(Node *topo)
{
    return topo == NULL;
}

void limparPilha(Node **topo)
{
    while (!ehVazio(*topo))
        pop(topo);
}

int main()
{
}