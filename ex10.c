#include <stdlib.h>
#include <stdio.h>

void procedimento(int vetor[]);

int main() {
    int vetor[] = {0, 1, 3, 6, 10, 15, 21, 28, 36, 45, 55, 66, 78, 91, 105};
    procedimento(vetor);
    return 0;
}

void procedimento(int vetor[]) {
    int posicao;
    printf("Insira a posicao na matriz: ");
    scanf("%i", &posicao);
    printf("%i\n", vetor[posicao]);
}