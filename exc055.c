/*  Ler uma matriz 4X3 inteiro. Depois, mostre qual é o elemento 
armazenado em uma linha e coluna C fornecidos pelo usuário. */
#include <stdio.h>

int main(void)
{
    // Variáveis:
    int matriz[4][3], coluna = 0, linha = 0;

    // Armazenar os valores de cada elemento da matriz:
    for (int i = 0; i < 4; i++) // Linhas;
    {
        for (int j = 0; j < 3; j++) // Colunas.
        {
            printf("Digite um valor para o elemento [%d][%d]: ", i, j);
            scanf("%d", &matriz[i][j]);
        }
    }

    // Solicitar uma linha e uma coluna:
    printf("\nDigite uma linha: ");
    scanf("%d", &linha);
    printf("Digite uma coluna: ");
    scanf("%d", &coluna);

    // Imprimir o valor do elemento que corresponde a linha e coluna digitada:
    printf("\nO valor do elemento da pocicao [%d][%d] eh: %d\n", linha, coluna, matriz[linha][coluna]);

    return (0);
}
