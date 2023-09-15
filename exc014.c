/* Escreva um programa que leia dois números e exiba-os 
em ordem crescente.*/
#include<stdio.h>

int main() {
    float number1, number2, aux;//Declaração de variáveis.

    printf("Type a number: ");
    scanf("%f", &number1);//Entrada do primeiro valor.
    printf("Type other number: ");
    scanf("%f", &number2);//Entrada do segundo valor.

    if (number2 < number1) {//Condição para ordenar os valores de acordo com a sua entrada.
        aux = number1;
        number1 = number2;
        number2 = aux;
    }

    printf("\n_The correct order of numbers is: %.1f and %.1f!\n", number1, number2);//Retorno de informações(valores em ordem crescente).

    return 0;
}
