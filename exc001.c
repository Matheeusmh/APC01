/*Implemente um programa que:
– Peça ao usuário para digitar 2 notas;
– Leia duas notas; 
– Imprima as notas;
– Calcule a média aritmética;
– Imprima a média das notas.*/
#include<stdio.h>

main()
{
    //Declaração de variáveis:
    float primeira_nota, segunda_nota, media;

    //Entrada de dados:
    printf("Digite a primeira nota: ");
    scanf("%f", &primeira_nota);
    printf("Digite a segunda nota: ");
    scanf("%f", &segunda_nota);

    //Processamento de dados:
        //Cálculo da média:
    media = (primeira_nota + segunda_nota) / 2;

    //Imprimindo informações:
    printf("\n A primeira e segunda nota digitada foi, respectivamente, %.2f e %.2f! \n  A media entre essas duas notas eh: %.2f \n", primeira_nota, segunda_nota, media);

    return 0;
}
