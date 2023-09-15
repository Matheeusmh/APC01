/* Faça um programa que converta reais em dólares. Para 
tanto a primeira parte do algoritmo serve para perguntar o 
valor do dólar. E depois o usuário pode escolher qual tipo 
de conversão ele quer:
– 1 –> real para dólar
– 2 –> dólar para real*/
#include<stdio.h>

int main() {
    float real, dolar, vdolar; int op, i;//Declaração de variáveis.

    printf("__Conversor de moeda__\n");
    printf("Digite o valor atual do dolar: R$");
    scanf("%f", &vdolar); i = 0;//Entrada da cotação atual do dólar.

    while (i == 0) {
    printf("\nEscolha como converter:\n (1) Dolar para real.\n (2) Real para dolar.\n ");
    scanf("%d", &op);//Entrada da opção escolhida.

    if (op == 1) {//Converção de dólar para real e retorno desta informação.
        printf("\nDigite um valor em dolar: $");
        scanf("%f", &dolar);
        printf(" $%.2f equivale a: R$%.2f\n", dolar, dolar * vdolar);
    }
    else if (op == 2) {//Converção de real para dólar e retorno desta informação.
        printf("\nDigite um valor em real: R$");
        scanf("%f", &real);
        printf(" R$%.2f equivale a: $%.2f\n", real, real / vdolar);
    }
    else//Invalidando opções.
        printf("\nOpcao invalida!!\n");
    
    printf("\nDeseja continuar convertendo?\n (0)Sim.\n (1)Nao.\n");//Opções pós processamento de dados.
    scanf("%d", &i);
    }
    
    return(0);
}
