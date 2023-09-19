/* Escreva um programa que armazene em um vetor todos 
os números inteiros de 100 a 1 
– em ordem decrescente 
– o programa deve imprimir todos os valores armazenados. */
#include <stdio.h>

int main(void)
{
    // Variáveis:
    int cont[100], aux = 100;

    // Armazenar todos os valores inteiros de 1 a 100 em ordem decrescente:
    for (int i = 0; i < 100; i++)
    {
        cont[i] = aux--;
    }

    // Imprimir os elementos do vetor:
    for (int h = 0; h < 100; h++)
    {
        printf("%d ", cont[h]);
    }
    printf("\n");

    return (0);
}
