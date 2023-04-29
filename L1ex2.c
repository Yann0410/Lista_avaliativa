/*
nome: Yann Soares Guimarães da Silva
Data:06/05/2023
Curso: Ciências da computação
*/

#include <stdio.h>
#include <math.h>

int main() {
    float x1, y1, x2, y2, distancia;
    
    printf("Analizador de coordenadas\n\n");
    
    printf("Digite a coordenada do primeiro ponto (x1): ");
    scanf("%f", &x1);
    
    printf("\nDigite a coordenada do primeiro ponto (y1): ");
    scanf("%f", &y1);
    
    printf("\nDigite a coordenada do segundo ponto (x2): ");
    scanf("%f", &x2);
    
    printf("\nDigite a coordenada do segundo ponto (y2): ");
    scanf("%f", &y2);
    
    printf("\n\nAs coordenadas informadas foram x (%.4f, %.4f) e do y (%.4f, %.4f)",x1,y1,x2,y2);

    distancia = sqrt(pow((x2-x1), 2) + pow((y2-y1), 2));

    printf("\n\nDistancia entre os pontos: %.4f\n", distancia);
    
    return 0;
}


