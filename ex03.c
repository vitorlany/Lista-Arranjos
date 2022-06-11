#include <stdio.h>
#include <stdlib.h>

/* 
3 - Elaborar um programa que preencha com 20 valores aleatórios do tipo real em um vetor A, em seguida crie um
procedimento que inverta os elementos armazenados. Ou seja, o primeiro elemento de A passará a ser o ultimo, o
segundo elemento passará a ser o penúltimo e assim por diante. Apresentar A.
*/

int main()
{
    float vetorA[20];
    float vetorB[20];
    srand(time(NULL));
    int k = 0;
    for (int i = 0; i < 20; i++) {
        vetorA[i] = rand();
        printf("[%i] %f\n", i, vetorA[i]);
    }

    printf("\n\n\n\n");

    for (int j = 19; j >= 0; j--) {
        vetorB[j] = vetorA[k];
        printf("[%i] %f\n",j, vetorB[j]);
        k++;
    }
    return 0;
}
