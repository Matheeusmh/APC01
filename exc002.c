/*Implemente um programa que lê 2 valores do 
teclado, sendo esses 2 inteiros e:
– Some os valores;
– Imprima na tela o valor final da soma;
– Faça a subtração dos mesmos valores;
– Imprima na tela o valor final da subtração;
– Faça a multiplicação dos mesmos valores;
– Imprima na tela o valor final da multiplicação;
– Faça a divisão dos mesmos valores;
– Imprima na tela o valor final da divisão;
– As operações podem ser sequenciais, ou seja, faça a 
soma, depois a subtração, ...*/
#include<stdio.h>

int main()
{
    //Declarando variáveis:
    int primeiro_numero, segundo_numero;

    //Entrada de dados:
    printf("Digite um numero: ");
    scanf("%d", &primeiro_numero);
    printf("Digite outro numero: ");
    scanf("%d", &segundo_numero);

    //Processamento de dados e devolução de informações após operações:
    printf("\n__Operacoes__");
        //Adição:
    printf("\n %d + %d = %d", primeiro_numero, segundo_numero, primeiro_numero + segundo_numero);
        //Subtração:
    printf("\n %d - %d = %d", primeiro_numero, segundo_numero, primeiro_numero - segundo_numero);
        //Multiplicação:
    printf("\n %d x %d = %d", primeiro_numero, segundo_numero, primeiro_numero * segundo_numero);
        //Divisão:
    printf("\n %d : %d = %.2f\n", primeiro_numero, segundo_numero, (float)primeiro_numero / segundo_numero);

    return 0;
}
