// beecrowd | 1047 - Tempo de Jogo com Minutos

#include <stdio.h>

int main()
{
    int h_inicial, m_inicial, h_final, m_final, duracao;

    scanf("%d %d %d %d", &h_inicial, &m_inicial, &h_final, &m_final);

    h_inicial = (h_inicial * 60) + m_inicial; // Converter as horas em minutos
    h_final = (h_final * 60) + m_final;       // Converter as horas em minutos

    if (h_final > h_inicial)
    {
        duracao = h_final - h_inicial;
        printf("O JOGO DUROU %d HORA(S) E %d MINUTO(S)\n", (duracao / 60) /*Descobrir as horas*/, (duracao % 60) /*Descobrir os minutos*/);
    }

    else if (h_final < h_inicial)
    {
        duracao = (1440 - h_inicial) + h_final; // 24 * 60 = 1440 (minutos de um dia completo)
        printf("O JOGO DUROU %d HORA(S) E %d MINUTO(S)\n", (duracao / 60) /*Descobrir as horas*/, (duracao % 60) /*Descobrir os minutos*/);
    }

    else
    {
        printf("O JOGO DUROU %d HORA(S) E %d MINUTO(S)\n", 24, 0);
    }

    return 0;
}
