//Dada uma sequência de números inteiros não-nulos, seguida por 0, imprimir seus quadrados.
#include<stdio.h>

int main()
{
    int number = 1;

    // How to finish the code:
    printf("If you want to stop type (0)!\n");

    // Prompt a number, power calculation and return:
    while(number != 0)
    { 
        printf("Type non-null number: " );
        scanf("%d", &number);
        printf("  %d to the power 2 is: %d\n\n", number, number * number); // Power calculation and return.
    }
    printf("\nProgram finished!!\n");
    
    return (0);
}
