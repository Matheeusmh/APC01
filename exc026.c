/*A fórmula é IMC=peso/altura2 .
Elabore um programa que leia o peso e a altura de 
um adulto, calcule o IMC e mostre sua condição. 
– IMC em adultos Condição
• Abaixo de 18,5: Abaixo do peso
• Entre 18,5 e 25: Peso normal
• Acima de 25 e abaixo ou igual a 30: Acima do peso
• Acima de 30: Obeso */
#include<stdio.h>

int main() {
    float height, wheight, imc;//Declaração de variáveis.

    printf("__BMI Calculator__\n\n");
    printf("Type the height: ");
    scanf("%f", &height);//Entrada da altura do usuário.
    printf("Type the wheight: ");
    scanf("%f", &wheight);//Entrada do peso do usuário.

    imc = wheight / (height * height);//Cálculo do Índice de Massa Corporal.

    if (imc < 18.5)//Condição para estar abaixo do peso.
        puts("\nThe person is underwheight!!\n");
    else if (imc > 18.5 && imc < 25)//Condição para estar com o peso normal.
        puts("\nThe person has a normal wheight!!\n");
    else if (imc > 25 && imc <= 30)//Condição para estar acima do peso.
        puts("\nThe person is overwheight!!\n");
    else//Última possibilidade(obesidade).
        puts("\nThe person is obese!!\n");
    
    return 0;
}
