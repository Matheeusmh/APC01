/*Dado um número inteiro positivo n, calcular a soma 
dos n primeiros números inteiros positivos.*/
#include<stdio.h>

int main() {
    int num, soma = 0;//Declaração de variáveis,

    printf("Digite um numero inteiro positivo: ");
    scanf("%d", &num);//Entrada de dados.

    for (int i = num; i > 0; i--) {//Realização da soma dos n primeiros números.
        soma += i;
    }

    printf(" A soma dos %d primeiros numeros inteiros positivos eh: %d\n\n", num, soma);//Retorno de dados após o seu processamento(soma).

    return 0;
}
