//Implemente um programa para calcular fatorial usando DO WHILE.
#include<stdio.h>

int main() {
    int number, i, factorial = 1;//Declaração de variáveis.
    
    printf("Type a positive integer: ");
    scanf("%d", &number);//Entrada de dados.

    if (number < 0)//Condição em prol de invalidar valores negativos.
        printf("It is not possible to perform this operation with negative numbers!!\n");
    else {
        i = number;
        do {//Cálculo do fatorial:
            factorial *= i--;
        }while(i != 1);
        printf("The factorial of %d is: %d\n", number, factorial);//Saída de dados pós processamento.
    }

    return 0;
}
