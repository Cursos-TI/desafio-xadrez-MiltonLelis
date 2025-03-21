#include <stdio.h>

// Desafio de Xadrez - MateCheck
// O objetivo é utilizar estruturas de repetição e funções para determinar os limites de movimentação dentro do jogo.

// Nível Mestre - Funções Recursivas e Loops Aninhados
// Exemplo: Crie uma função recursiva para o movimento do Bispo.
void moverBispo(int casas) {
    if (casas > 0) {
        printf("Cima Direita\n");
        moverBispo(casas - 1);
    }
}

// Exemplo: Crie uma função recursiva para o movimento da Torre.
void moverTorre(int casas) {
    if (casas > 0) {
        printf("Direita\n");
        moverTorre(casas - 1);
    }
}

// Exemplo: Crie uma função recursiva para o movimento da Rainha.
void moverRainha(int casas) {
    if (casas > 0) {
        printf("Esquerda\n");
        moverRainha(casas - 1);
    }
}

int main() {
    // Nível Novato - Movimentação das Peças
    // Sugestão: Declare variáveis constantes para representar o número de casas que cada peça pode se mover.
    int i, j;  // variáveis de controle de loops
    int numeroDeCasasBispo = 5;
    int numeroDeCasasTorre = 5;
    int numeroDeCasasRainha = 8;
    int numeroDeCasasCavaloParaCima = 2;
    int numeroDeCasasCavaloParaDireita = 1;

    // Implementação de Movimentação do Bispo utilizando a estrutura while
    // Movimento do Bispo cinco casas na diagonal para cima e à direita
    printf("*********************\n");
    printf("Movimentação do Bispo\n");
    printf("*********************\n");
    moverBispo(numeroDeCasasBispo);
    printf("\n");

    // Implementação de Movimentação da Torre utilizando a estrutura do while
    // Movimento da Torre cinco casas para a direita
    printf("*********************\n");
    printf("Movimentação da Torre\n");
    printf("*********************\n");
    moverTorre(numeroDeCasasTorre);
    printf("\n");

    // Implementação de Movimentação da Rainha utilizando a estrutura  for
    // Movimento da Rainha oito casas para a esquerda
    printf("**********************\n");
    printf("Movimentação da Rainha\n");
    printf("**********************\n");
    moverRainha(numeroDeCasasRainha);
    printf("\n");

    printf("**********************\n");
    printf("Movimentação do Cavalo\n");
    printf("**********************\n");
    // Movimento do Cavalo duas casas para cima e uma para a direita
    // Implementando a movimentação do Cavalo utilizando loops com variáveis múltiplas e condições avançadas.
    // Demonstrando o uso de continue e break dentro do loop.
    for (i = 1, j = 1; i <= numeroDeCasasCavaloParaCima && j <= numeroDeCasasCavaloParaDireita; i++)
    {
        printf("Cima\n");
        if (i % 2 != 0) {
            continue;
        }
        printf("Direita\n");
        break;
    }
    printf("\n");

    return 0;
}
