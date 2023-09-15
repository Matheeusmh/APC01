/*Uma empresa paga R$ 10.00 por hora normal 
trabalhada e R$ 15.00 por hora extra. Escreva um 
programa que leia o total de horas normais e o total de 
horas extras trabalhadas por um empregado em um ano 
e calcule o salário anual deste trabalhador.*/
#include<stdio.h>

int main() {
    float hNormal, hExtra, totalNormal, totalExtra;//Declaração de variáveis.

    printf("Digite o total de horas normais trabalhadas neste ano: ");
    scanf("%f", &hNormal);//Entrada das horas normais trabalhadas.
    printf("Digite o total de horas extras trabalhadas neste ano: ");
    scanf("%f", &hExtra);//Entrada das horas extras trabalhadas.

    totalNormal = hNormal * 10;//Cálculo da restituição das horas normais.
    totalExtra = hExtra * 15;//Cálculo da restituição das horas extras.

    printf("\nO salario anual deste trabalhador eh: R$%.2f\n", totalNormal + totalExtra);//Retorno da restituição total das horas trabalhadas.

    return (0);
}
