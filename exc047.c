/* Escreva um programa que receba 10 números do usuário 
e armazene em um vetor a metade de cada número 
– o programa deve imprimir todos os valores armazenados */
#include <stdio.h>

int main(void)
{
    // Variáveis:
    float vet[10];

    // Entrada e armazenamento dos números:
    for (int i = 0; i < 10; i++)
    {
        printf("Digite um numero: ");
        scanf("%f", &vet[i]); // Entrada do valor;
        vet[i] = vet[i] / 2; // Armazenar a metade do valor de entrada.
    }

    // Imprimir a metade dos valores de entrada:
    printf("\nOs valores armazenados no vetor foram: ");
    for (int i = 0; i < 10; i++)
    {
        printf("%.2f ", vet[i]);
    }
    printf("\n");

    return (0);
}
