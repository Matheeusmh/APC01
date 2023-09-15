/* Dados um inteiro x e um inteiro não-negativo n, 
calcular x^n usando FOR. */
#include<stdio.h>
#include<math.h>

int main() {
    int numero, power, resultado;

    //Entrada do valores:
    printf("Digite um numero inteiro: ");
    scanf("%d", &numero); // Inteiro;
    printf("Digite um numero inteiro positivo(potencia): ");
    scanf("%d", &power); // Potência.

    //Cálculo e retorno da potenciação:
    resultado = numero;
    for (int i = power - 1; i > 0; i--) // Laço para realizar a potenciação;
    {
        resultado *= numero;
    }
    printf("\nO resultado de %d elevado a %d eh: %d\n\n", numero, power, resultado); // Retorno.

    return 0;
}
