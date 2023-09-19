/* Escreva um programa que armazene em um vetor todos os números 
múltiplos de 5, no intervalo fechado de 1 a 50 
– O programa deve imprimir todos os valores armazenados. */
#include <stdio.h>

int main(void)
{
    // Variáveis:
    int vet[10], a = 0;

    // Verificar e armazenar os múltiplos de 5 no intervalo de 1 a 50:
    for (int i = 1; i <= 50; i++)
    {
        if (i % 5 == 0) // Condição para ser um múltiplo de 5.
        {
            vet[a++] = i;
        }
    }

    // Imprimir os valores armazenados:
    for (int h = 0; h < 10; h++)
    {
        printf("%d ", vet[h]);
    }
    printf("\n");

    return (0);
}
