/* Uma loja de discos anota diariamente durante o mês de 
março a quantidade de discos vendidos. Faça um programa 
para determinar em que dia desse mês ocorreu a maior 
venda e qual foi a quantidade de discos vendida nesse dia. */
#include <stdio.h>

int main(void)
{
    // Variáveis:
    int marco[31], mais_vendas = 0, dia = 0;

    // Armazenar a quantidade de discos vendidos em cada dia do mês:
    printf("__MARCO__\n");
    for (int i = 0; i < 31; i++)
    {
        do 
        {
            printf("Digite a quantidade de discos vendidos no dia %d: ", i + 1);
            scanf("%d", &marco[i]);
        } while(marco[i] < 0); // Não aceitar valores negativos;
        if (mais_vendas < marco[i]) // Verificar qual é a maior quantidade vendida e o dia correspondente.
        {
            mais_vendas = marco[i];
            dia = i + 1;
        }
    }
    
    // Imprimir o dia e a quantidade relacionados a maior venda:
    printf("\n Mais vendas:\n  Dia: %d/03\n", dia);
    printf("  Quantidade(un.): %d\n", mais_vendas);

    return (0);
}
