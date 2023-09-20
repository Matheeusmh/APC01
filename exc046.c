/*  Escreva um programa que armazene em um vetor os 10 primeiros 
números ímpares
– começando do numero 1. */
#include <stdio.h>

int main(void)
{
    // Variáveis:
    int vet[10], a = 0, cont = 0;

    // Verificar e armazenar os 10 primeiros números ímpares:
    for (int i = 0; i < 30; i++)
    {
        if (i % 2 != 0 && cont < 10) // Condição para ser ímpar e estar contido nos 10 primeiros;
        {
            vet[a] = i;
            a++;
            cont++;
        }
    }

    // Imprimindo os 10 primeiros ímpares:
    for (int i = 0; i < a; i++)
    {
        printf("%d ", vet[i]);
    }

    return (0);
}
