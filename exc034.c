/* Escreva um programa que armazene em um vetor todos os números 
inteiros de 0 a 50. 
– O programa deve imprimir todos os valores armazenados no final. */
#include <stdio.h>

int main(void)
{
    int cont[51];

    // Prompt para armazenar os números inteiros de 0 a 50:
    for (int i = 0; i < 51; i++)
    {
        cont[i] = i;
    }

    // Imprimindo todos elementos do vetor(valores de 0 a 50):
    for (int h = 0; h < 51; h++)
    {
        printf("%d ", cont[h]);
    }
    printf("\n");

    return (0);
}
