/* Escreva um programa que armazene em um vetor todos os números 
pares do intervalo fechado de 1 a 100 
– O programa deve imprimir todos os valores armazenados. */
#include <stdio.h>

int main(void)
{
    // Variáveis:
    int vet[50];
    int a = 0 ;

    // Verificar e armazenar os números pares do intervalo de 1 a 100:
    for (int i = 1; i <= 100; i++)
    {
        if (i % 2 == 0) // Condição para ser um número par.
        {
            vet[a] = i; 
            a++;   
        }        
    }

    // Imprimir os elementos do vetor:
    for (int h = 0; h < a; h++)
    {
        printf("%d ", vet[h]);
    }

    return (0);
}
