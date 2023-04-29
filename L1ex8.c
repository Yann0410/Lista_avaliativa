/*
nome: Yann Soares Guimarães da Silva
Data:06/05/2023
Curso: Ciências da computação
*/

#include <stdio.h>


int main() {
    int num, maior, menor, primeiro = 1;

    printf("Digite numeros inteiros, quando quiser finalizar, digite um numero negativo\n ");

    do {
        if (primeiro) {
            printf("Digite um numero positivo: ");
            primeiro = 0;
        } else {
            printf("Numero invalido! Digite um numero positivo: ");
        }

        scanf("%d", &num);
    } while (num < 0);

    maior = menor = num;

    while (num >= 0) {
        if (num > maior) {
            maior = num;
        }

        if (num < menor) {
            menor = num;
        }

        printf("Digite um numero positivo (ou negativo para sair): ");
        scanf("%d", &num);
    }
    printf("-----------------------------------------------------------------\n");

    printf("\nO maior numero informado foi: %d\n", maior);
    printf("O menor numero informado foi: %d\n", menor);

    return 0;
}
