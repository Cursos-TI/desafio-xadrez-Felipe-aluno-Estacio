#include <stdio.h>

// Desafio de Xadrez - MateCheck
// Este código inicial serve como base para o desenvolvimento do sistema de movimentação das peças de xadrez.
// O objetivo é utilizar estruturas de repetição e funções para determinar os limites de movimentação dentro do jogo.

// Constantes para as movimentações
#define BISPO 5
#define TORRE 5
#define RAINHA 8

int main() {
        int i;

    printf("Movimentação das Peças no Jogo:\n\n");

    // Movimentação do Bispo: 5 casas na diagonal superior direita
    printf("Bispo (5 casas na diagonal superior direita):\n");
    for (i = 0; i < BISPO; i++) {
        printf("Direita\n");
        printf("Cima\n");
    }

    printf("\n");

    // Movimentação da Torre: 5 casas para a direita
    printf("Torre (5 casas para a direita):\n");
    for (i = 0; i < TORRE; i++) {
        printf("Direita\n");
    }

    printf("\n");

    // Movimentação da Rainha: 8 casas para a esquerda
    printf("Rainha (8 casas para a esquerda):\n");
    for (i = 0; i < RAINHA; i++) {
        printf("Esquerda\n");
    }

    printf("\n");

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

    return 0;
}
