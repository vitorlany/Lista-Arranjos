#include <stdlib.h>
#include <stdio.h>

int main() {
    int matriz[10][10];
    srand(time(NULL));

    for (int linha = 0; linha < 10; linha++) {
        for (int coluna = 0; coluna < 10; coluna++) {
            int numero = (rand() % (50 + 1 - 15) + 15);
            matriz[linha][coluna] = numero; 
            printf("%i ", matriz[linha][coluna]);
        }
        printf("\n");
    }

    return 0;
}