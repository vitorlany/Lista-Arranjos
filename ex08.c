#include <stdlib.h>
#include <stdio.h>

/* 
Escreva um procedimento que receba a matriz criada no exercício acima (passagem de parâmetro), imprimir o maior e o menor
elemento da matriz bem como a posição de cada um.
*/

void procedimento(int matriz[10][10]);

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
    
    procedimento(matriz);
    return 0;
}

void procedimento(int matriz[10][10]) {
    int menor = 50;
    int menorLinha, menorColuna;
    int maior = 15;
    int maiorLinha, maiorColuna;

    for (int linha = 0; linha < 10; linha++) {
        for (int coluna = 0; coluna < 10; coluna++) {
            if (matriz[linha][coluna] < menor) {
                menor = matriz[linha][coluna];
                menorLinha = linha;
                menorColuna = coluna;
            }
            if (matriz[linha][coluna] > maior) {
                maior = matriz[linha][coluna];
                maiorLinha = linha;
                maiorColuna = coluna;
            }
        }
    }
    
    printf("Menor: %i [%i][%i]\n", menor, menorLinha, menorColuna);
    printf("Maior: %i [%i][%i]\n", maior, maiorLinha, maiorColuna);
}