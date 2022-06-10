#include <stdio.h>
#include <stdlib.h>

int fazParte(int num, int vetor[]);

int main() {
    int vetorA[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int vetorB[10] = {10, 20, 30, 40, 6, 60, 70, 80, 9, 100};
    int novo[20]; 
    int pos = 0;

	printf("Vetor sendo construido...\n");
	printf("Obs: Use replit para compilar (testei com outros compiladores e nao funciona perfeitamente)\n");
	
    for (int i = 0; i < 10; i++) {
		//printf("\n%i ", vetorA[i]);
		if (!(fazParte(vetorA[i], novo))) {
			//printf("Adicionado");
			novo[pos] = vetorA[i];
			pos++;
		}
    }
	
    for (int i = 0; i < 10; i++) {
		//printf("\n%i ", vetorB[i]);
		if (!(fazParte(vetorB[i], novo))) {
			//printf("Adicionado");
			novo[pos] = vetorB[i];
			pos++;
		}
    }

		novo[pos] = 9999;

		printf("\nNovo vetor --> \n");

    for (int i = 0; i < 20; i++) {
		if (novo[i] == 9999) {
			break;
		} else {
            printf("%i\n", novo[i]);
		}
    }
    return 0;
}

int fazParte(int num, int vetor[]) {
    for (int i = 0; i < 10; i++) {
        if (vetor[i] == num) {
            return 1;
        }
    }
	return 0;
}