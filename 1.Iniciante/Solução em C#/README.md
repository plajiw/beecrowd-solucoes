# Compilação e Execução de C# em Ambiente Alternativo
Este guia descreve como compilar e executar programas em C# utilizando o .NET SDK em um ambiente de console, como no Beecrowd.

## Pré-requisitos
Antes de começar, certifique-se de que você tem o .NET SDK instalado em seu sistema.

## Criando um Novo Projeto C#
Para iniciar, abra o terminal do seu sistema ou o terminal integrado do Visual Studio Code. Execute o seguinte comando para criar um novo projeto de console em C#:

````bash
dotnet new console -n NomeDoProjeto
````

Exemplo:

````bash
dotnet new console -n 1001
cd 1001
````

## Estrutura Básica do Código
No arquivo Program.cs, você pode usar a seguinte estrutura como base para resolver problemas do Beecrowd:

````C#
using System;

class URI {
    static void Main(string[] args) {
        // Seu código aqui
    }
}
````
## Compilando e Executando o Programa
Para compilar e executar o programa, utilize o seguinte comando no terminal:

````bash
dotnet run
````
