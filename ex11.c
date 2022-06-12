#include <stdlib.h>
#include <stdio.h>

/* 
Escreva um procedimento que receba a matriz do exercício 7 A partir do exercício número 1, peça um número qualquer e verifique se o
número está ou não na matriz. Se estiver imprima a posição deste número e se não estiver imprima a mensagem valor não encontrado.
*/

void procedimento(int matriz[10][10], int numero);

int main() {
    int matriz[10][10] = {
        {31, 19, 23, 32, 42, 20, 17, 34, 45, 39},
        {33, 19, 25, 15, 22, 37, 17, 39, 38, 30},
        {38, 28, 32, 25, 37, 38, 16, 29, 26, 49},
        {36, 42, 17, 45, 24, 25, 30, 42, 44, 24},
        {46, 42, 44, 20, 42, 31, 22, 24, 19, 46},
        {20, 22, 39, 37, 49, 25, 24, 50, 19, 15},
        {49, 21, 43, 31, 15, 32, 21, 46, 23, 30},
        {35, 18, 21, 44, 23, 28, 24, 31, 18, 44},
        {42, 39, 16, 30, 41, 50, 20, 50, 29, 40},
        {15, 27, 46, 23, 24, 26, 40, 46, 21, 48},
    };
    int numero;
    printf("Insira o numero: ");
    scanf("%i", &numero);
    procedimento(matriz, numero);
    return 0;
}

void procedimento(int matriz[10][10], int numero) {
    int encontrado = 0;
    int pos1, pos2;
    for (int linha = 0; linha < 10; linha++) {
        for (int coluna = 0; coluna < 10; coluna++) {
            if (matriz[linha][coluna] == numero) {
                encontrado = numero;
                pos1 = linha;
                pos2 = coluna;
            }
        }
    }
    if (encontrado) {
        printf("Numero %i encontrado! [%i][%i]\n", numero, pos1, pos2);
    } else { 
        printf("Nao encontrado\n");
    }
}