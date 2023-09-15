//Implemente um programa para calcular fatorial usando WHILE.
#include<stdio.h>

int main() {
    int number, factorial = 1, i;//Declaração de variáveis.

    printf("Type a number: ");
    scanf("%d", &number);//Entrada de dados.

    if (number < 0)//Condição para invalidar valores negativos.
        printf("It is not possible to perform this operation with negative numbers!!\n");
    else {
        i = number;//Atribuição de valor à variável. 
        while (i != 1) { //Cálculo do fatorial.
            factorial *= i--;
        }
        printf("The factorial of %d is = %d\n", number, factorial);//Retorno de dados pós processamento.
    }

    return 0;
}
