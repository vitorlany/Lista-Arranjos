#include <stdlib.h>
#include <stdio.h>

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
