/*
nome: Yann Soares Guimarães da Silva
Data:06/05/2023
Curso: Ciências da computação
*/

#include <stdio.h>
int main() {
    int f = 0, n, i, t1 = 0, t2 = 1;
    
    printf("Sequencia de Fibonacci\n\n");

    printf("Digite o valor de n: ");
    scanf("%d", &n);

    for (i = 1; i <= n; ++i) {
        if(i == 1) {
            f = t1;
        } else if(i == 2) {
            f = t2;
        } else {
            f = t1 + t2;
            t1 = t2;
            t2 = f;
        }
    }

    printf("O %do termo da sequencia de Fibonacci eh: %d", n, f);
    return 0;
}
