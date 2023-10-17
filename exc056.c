/* Crie uma matriz 7X8 onde cada elemento é a soma dos índices de 
sua posição dentro da matriz. */
#include <stdio.h>

int main(void)
{
    // Variáveis:
    int matriz[7][8];

    // Armazenar os valores de cada elemento da matriz:
    for (int i = 0; i < 7; i++) // Linhas;
    {
        for (int j = 0; j < 8; j++) // Colunas;
        {
            matriz[i][j] = i + j; // Somar e armazenar os índices.
        }
    }

    // Imprimir os elementos da matriz:
    for (int i = 0; i < 7; i++)
    {
        for (int j = 0; j < 8; j++)
        {
            printf("%d\t", matriz[i][j]);
        }
        printf("\n");
    }

    return (0);
}
