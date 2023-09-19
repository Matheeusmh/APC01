/* Faça um programa para calcular o nº 
de metros cúbicos de uma forma cilíndrica.
Converta para metros cúbicos, se necessário. */
#include <stdio.h>

const float pi = 3.14;

int main()
{
    // Variáveis:
    int op;
    float diamentro, raio, altura, volume;
    
    // Prompt a entrada de dados:
    printf("Escolha a escala dos dados: \n (1)m\n (2)cm\n");
    do
    {
        printf("Opcao: ");
        scanf("%d", &op); // Opção de escala;
    } while (op != 1 && op != 2);
    printf("\nDigite o diamentro dos lados circulares: ");
    scanf("%f", &diamentro); // Diametro do cilindro;
    printf("Digite a distancia entre as extremidades circulares:  ");
    scanf("%f", &altura); // Altura do cilindro.

    // Prompt para calcular o volume do cilindro.
    raio = diamentro / 2;
    volume = pi * (raio * raio) * altura;

    // Condições para volumes ilógicos:
    if (volume <= 0)
        printf("\nO volume eh menor ou igual a 0, confira os valores de entrada!\n");

    // Retorno do volume em metros cúbicos:
    else
    {
        if (op == 1)
            printf("\nO volume em metros cubicos dessa forma cilindrica eh: %.2f\n", volume);
        else // Retorno do valor convertido para m^3:
            printf("\nO volume em metros cubicos dessa forma cilindrica eh: %.2f\n", volume / 1000000);
    }

    return (0);
}
