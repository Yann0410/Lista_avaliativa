/*
nome: Yann Soares Guimarães da Silva
Data:06/05/2023
Curso: Ciências da computação
*/

#include <stdio.h>

int main() {
    int soma = 0;
    int i;
    printf("Faça um programa que exiba a soma de todos os números naturais abaixo de 1.000 que são múltiplos de 3 ou 5.\n\n");

    for (i = 1; i < 1000; i++) {
        if (i % 3 == 0 || i % 5 == 0) {
            soma += i;
        }
    }

    printf("A soma de todos os numeros naturais abaixo de 1000 que sao multiplos de 3 ou 5 e: %d\n", soma);

    return 0;
}
