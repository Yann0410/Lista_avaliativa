/*
nome: Yann Soares Guimar�es da Silva
Data:06/05/2023
Curso: Ci�ncias da computa��o
*/

#include <stdio.h>
#include <stdlib.h>

int main() {
    int A, B, C, D, diferenca;
    
    printf("Mostrador de diferen�as\n\n");

    printf("Digite o valor de A: ");
    scanf("%d", &A);

    printf("Digite o valor de B: ");
    scanf("%d", &B);

    printf("Digite o valor de C: ");
    scanf("%d", &C);

    printf("Digite o valor de D: ");
    scanf("%d", &D);

    diferenca = (A * B) - (C * D);

    printf("DIFERENCA = (%d * %d - %d * %d)\n", A, B, C, D);
    printf("DIFERENCA = (%d)\n", diferenca);

    return 0;

}

