/*Escreva um programa que leia 10 números inteiros e imprima 
o maior deles e quantas vezes o maior número foi lido.*/
#include<stdio.h>
#include<string.h>

int comparacao(int *numeros);

int main() {
    int numeros[10], maior, cont = 0, i;

    // Solicitando os elementos do vetor:
    for (i = 0; i < 10; i++)
    {
        printf("Digite um numero: ");
        scanf("%d", &numeros[i]);
    } 
    i = 0;

    // Chamando função para descobrir o maior elemento: 
    maior = comparacao(numeros);
    do // Verificando quantas vezes o maior elemento se repete.
    {
        if (numeros[i] == maior)
            cont++;
        i++;
    }
    while (i < 10);

    // Retorno do maior valor do vetor e quantas vezes ele se repete:
    printf("\nO maior valor digitado foi %d e ele se repetiu %d vezes.\n", maior, cont);

    return (0);
}
// Função para achar o maior elemento do vetor:
int comparacao(int numeros[])
{
    int aux = 0;
    for (int h = 0; h < 10; h++) // Comparando os valores.
    {
        if (numeros[h] > aux)
            aux = numeros[h];
    }
    return aux;
}
