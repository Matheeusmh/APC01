/* Ler uma matriz 3X4 e gerar outra em que cada elemento é o 
dobro do elemento respectivo na matriz original. */
#include <stdio.h>

int main(void)
{
    // Declaração de matrizes:
    int matriz[3][4], dobro_matriz[3][4];

    // Armazenar os valores de cada elemento da matriz:
    for (int i = 0; i < 3; i++) // Linhas;
    {
        for (int j = 0; j < 4; j++) // Colunas.
        {
            printf("Digite o valor do elemento [%d][%d]: ", i, j);
            scanf("%d", &matriz[i][j]);
        }
    }

    // Criar e imprimir uma nova matriz com valores dobrados:
    printf("\nMatriz com valores dobrados: \n");
    for (int i = 0; i < 3; i++) // Linhas;
    {
        for (int j = 0; j < 4; j++) // Colunas.
        {
            dobro_matriz[i][j] = matriz[i][j] * 2; 
            printf("%d\t", dobro_matriz[i][j]);
        }
        printf("\n");
    }

    return (0);
}
