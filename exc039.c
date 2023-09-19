/* Fazer um programa que calcule a Pirâmide de Três 
Lados.
Converta para metros cúbicos, se necessário. */
#include <stdio.h>

int main() 
{
    // Variáveis:
    float base_base, altura_base, area_base, altura_piramide, volume_piramide;
    int op;

    //Prompt de entrada dos dados:
    printf("Escolha uma escala de dados: \n (1)m\n (2)cm\n");
    do // Opção de escala; 
    {
        printf("Opcao: ");
        scanf("%d", &op);
    }
    while (op != 1 && op != 2);
    printf("\nDigite a base do fundo da piramide: ");
    scanf("%f", &base_base); // "Base" do triângulo da base;
    printf("Digite a altura do fundo da piramide: ");
    scanf("%f", &altura_base); // "Altura" do triângulo da base;
    printf("Digite a altura da piramide: ");
    scanf("%f", &altura_piramide); // Altura da pirâmide.

    // Cálculo do volume da pirâmide:
    area_base = (base_base * altura_base) / 2; // Cálculo da base da pirâmide.
    volume_piramide = (area_base * altura_piramide) / 3;

    // Condição de um volume improvável:
    if (volume_piramide <= 0 )
    {
        printf("\nO volume da piramide eh negativo ou igual a zero, confira os valores de entrada!\n");
    }

    // Retorno do volume da pirâmide em metros cúbicos:
    else 
    {
        switch(op)
        {
            case 1:
                printf("\nO volume da piramide em metros cubicos eh: %.2f\n", volume_piramide);
                break;
            default:// Com conversão de cm^3 para m^3.
                printf("\nO volume da piramide em metros cubicos eh: %.2f\n", volume_piramide / 1000000);
                break;
        }
    }

    return (0);
}
