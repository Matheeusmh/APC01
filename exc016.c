/*Escreva um programa que leia um número inteiro e 
determine se ele é par ou ímpar.*/
#include<stdio.h>

int main() {
    int number;//Declaração de variáveis.

    printf("Type a integer: ");
    scanf("%d", &number);//Entrada do número.

    if (number % 2 == 0) //Condição para ser um número par.
        printf("\n%d is even!\n", number);//Retorno da informação.
    else //Caso seja um número ímpar.
        printf("\n%d is odd!\n", number);//Retorno da informação.
    
    return 0;
}
