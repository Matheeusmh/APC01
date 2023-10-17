/* Faça um programa para ler uma matriz 3X3 inteiro e 
imprimir a soma dos elementos da Diagonal principal. */
#include <stdio.h>

int main(void)
{
    // Variáveis:
    int matriz[3][3], soma = 0;

    // Armazenar os valores dos elementos da matriz:
    for (int i = 0; i < 3; i++) // Linhas;
    {
        for (int j = 0; j < 3; j++) // Colunas.
        {         printf("Digite um valor para o elemento [%d][%d]: ", i, j);
            scanf("%d", &matriz[i][j]);

            // Somar os elementos da diagonal principal:
            if (i == j)
            {
                soma += matriz[i][j];
            }
        }
    }

    // Imprimir a soma dos elementos da diagonal principal:
    printf("\nA soma dos elementos da diagonal principal eh: %d\n", soma);

    return (0);
}
