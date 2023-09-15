/*Escreva um programa que leia dois números e exiba o 
maior deles.*/
#include<stdio.h>

int main() {
    float number1, number2, biggest;//Declaração de variáveis.

    printf("Type a number: ");
    scanf("%f", &number1);//Entrada do primeiro valor.
    printf("Type other number: ");
    scanf("%f", &number2);//Entrada do segundo valor.

    if (number1 > number2)//Condição para indentificar o maior valor digitado.
        biggest = number1;
    else
        biggest = number2;
    
    printf("\n_The biggest number is: %.1f\n", biggest);//Retorno do maior valor.

    return 0;
}
