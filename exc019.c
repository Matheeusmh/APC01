/*Escreva um algoritmo que leia três números e os 
imprima em ordem crescente.*/
#include<stdio.h>

int main() {
    float first_number, second_number, third_number, aux = 0;//Declaração de variáveis.

    printf("Type a number: ");
    scanf("%f", &first_number);//Entrada do primeiro valor.
    printf("Type other number: ");
    scanf("%f", &second_number);//Entrada do segundo valor.
    printf("Type other number: ");
    scanf("%f", &third_number);//Entrada do terceiro valor.

    if (first_number > second_number || first_number > third_number || second_number > third_number) {//Verificando os casos atípicos e fora de ordem crescente.
        if ( second_number > third_number) {//Condição em que o segundo valor é maior que o terceiro.
            aux = third_number;
            third_number = second_number;
            second_number = aux;
        }
        if (first_number > second_number) {//Condição em que o primeiro valor é maior que o segundo.
            aux = second_number;
            second_number = first_number;
            first_number = aux;
        }
        if ( second_number > third_number) {//Condição em que o segundo valor é maior que o terceiro novamente.
            aux = third_number;
            third_number = second_number;
            second_number = aux;
        }
    }

    printf("\n The order of numbers is: %.1f, %.1f and %.1f!\n", first_number, second_number, third_number);//Retorno da ordem crescente dos valores.

    return 0;
}
