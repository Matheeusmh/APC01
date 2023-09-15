/*• Ler 2 notas
• Calcular média
• Verificar se a situação do aluno:
– Media >= 6: aluno aprovado;
– Media < 6: aluno em recuperação;
– Media <5: aluno reprovado.*/
#include<stdio.h>

main()
{
    //Declaração de variáveis:
    float nota1, nota2, media = 0;

    //Entrada de dados:
    printf("Digite a primeira nota: ");
    scanf("%f", &nota1);
    printf("Digite a segunda nota: ");
    scanf("%f", &nota2);

    //Cálculo da média:
    media = (nota1 + nota2) / 2;

    //Verificando condições e retorno de informações:
        //Aprovação:
    if (media>=6)
        printf("\n ALUNO APROVADO!!");
        //Recuperação:
    else if(media < 6 && media > 5)
        printf("\n ALUNO EM RECUPERACAO!!");
        //Reprovação:
    else
        printf("\n ALUNO REPROVADO!");
    printf("\n A media do aluno eh: %.2f\n", media);

    return 0;
}
