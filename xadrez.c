#include <stdio.h>

// Desafio de Xadrez - MateCheck
// O objetivo é utilizar estruturas de repetição e funções para determinar os limites de movimentação dentro do jogo.

// Nível Mestre - Funções Recursivas e Loops Aninhados
// Exemplo: Crie uma função recursiva para o movimento do Bispo.
void moverBispo(int casas) {
    if (casas > 0) {
        // Demonstrando o movimento do Bispo com loops aninhados
        for (int i = 0; i < 1; i++) { // movimento vertical
            printf("Cima ");
            for (int j = 0; j < 1; j++) { // movimento horizontal
                printf("Direita");
            }
            printf("\n");
        }
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
    int numeroDeCasasBispo = 5;
    int numeroDeCasasTorre = 5;
    int numeroDeCasasRainha = 8;
    int numeroDeCasasCavaloVertical = 2; // Quantidade de Casas que o Cavalo se moverá na Vertical
    int movimentoDoCavaloNaVertical = 1; // Tipo de Movimento na Vertical: 1 - Cima; 2 - Baixo 
    int numeroDeCasasCavaloHorizontal = 1; // Quantidade de Casas que o Cavalo se moverá na Horizontal
    int movimentoDoCavaloNaHorizontal = 2; // Tipo de Movimento na Horizontal: 1 - Esquerda; 2 - Direita

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
    for (int i = 1, j = 1; i <= numeroDeCasasCavaloVertical && j <= numeroDeCasasCavaloHorizontal; i++)
    {
        if (movimentoDoCavaloNaVertical == 1) {
            printf("Cima\n");
        } else if (movimentoDoCavaloNaVertical == 2) {
            printf("Baixo\n");
        }

        if (i % 2 != 0) {
            continue;
        }

        if (movimentoDoCavaloNaHorizontal == 1) {
            printf("Esquerda\n");
        } else if (movimentoDoCavaloNaHorizontal == 2) {
            printf("Direita\n");
        }
    }
    printf("\n");

    return 0;
}
