#include <stdio.h>

int main() {
    // Aqui vou mover o bispo cinco casas na diagonal da direita
    int i = 1;
    int j = 1;

    while (i <= 5) {
        printf("Cima Direita\n");
        i++;
    }

    // Aqui vou mover a rainha oito casas a esquerda
    do {
        printf("Esquerda\n");
        j++;
    } while (j <= 8);
    
    // Aqui vou mover a torre 5 casas para direita
    for (int t = 1; t <= 5; t++) {
        printf("Direita\n");
    }
}