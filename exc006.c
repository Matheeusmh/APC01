 //Implemente um programa para calcular fatorial usando FOR.
 #include<stdio.h>

 int main()
 {
    int number, factorial = 1;//Declaração de variáveis.

    printf("Type a number: ");
    scanf("%d", &number);//Entrada de dados.

    if (number < 0)//Condição para invalidar valores negativos.
        printf("It is not possible to perform this operation with negative numbers!!\n");
    else
    {
        for (int i = number; i != 1; i--)//Realização do fatorial.
        {
            factorial *= i;
        }
        printf("The factorial of %d is: %d\n", number, factorial);//Retorno de informações.
    }

    return 0;
 }
