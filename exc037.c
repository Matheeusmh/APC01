/* Faça um programa para calcular o número de 
metros cúbicos de uma caixa retangular.
Converta para metros cúbicos, se necessário. */
#include <stdio.h> 

int main(void)
{
    // Variáveis:
    float volume, comprimento, largura, altura; 
    int op;

    // Prompt para a entrada dos dados:
    printf("Escolha uma opcao para a entrada de dados: \n (1)cm\n (2)m\n");
    do
    {
        printf("Opcao: ");
        scanf("%d", &op);
    } while (op != 1 && op != 2);
    printf("\nDigite o comprimento da caixa: ");
    scanf("%f", &comprimento); // Comprimento.
    printf("Digite a largura da caixa: ");
    scanf("%f", &largura); // Largura. 
    printf("Digite a altura da caixa: ");
    scanf("%f", &altura); // Altura.

    // Prompt para calcular o volume:
    volume = comprimento * largura * altura;

    // Condição para um volume ilógico:
    if (volume <= 0)
        printf("\nO volume eh menor ou igual a zero, confira os valores de entrada!\n");
    // Retorno do volume em m^3:
    else
    {
        switch (op) 
        {
            case 1:
                printf("\nO volume da caixa em m^3 eh: %.2f\n", volume / 1000000);
                break;
            case 2:
                printf("\nO volume da caixa em m^3 eh: %.2f\n", volume);
                break;
            default:
                printf("\nOpcao invalida!\n");
                break;
        }
    }

    return 0;
}
