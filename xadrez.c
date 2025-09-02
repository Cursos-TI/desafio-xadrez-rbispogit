#include <stdio.h>

// Desafio de Xadrez - MateCheck
// Este código inicial serve como base para o desenvolvimento do sistema de movimentação das peças de xadrez.
// O objetivo é utilizar estruturas de repetição e funções para determinar os limites de movimentação dentro do jogo.

void recursivoTorre(int torre)
{
    if (torre > 0)
    {
        printf("Direita\n");
        recursivoTorre(torre - 1);
    }
}

void recursivoBispo(int bispo)
{
    for (int i = bispo; i > 0; i--)
    {
        printf("Cima\n");
        for (int j = 1; j > 0; j--)
        {
            printf("Direita\n");
        }
    }
}

void recursivoRainha(int rainha)
{
    if (rainha > 0)
    {
        printf("Esquerda\n");
        recursivoRainha(rainha - 1);
    }
}

int main()
{
    // Nível Novato - Movimentação das Peças
    // Sugestão: Declare variáveis constantes para representar o número de casas que cada peça pode se mover.

    // Implementação de Movimentação do Bispo
    // Sugestão: Utilize uma estrutura de repetição para simular a movimentação do Bispo em diagonal.

    // Implementação de Movimentação da Torre
    // Sugestão: Utilize uma estrutura de repetição para simular a movimentação da Torre para a direita.

    // Implementação de Movimentação da Rainha
    // Sugestão: Utilize uma estrutura de repetição para simular a movimentação da Rainha para a esquerda.

    // Nível Aventureiro - Movimentação do Cavalo
    // Sugestão: Utilize loops aninhados para simular a movimentação do Cavalo em L.
    // Um loop pode representar a movimentação horizontal e outro vertical.

    // Nível Mestre - Funções Recursivas e Loops Aninhados
    // Sugestão: Substitua as movimentações das peças por funções recursivas.
    // Exemplo: Crie uma função recursiva para o movimento do Bispo.

    // Sugestão: Implemente a movimentação do Cavalo utilizando loops com variáveis múltiplas e condições avançadas.
    // Inclua o uso de continue e break dentro dos loops.

    int torre = 5;
    int bispo = 3;
    int rainha = 8;
    int movimentoCompleto = 1;


    printf("Torre: \n");
    recursivoTorre(torre);
    printf("\n");

    printf("Bispo:\n");
    recursivoBispo(bispo);
    printf("\n");

    printf("Rainha:\n");
    recursivoRainha(rainha);
    printf("\n");

    while (movimentoCompleto--)
    {
        for (int i = 0; i < 2; i++)
        {
            printf("Baixo\n");
        }

        printf("Esquerda.\n");
    }

    return 0;
}