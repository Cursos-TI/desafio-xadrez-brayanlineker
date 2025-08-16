#include <stdio.h>

// Desafio de Xadrez - MateCheck
// O objetivo é utilizar estruturas de repetição e funções para determinar os limites de movimentação dentro do jogo.

int main() {

    //Declarando as variáveis.
    //Nível aventureiro - Movimento de peças.
    int Bispo = 5;
    int Torre = 5;
    int Rainha = 8;
    int Cavalo = 1;

    //Movimento do Bispo utilizando a estrutura de repetição While.
    printf("Movimento do Bispo\n");
    int i = 1;
    while (i <= Bispo) {
        printf("Cima, Direita\n");
        i++;
    }
        printf("\n");

    //Movimento da Torre utilizando a estrutura de repetição For.
    printf("Movimento da Torre\n");
        for (int j = 1; j <= Torre; j++) {
            printf("Direita\n");
        }
    printf("\n");

    //Movimento da Rainha utilizando a estrutura de repetição Do While.
    printf("Movimento da Rainha\n");
    int k = 1;
    do {
        printf("Esquerda\n");
        k++;
    } while (k <= Rainha);

    printf("\n");

    //Movimento do Cavalo utilizando a estrutura de repetição Loops Aninhados.
    printf("Movimento do Cavalo\n");
    while (Cavalo--){
        for (int x = 0; x < 2; x++){
            printf("Cima\n");
        }
    } printf("Direita\n");

}