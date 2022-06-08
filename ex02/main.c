#include <stdio.h>
#include <stdlib.h>

int main()
{
    int vetor0[] = {1, 2, 3, 4, 5, 6, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15};
    int vetor1[] = {10, 20, 30, 40, 50, 60, 60, 70, 80, 90, 100, 110, 120, 130, 140, 150};
    int vetor2[15];

    for (int i = 0; i <= 15; i++) {
        vetor2[i] = vetor0[i] + vetor1[i];
    }

    printf("Vetor: {%i", vetor0[0]);
    for (int a = 1; a <= 15; a++) {
        printf(", %i", vetor2[a]);
    }
    printf("}\n");

    return 0;
}
