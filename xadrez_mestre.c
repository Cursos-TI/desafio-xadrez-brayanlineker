#include <stdio.h>

//Desafio de Xadrez - MateCheck
//O objetivo é utilizar estruturas de repetição e funções para determinar os limites de movimentação dentro do jogo.
//Declarando funções recursivas.

//Função recursiva para a Torre (Movimento em linha reta para a direita).
void moverTorre (int casas) {
    if (casas > 0) {
        printf("Direita\n");
        moverTorre(casas -1);
    }
}

//Função recursiva para a Rainha (Movimento em linha reta para a esquerda).
void moverRainha (int casas) {
    if (casas > 0) {
        printf("Esquerda\n");
        moverRainha(casas -1);
    }
}

//Função recursiva para O Bispo (Movimento em diagonal "Cima, Direita").
void moverBispo (int casas) {
    if (casas > 0) {
        printf("Cima, Direita\n");
        moverBispo(casas -1);
    }
}

//Movimento do Cavalo com loops aninhados, sem recursividade.
void moverCavalo(int mover) {
    for (int cima = 0; cima < 2; cima++) {
        printf("Cima\n");
    }
    printf("Direita\n");
}

int main() {
    //Definindo diretamente no código a quantidade de movimentos.
    int bispoCasas = 5;
    int torreCasas = 5;
    int rainhaCasas = 8;
    int cavaloMover = 2;

    //Executando movimentos e exibindo as saídas organizadas.
    printf("Movimento do Bispo\n");
    moverBispo(bispoCasas);
    printf("\n");

    printf("Movimento da Torre\n");
    moverTorre(torreCasas);
    printf("\n");

    printf("Movimento Rainha\n");
    moverRainha(rainhaCasas);
    printf("\n");

    printf("MovimentoCavalo\n");
    moverCavalo(cavaloMover);


    return 0;

}