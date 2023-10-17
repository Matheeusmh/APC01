/* Ler uma matriz 4X3 inteiro e imprimir a soma dos elementos de 
uma linha L fornecida pelo usuário. */
#include <stdio.h>

int main(void)
{
    // Variáveis:
    int matriz[4][3], l = 0, soma = 0;

    // Armazenar os valores dos elementos da matriz:
    for (int i = 0; i < 4; i++) // Linhas;
    {
        for (int j = 0; j < 3; j++) // Colunas.
        {
            printf("Digite um valor para o elemento [%d][%d]: ", i, j);
            scanf("%d", &matriz[i][j]);
        }
    }

    // Imprimir cada elemento da matriz:
    printf("\nMatriz:\n");
    for (int i = 0; i < 4; i++) // Linhas;
    {
        for (int j = 0; j < 3; j++) // Colunas.
        {
            printf("%d\t", matriz[i][j]);
        }
        printf("\n");
    }

    // Solicitar uma linha para a soma dos seus elementos:
    printf("\n Digite a linha que deseja somar(de 0 a 3): ");
    scanf("%d", &l);

    // Somar os elementos da linha escolhida:
    for (int j = 0; j < 3; j++)
    {
        soma += matriz[l][j];
    }
    
    // Imprimir a soma dos elementos da linha escolhida:
    printf(" A soma dos elementos da linha %d eh: %d\n", l, soma);

    return (0);
}
