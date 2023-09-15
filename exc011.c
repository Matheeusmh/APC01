/* Dado um número inteiro positivo n, imprimir os n primeiros naturais ímpares.
Exemplo: Para n=4 a 
saída deverá ser 1,3,5,7. */
#include<stdio.h>

int main()
{
    int contador, numero = 0;
    // Determinando quantos números serão exibidos:
    printf("Digite a quantidade de numeros impares: ");
    scanf("%d", &contador);

    // Selecionando e exibindo números ímpares:
    while (contador != 0)
    {   
        numero++;
        if (numero % 2 != 0) // Condição para ser um número ímpar.
        {
            printf(" %d ", numero); //Printando os valores ímpares.
            contador--;
        }
    }
    printf("\n");

    return 0;
}
