/*Escreva um programa que leia 10 números inteiros e imprima 
o maior deles.*/
#include <stdio.h>

int main() {
    int num, i, aux = 0;//Declaração de variáveis.
    
    printf("Type 10 numbers:\n");

    for (i = 0; i <= 10; i++) {//Entrada de todos os 10 valores.
        scanf("%d", &num);
        if (aux < num)//Comparação entre os números digitados.
            aux = num;
    }

    printf("\nThe biggest number is: %d\n", aux);//Retorno do maior valor digitado.

    return 0;
}
