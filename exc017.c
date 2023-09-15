/*Faça um algoritmo que mostre todos os números 
inteiros pares de 2 a 100.*/
#include<stdio.h>

int main() {
    for (int i = 2; i <= 100; i++) {//Laço de repetição para aplicar condição aos valores determinados.
        if (i % 2 == 0)//Condição para ser um número par.
            printf(" %d ", i);//Retorno do valor par.
    }

    return 0;
}
