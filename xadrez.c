#include <stdio.h>

// Desafio de Xadrez - MateCheck
// O objetivo é utilizar estruturas de repetição e funções para determinar os limites de movimentação dentro do jogo.

int main() {
    // Nível Novato - Movimentação das Peças
    // Sugestão: Declare variáveis constantes para representar o número de casas que cada peça pode se mover.
    int i, j;  // variáveis de controle de loops
    int numeroDeCasasBispo = 5;
    int numeroDeCasasTorre = 5;
    int numeroDeCasasRainha = 8;
    int numeroDeCasasCavaloParaBaixo = 2;
    int numeroDeCasasCavaloParaEsquerda = 1;

    // Implementação de Movimentação do Bispo utilizando a estrutura while
    // Movimento do Bispo cinco casas na diagonal para cima e à direita
    printf("*********************\n");
    printf("Movimentação do Bispo\n");
    printf("*********************\n");
    i = 1;
    while (i <= numeroDeCasasBispo) {
        printf("Cima Direita\n");
        i++;
    }
    printf("\n");
    // Implementação de Movimentação da Torre utilizando a estrutura do while
    // Movimento da Torre cinco casas para a direita
    printf("*********************\n");
    printf("Movimentação da Torre\n");
    printf("*********************\n");
    i = 1;
    do
    {
        printf("Direita\n");
        i++;
    } while (i <= numeroDeCasasTorre);
    printf("\n");

    // Implementação de Movimentação da Rainha utilizando a estrutura  for
    // Movimento da Rainha oito casas para a esquerda
    printf("**********************\n");
    printf("Movimentação da Rainha\n");
    printf("**********************\n");
    for (i = 1; i <= numeroDeCasasRainha; i++)
    {
        printf("Esquerda\n");
    }
    printf("\n");

    // Nível Aventureiro - Movimentação do Cavalo
    // Um loop pode representar a movimentação horizontal e outro vertical.
    // Movimento do Cavalo duas casas para baixo e uma casa para a esquerda
    printf("**********************\n");
    printf("Movimentação do Cavalo\n");
    printf("**********************\n");
    for (i = 1; i <= numeroDeCasasCavaloParaBaixo; i++)
    {
        printf("Baixo\n");
        j = 1;
        while (j <= numeroDeCasasCavaloParaEsquerda)
        {
            if (i % 2 == 0) {
                printf("Esquerda\n");
            }
            j++;
        }
    }
    printf("\n");

    // Nível Mestre - Funções Recursivas e Loops Aninhados
    // Sugestão: Substitua as movimentações das peças por funções recursivas.
    // Exemplo: Crie uma função recursiva para o movimento do Bispo.

    // Sugestão: Implemente a movimentação do Cavalo utilizando loops com variáveis múltiplas e condições avançadas.
    // Inclua o uso de continue e break dentro dos loops.

    return 0;
}
