#include <stdlib.h>
#include <stdio.h>

/* 
Preencher uma matriz de 10 x 10 posições com valores aleatórios de 15 a 50 (utilize para cada número a função rand – faça uma
função que dados os valores inicial e final devolva um número aleatório dentro deste intervalo) Em seguida imprima os índices (i,j) da
matriz e o valor correspondente, na forma de matriz.
*/

int main() {
    int matriz[10][10];
    srand(time(NULL));

    for (int linha = 0; linha < 10; linha++) {
        for (int coluna = 0; coluna < 10; coluna++) {
            int numero = (rand() % (50 + 1 - 15) + 15);
            matriz[linha][coluna] = numero; 
            printf("%i ", matriz[linha][coluna]);
        }
        printf("\n");
    }

    return 0;
}