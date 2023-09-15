/*Faça um programa para calcular o aumento que será dado a 
um funcionário, obtendo do usuário as seguintes informações: 
salário e a porcentagem de aumento. Mostrar o novo valor do 
salário e o valor do aumento. */
#include<stdio.h>

int main() {
    float salario, aumento, porcentagem;//Declaração de variáveis.

    printf("Digite o salario do funcionario: R$");
    scanf("%f", &salario);//Entrada do salário do funcionário.
    printf("Digite a porcentagem de aumento(sem caracteres especiais): ");
    scanf("%f", &porcentagem);//Entrada do percentual de aumento.

    aumento = (porcentagem / 100) * salario;//Cálculo do aumento.

    printf("\n O novo valor do salario deste funcionario eh: R$%.2f\n O valor do aumento eh igual a: R$%.2f\n", salario + aumento, aumento);//Retorno do novo salário pós aumento e do valor de acréscimo.

    return(0);
}
