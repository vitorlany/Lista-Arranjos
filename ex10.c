#include <stdlib.h>
#include <stdio.h>

int main() {
    int posicao;
    int vetor[] = {0, 1, 3, 6, 10, 15, 21, 28, 36, 45, 55, 66, 78, 91, 105};
    printf("Insira a posicao na matriz: ");
    scanf("%i", &posicao);
    printf("%i\n", vetor[posicao]);
    return 0;
}