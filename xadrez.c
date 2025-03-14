#include <stdio.h>

// Desafio de Xadrez - MateCheck
// O objetivo é utilizar estruturas de repetição e funções para determinar os limites de movimentação dentro do jogo.

int main() {
    // Nível Novato - Movimentação das Peças
    // Sugestão: Declare variáveis constantes para representar o número de casas que cada peça pode se mover.
    int i;  // variável de controle de loops
    int numeroDeCasasBispo = 5;
    int numeroDeCasasTorre = 5;
    int numeroDeCasasRainha = 8; 

    // Implementação de Movimentação do Bispo utilizando a estrutura while
    // Movimento do Bispo cinco casas na diagonal para cima e à direita
    printf("*********************\n");
    printf("Movimentação do Bispo\n");
    printf("*********************\n");
    i = 0;
    while (i < numeroDeCasasBispo) {
        printf("Cima Direita\n");
        i++;
    }
    printf("\n");
    // Implementação de Movimentação da Torre utilizando a estrutura do while
    // Movimento da Torre cinco casas para a direita
    printf("*********************\n");
    printf("Movimentação da Torre\n");
    printf("*********************\n");
    i = 0;
    do
    {
        printf("Direita\n");
        i++;
    } while (i < numeroDeCasasTorre);
    printf("\n");

    // Implementação de Movimentação da Rainha utilizando a estrutura  for
    // Movimento da Rainha oito casas para a esquerda
    printf("**********************\n");
    printf("Movimentação da Rainha\n");
    printf("**********************\n");
    i = 0;
    for (i = 0; i < numeroDeCasasRainha; i++)
    {
        printf("Esquerda\n");
    }
    printf("\n");

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
