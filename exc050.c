/* Faça um programa para ler uma matriz de 3×4 de números 
inteiro e depois exibir toda a matriz e, por fim, o elemento do 
canto superior esquerdo e do canto inferior direito. */
#include <stdio.h>

int main(void)
{
    // Declaração da Matriz:
    int matriz[3][4];

    // Armazenar o valor digitado em uma posição da matriz:
    for (int i = 0; i < 3; i++) // Linhas:
    {
        for (int j = 0; j < 4; j++) // Colunas:
        {
            printf("Digite um numero para a posicao [%d][%d]: ", i, j);
            scanf("%d", &matriz[i][j]);
        }
    }

    // Imprimir todos os elementos da matriz:
    printf("\n __MATRIZ__\n");
    for (int i = 0; i < 3; i++) // LInhas;
    {
        for (int j = 0; j < 4; j++) // Colunas.
        {
            printf("%d\t", matriz[i][j]);
        }
        printf("\n");
    }

    // Imprimir os elementos do canto superior esquerdo e inferior direito:
    printf("\nO elemento do canto superior esquerdo eh: %d", matriz[0][0]);
    printf("\nO elemento do canto inferior direito eh: %d\n", matriz[2][3]);

    return (0);
}
