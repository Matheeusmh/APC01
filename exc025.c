/*Leia 10 valores e imprima o maior deles*/
#include <stdio.h>

int main()
{
    int number[9], biggest = 0;
    // Prompt para a entrada dos números e comparação de valores:
    for (int i = 0; i < 10; i++)
    {
        printf("Enter a number: ");
        scanf("%d", &number[i]);  // Entrada de dados;      
        if (number[i] > biggest) // Analisando qual número é maior.
            biggest = number[i];
    }

    // Imprimindo o maior número digitado:
    printf("\nThe biggest number is: %d\n", biggest);

    return (0);
}
