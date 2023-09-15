/*Escreva um programa que leia 3 valores inteiros e 
verifique se eles podem ser os lados de um triângulo. 
Se forem, informar qual o tipo de triângulo que eles 
formam: equilátero, isóscele ou escaleno.
– Propriedade: o comprimento de cada lado de um triângulo é 
menor que a soma dos comprimentos dos outros dois lados.
– Equilátero: é todo triângulo que apresenta 
os 3 lados com a mesma medida. Dizemos 
que os 3 lados são congruentes. (AB == AC==BC)
– Isóscele: é todo triângulo que apresenta 
dois lados com a mesma medida, ou seja, 
dois lados de tamanhos iguais. (AB==AC)
– Escaleno: é todo triângulo que apresenta 
os três lados com medidas diferentes. 
(A != B != C)*/
#include <stdio.h>

int main() {
    float a = 0, b = 0, c = 0;//Declaração de variáveis.

    printf("Digite um dos lados do triangulo: ");
    scanf("%f", &a);//Entrada de um dos lados do triângulo.
    printf("Digite outro lado do triangulo: ");
    scanf("%f", &b);//Entrada de outro lado do triângulo.
    printf("Digite mais um lado do triangulo: ");
    scanf("%f", &c);//Entrada do último lado do triângulo.

    //Condição para ser um triângulo:
    if (a < (b + c) && b < (c + a) && c < (a + b)) { 
        printf("\nOs lados digitados formam um triangulo ");
        if (a == b == c) //Condição para ser um triângulo equilátero.
            printf("equilatero!\n");
        else if (a != b != c) //Condição para ser um triângulo escaleno.
            printf("escaleno!\n");
        else //Última possibilidade (isósceles)
            printf("isosceles!\n");
    }
    else //Caso não dê para formar um triângulo.
        printf("\nOs lados nao formam um triangulo com os valores digitados!!\n");
    
    return(0);
}
