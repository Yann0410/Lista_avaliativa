/*
nome: Yann Soares Guimar�es da Silva
Data:06/05/2023
Curso: Ci�ncias da computa��o
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

