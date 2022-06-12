#include <stdlib.h>
#include <stdio.h>

void contruindoVetor(float * vetor[], int tamanho);

// Incompleta, nao consegui descobrir o erro na compilacao

int main() {
    int tamanho = 15;
    float vetor[15];

	contruindoVetor(&vetor, tamanho);
	
    for (int i = 0; i < 15; i++)
    {
        printf("Numero: %f\n", vetor[i]);
    }
    
    return 0;
}

void contruindoVetor(float * vetor[], int tamanho) {
	for (int i = 0; i < tamanho; i++) {
        float number = (rand() % (50 - 30 + 1)) + 30.00;
        //*vetor[i] = number;
		printf("%.0f %.0f\n", *vetor[i], number);
    }
}