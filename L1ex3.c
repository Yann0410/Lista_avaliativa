/*
nome: Yann Soares Guimar�es da Silva
Data:06/05/2023
Curso: Ci�ncias da computa��o
*/

#include <stdio.h>

#define PI 3.14159

int main() {
  
     double raio, area, volume;
     
      printf("Calculadora de esfera\n\n");

    printf("Digite o raio da esfera: ");
    scanf("%lf", &raio);

    volume = (4.0 / 3) * PI * raio * raio * raio;
    area = 4 * PI * raio * raio;

    printf("Area da superficie: %.4lf\n", area);
    printf("\nVolume: %.4lf\n", volume);
    
    return 0;
}



