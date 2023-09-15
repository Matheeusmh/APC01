/*Faça um programa que receba 2 valores inteiros para as 
variáveis A e B e efetue a troca dos valores nas variáveis. 
Apresentar os valores antes e após a troca.*/
#include<stdio.h>

int main() {
    int A, B, aux;//Declaração de variáveis.

    printf("Digite o valor de A: ");
    scanf("%d", &A);//Entrada do valor de A.
    printf("Digite o valor de B: ");
    scanf("%d", &B);//Entrada do valor de B.

    aux = A; A = B, B = aux;//Troca de valores entre A e B.

    printf("\nO valor de A era %d. Agora eh: %d\n", B, A);//Retorno do valor antigo e atual de A.
    printf("O valor de B era %d. Agora eh: %d\n", A, B);//Retorno do valor antigo e atual de B.

    return 0;
}
