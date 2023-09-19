/* Elabore um programa que dado três vetores reais de 5 posições 
– leia estes vetores (usando uma estrutura de repetição),
– calcule a expressão ((vetor1[i] * vetor3[i]) / vetor2[i] ) e armazene o 
resultado em um quarto vetor, 
• também de números reais de 5 posições. 
– Imprima os números do quarto vetor */
#include <stdio.h>

int main(void)
{
    // Variáveis:
    float vet1[5], vet2[5], vet3[5], vet4[5];
     
    // Entrada de dados para o vetor 1:
    for (int i = 0; i < 5; i++)
    {
        printf("Digite um valor para o elemento %d do primeiro vetor: ", i);
        scanf("%f", &vet1[i]);
    }
    printf("\n");

    // Entrada de dados para o vetor 2:
    for (int h = 0; h < 5; h++)
    {
        printf("Digite um valor para o elemento %d do segundo vetor: ", h);
        scanf("%f", &vet2[h]);
    }
    printf("\n");

    // Entrada de dados para o vetor 3:
    for (int j = 0; j < 5; j++)
    {
        printf("Digite um valor para o elemento %d do terceiro vetor: ", j);
        scanf("%f", &vet3[j]);
    }
    printf("\n");

    // Calcular, armazenar e imprimir informaçôes de um quarto vetor:
    printf("Vetor 4: ");
    for (int m = 0; m < 5; m++)
    {
        vet4[m] = (vet1[m] * vet3[m]) / vet2[m]; // Cálculo;
        printf("%.2f ", vet4[m]); // Imprimindo elementos do vetor.
    }
    printf("\n");

    return (0);
}
