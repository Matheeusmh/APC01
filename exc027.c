/*Faça um programa para calcular uma área de um 
retângulo. Basta multiplicar o valor da base pela altura.*/
#include<stdio.h>

int main() {
    float base, height, area;//Declaração de variáveis.

    printf("__Rectangle area calculation__");
    printf("\nType the height of the rectangle: ");
    scanf("%f", &height);//Entrada da altura do retângulo.
    printf("Type the base of the rectangle: ");
    scanf("%f", &base);//Entrada da base do retângulo.
    printf("\nThe area of the rectangle is: %.2f\n", area = base * height);//Cálculo da área do retângulo e o retorno desta informação.

    return (0);
}
