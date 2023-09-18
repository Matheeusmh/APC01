/* Dado dois vetores inteiros de 10 posições 
– Elabore um programa que: 
• Leia os 2 vetores, 
• Some os valores da mesma posição e armazene em um 3º vetor
• No final imprima este 3º vetor. */
#include <stdio.h>

int main(void)
{
    int vet1[10], vet2[10], vet3[10];

    // Entrada dos elementos do primeiro vetor:
    for (int i = 0; i < 10; i++)
    {
        printf("Digite o elemento %d do primeiro vetor: ", i + 1);
        scanf("%d", &vet1[i]);
    }
    printf("\n");

    // Entrada dos elementos do segundo vetor:
    for (int h = 0; h < 10; h++)
    {
        printf("Digite o elemento %d do segundo vetor: ", h + 1);
        scanf("%d", &vet2[h]);
    }

    // Prompt para somar uma mesma posição dos dois vetores e atribuir a um terceiro vetor:
    printf("\nVetor 3 = ");
    for (int m = 0; m < 10; m++)
    {
        vet3[m] = vet1[m] + vet2[m];
        printf("%d ", vet3[m]); // Retorno da soma da posição m.    
    } 
    printf("\n");

    return (0);
}
