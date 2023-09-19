/* Escreva um programa que armazene em um vetor todos os 
números inteiros do intervalo de 1 a 100 (1 e 100 não 
entram) 
– o programa deve imprimir todos os valores armazenados. */
#include <stdio.h>

int main(void)
{
    //Variáveis:
    int cont[98];

    // Armazenar os valores no intervalo de 1 a 100(sem 1 e 100):
    for (int i = 2; i < 100; i++)
    {
        cont[i - 2] = i;
    }

    // Imprimir os valores armazenados:
    for (int h = 0; h < 98; h++)
    {
        printf("%d ", cont[h]);
    }
    printf("\n");

    return (0);
}
