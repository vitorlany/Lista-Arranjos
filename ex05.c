#include <stdlib.h>
#include <stdio.h>

/*
5 - Elaborar um programa que preencha com valores aleatórios 10 elementos do tipo inteiro em um vetor A. Ordene e
imprima o vetor A.
*/

int main() {
    int vetor[10];
    srand(time(NULL));
    
    for (int i = 0; i < 10; i++) {
        vetor[i] = rand();
    }

    for (int i = 0; i < 10; i++) {
        printf("Teste: [%i] %i\n", i, vetor[i]);
        for (int j = 0; j < 10; j++) {
            if (vetor[i] < vetor[j]) {
                int atual = vetor[j];
                int menor = vetor[i];
                vetor[j] = menor;
                vetor[i] = atual;
            }
        }
    }

    for (int k = 0; k < 10; k++) {
        printf("[%i] %i\n", k, vetor[k]);
    }
    return 0;
}