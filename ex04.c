#include <stdio.h>
#include <stdlib.h>
/*
4 - Elaborar um programa que preencha com 100 elementos do tipo inteiro em um vetor A valores aleatórios entre 1 e
10. Crie um vetor frequencia 10 posições e armazene a qte de vezes que os elementos de A apareceram no vetor
frequência
*/

int main()
{
    int vetor[100];
    int frequencia[] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};
    srand(time(NULL));

    for (int i = 0; i < 100; i++) {
        vetor[i] = rand() % 10;
    }

    for (int j = 0; j < 10; j++) {
        int valor = frequencia[j];
        int vezes = 0;
        for (int k = 0; k < 100; k++) {
            if (vetor[k] == valor) {
                vezes++;
            }
        }
        frequencia[j] = vezes;
    }

    for (int l = 0; l < 10; l++) {
        printf("[%i] %i\n", l, frequencia[l]);
    }

    return 0;
}
