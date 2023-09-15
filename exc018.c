 /*Faça um algoritmo que gere a seguinte série: 10, 20, 30, 
40, ..., 990, 1000.*/
#include<stdio.h>

int main() {
    int i = 10;//Declaração da variável.

    while (i <= 1000) {//Laço de repetição para realizar contagem de 10 em 10.
        printf("%d ", i);//Retorno da informação.
        i+= 10;
    }

    return 0;
}
