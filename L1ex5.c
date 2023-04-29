/*
nome: Yann Soares Guimarães da Silva
Data:06/05/2023
Curso: Ciências da computação
*/

#include <stdio.h>

int main(){
    int num, i;
    printf("Divisores!\n\n");

    printf("Digite um numero positivo: ");
    scanf("%d", &num);

    printf("Os divisores do numero %d sao: ", num);
    for (i = 1; i <= num; i++)
    {
        if (num % i == 0)
        {
            printf("%d, ", i);
        }
    }

    return 0;
}

