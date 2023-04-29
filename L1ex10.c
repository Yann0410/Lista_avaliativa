/*
nome: Yann Soares Guimarães da Silva
Data:06/05/2023
Curso: Ciências da computação
*/

#include <stdio.h>

int main() {
    int numeros[10];
    int soma = 0;
    int i;
printf("Impressor de media\n\n");
    for (i = 0; i < 10; i++) {
        printf("Digite o numero %d: ", i + 1);
        scanf("%d", &numeros[i]);
        soma += numeros[i];
    }

    printf("A media dos numeros e: %.2f\n", (float)soma / 10);

    return 0;
}

