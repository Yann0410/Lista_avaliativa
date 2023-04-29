/*
nome: Yann Soares Guimarães da Silva
Data:06/05/2023
Curso: Ciências da computação
*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int opcao, qtd, abacaxi=0, maca=0, pera=0;
    float total=0;
    while(1) {
        system("cls"); 
        printf("==== LOJA DE FRUTAS ====\n");
        printf("==== Carrinho de Compras ====\n");
        printf("1 => ABACAXI - 5,00 a unidade\n");
        printf("2 => MACA - 1,00 a unidade\n");
        printf("3 => PERA - 4,00 a unidade\n");
        printf("4 => Finalizar compra\n");
        printf("=============================\n");
        printf("Frutas no carrinho:\n");
        if (abacaxi > 0) {
            printf("%d x ABACAXI\n", abacaxi);
        }
        if (maca > 0) {
            printf("%d x MACA\n", maca);
        }
        if (pera > 0) {
            printf("%d x PERA\n", pera);
        }
        printf("=============================\n");
        printf("Total: R$%.2f\n", total);
        printf("Digite uma opçao: ");
        scanf("%d", &opcao);
        if (opcao == 1) {
            printf("Digite a quantidade de abacaxis: ");
            scanf("%d", &qtd);
            abacaxi += qtd;
            total += qtd * 5.0;
        } else if (opcao == 2) {
            printf("Digite a quantidade de macas: ");
            scanf("%d", &qtd);
            maca += qtd;
            total += qtd * 1.0;
        } else if (opcao == 3) {
            printf("Digite a quantidade de peras: ");
            scanf("%d", &qtd);
            pera += qtd;
            total += qtd * 4.0;
        } else if (opcao == 4) {
            break;
        } else {
            printf("Opção invalida! Tente novamente.\n");
            system("pause"); 
        }
    }
    printf("===== Resumo da Compra =====\n");
    printf("ABACAXI: %d x 5,00 = %.2f\n", abacaxi, abacaxi*5.0);
    printf("MACA: %d x 1,00 = %.2f\n", maca, maca*1.0);
    printf("PERA: %d x 4,00 = %.2f\n", pera, pera*4.0);
    printf("=============================\n");
    printf("Total da compra: R$%.2f\n", total);
    return 0;
}

