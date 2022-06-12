#include <stdlib.h>
#include <stdio.h>

/* 
    - Construa uma função que retorne um vetor real (utilize alocação dinâmica de memória), com
    valores aleatórios entre 30 e 50 (intervalo fechado), de tamanho N – passe o tamanho N por
    valor.
    - Construa um procedimento para imprimir um vetor real de tamanho N – passe o vetor e o
    tamanho N por valor (utilize a passagem de ponteiro representando o vetor a ser impresso)
    Escrever um programa que leia um valor e chame a função e o procedimentos criados.
*/

int contruirVetor(float * vetor, int tamanho);
void imprimirVetor(float * vetor, int tamanho);

int main() {
    srand(time(NULL));
    int tamanho = 15;
    float vetor[15];
    contruirVetor(&vetor, tamanho);
    imprimirVetor(&vetor, tamanho);
    return 0;
}

int contruirVetor(float * retorno, int tamanho) {
    for (int i = 0; i < tamanho; i++) {
        retorno[i] = (rand() % (50 - 30 + 1)) + 30.00;
    }
    return 0;
}

void imprimirVetor(float * vetor, int tamanho) {
    for (int i = 0; i < tamanho; i++) {
        printf("%f\n", vetor[i]);
    }
}
