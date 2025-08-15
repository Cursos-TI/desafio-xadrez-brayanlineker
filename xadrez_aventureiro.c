#include <stdio.h>

int main() {

    int Bispo = 5;
    int Torre = 5;
    int Rainha = 8;
    int Cavalo = 1;

    printf("Movimento do Bispo\n");
    int i = 1;
    while (i <= Bispo) {
        printf("Cima, Direita\n");
        i++;
    }
        printf("\n");

    printf("Movimento da Torre\n");
        for (int j = 1; j <= Torre; j++) {
            printf("Direita\n");
        }
    printf("\n");

    printf("Movimento da Rainha\n");
    int k = 1;
    do {
        printf("Esquerda\n");
        k++;
    } while (k <= Rainha);

    printf("\n");

    printf("Movimento do Cavalo\n");
    while (Cavalo--){
        for (int x = 0; x < 2; x++){
            printf("Cima\n");
        }
    } printf("Direita\n");

}