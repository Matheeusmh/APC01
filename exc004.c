/*Implemente um programa que lê 2 valores do 
teclado, sendo esses:
– 2 inteiros;
– Some esses valores;
– Imprima na tela o valor final da soma.*/
#include <stdio.h>

main()
{
    //Declaração de variáveis:
    int num1, num2;

    //Entrada de dados:
    printf("Digite um numero inteiro: ");
    scanf("%d", &num1);
    printf("Digite outro numero inteiro: ");
    scanf("%d", &num2);

    //Processamento de dados e retorno do resultado da soma:
    printf("\nA soma dos valores digitados eh: %d\n", num1 + num2);

    return 0;
}
