/*Escreva um programa que leia três números e 
imprima o maior deles. */
#include<stdio.h>

int main() {
    float num1, num2, num3;//Declaração de variáveis.

    printf("Type a number: ");
    scanf("%f", &num1);//Entrada do primeiro valor.
    printf("Type other number: ");
    scanf("%f", &num2);//Entrada do segundo valor.
    printf("Type the last one: ");
    scanf("%f", &num3);//Entrada do terceiro valor.

    if (num2 < num1 && num1 > num3)//Condição para o primeiro valor ser o maior.
        printf("\nThe biggest number is: %.1f\n", num1);//Retorno da informação.
    else if (num1 < num2 && num2 > num3)//Condição para o segundo valor ser o maior.
        printf("\nThe biggest number is: %.1f\n", num2);//Retorno da informação.
    else//Última possibilidade(em que o terceiro valor é o maior).
        printf("\nThe biggest number is: %.1f\n", num3);//Retorno da informação.

    return 0;   
}
