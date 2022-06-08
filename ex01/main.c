#include <stdio.h>
#include <stdlib.h>

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
        printf("[%i] %i\n", i, vetor1[i]);
    }
    return 0;
}
