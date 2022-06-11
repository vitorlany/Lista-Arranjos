#include <stdio.h>
#include <stdlib.h>

/* 
1 - Elaborar um programa que leia um vetor A com 15 elementos inteiros. Construir um vetor B do mesmo tipo, em
que cada elemento de B deva ser o resultado do somatório (de 1 ate o valor correspondente de cada elemento da
matriz A). Apresentar A e B
*/

int main()
{
    int vetor0[15] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14};
    int vetor1[15];
    for (int i = 0; i < 15; i++){
        int soma = 0;
        for (int j = 1; j <= i; j++) {
            soma += vetor0[j];
        }
        vetor1[i] = soma;
    }
    printf("Vetor A: {%i", vetor0[0]);
    for (int a = 1; a < 15; a++) {
        printf(", %i", vetor0[a]);
    }
    printf("}\n");

    printf("Vetor B: {%i", vetor1[0]);
    for (int b = 1; b < 15; b++) {
        printf(", %i", vetor1[b]);
    }
    printf("}\n");
    return 0;
}
