/* Implemente um programa que leia um vetor A de 30 números 
inteiros e imprima o maior valor do vetor. */
#include <stdio.h>

int main(void)
{
    int A[30], maior = 0;

    // Entrada de valores de cada elemento do vetor e comparação:
    for (int i = 0; i <= 29; i++)
    {
        printf("Digite um numero: ");
        scanf("%d", &A[i]); // Entrada do valor;
        if (A[i] > maior) // Verificando se o valor foi o maior introduzido até então.
            maior = A[i];
    }

    // Imprimindo o maior valor digitado:
    printf("\nO maior valor digitado foi: %d", maior);

    return (0);
}
