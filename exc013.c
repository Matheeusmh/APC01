/*Faça um programa para qualificar a temperatura:
– se a temperatura for menor do que 20oC, então está frio;
– se a temperatura estiver entre 20oC e 30oC, então está
agradável;
– se a temperatura for maior do que 30oC, então está
quente. */
#include<stdio.h>

int main() {
    float temperature = 0;//Declaração de variáveis.

    printf("Type de temperature in Celsius: ");
    scanf("%f", &temperature);//Entrada de dados.

    //Processamento e retorno de dados.
    if (temperature < 20)//Condição para o frio.
        printf("It is freezing!\n");//Retorno da informação.
    else {
        if (temperature > 20 && temperature < 30)//Condição para uma temperatura agradável.
            printf("It is cool!\n");//Retorno da informação.
        else //Última possibilidade(quente).
            printf("It is hot!\n");//Retorno da informação.
    }

    return 0;
}
