
/*
nome: Yann Soares Guimar�es da Silva
Data:06/05/2023
Curso: Ci�ncias da computa��o
*/

#include <stdio.h>

int main() {
    float x, y;
    
    printf("Digite a coordenada x: ");
    scanf("%f", &x);
    
     printf("\nDigite a coordenada y: ");
    scanf("%f", &y);
    
     if (x == 0 && y == 0) {
        printf("\nOrigem\n");
    } else if (x == 0) {
        printf("Eixo Y\n");
    } else if (y == 0) {
        printf("Eixo X\n");
    } else if (x > 0 && y > 0) {
        printf("Q1\n");
    } else if (x < 0 && y > 0) {
        printf("Q2\n");
    } else if (x < 0 && y < 0) {
        printf("Q3\n");
    } else {
        printf("Q4\n");
    }
    
    return 0;
}

