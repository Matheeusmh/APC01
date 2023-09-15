/*Escrever um programa para calcular o consumo médio 
do automóvel, sendo fornecida a distância total percorrida 
pelo automóvel e o total de combustível gasto (Km/litros). 
Ainda mostre o valor gasto em reais, de acordo com o 
número de litros que foram consumidos.*/
#include<stdio.h>

int main() {
    float km, l, valor; int i = 0;//Declaração de variáveis.

    while (i == 0) {
    printf("Digite a quantidade de Km rodados: ");
    scanf("%f", &km);//Entrada dos Km rodados.
    printf("Digite a quantidade de litros gastos: ");
    scanf("%f", &l);//Entrada dos litros gastos.
    printf("Digite o valor atual do combustivel: R$");
    scanf("%f", &valor);//Entrada do valor atual do combustível.

    valor *= l;//Cálculo do valor gasto em combustível.

    printf("\nO consumo medio do automovel eh: %.1fKm/L\n", km / l);//Retorno dos Km/L.
    printf("O valor(em reais) gasto em combustivel eh: R$%.2f", valor);//Retorno do valor gasto em combustível.

    printf("\n\n (0)Continuar calculando.\n (1)Sair.\n");//Tabela de opções(continuar calculando ou sair).
    scanf("%d", &i);//Entrada da escolha do usuário.
    }

    return (0);
}
