/*Efetuar a leitura do nome do aluno, matrícula e 3 
notas. Calcule a média. Para média >= 6 aprovado, caso 
contrário reprovado.*/
#include<stdio.h>

int main() {
    char nome[50]; 
    int matricula[20];
    float nota1, nota2, nota3, media;

    // Entrada de dados:
    printf("Digite o nome do(a) aluno(a): ");
    gets(nome); // Nome;
    printf("Digite a matricula do(a) aluno(a): ");
    gets(matricula); // Matricula;
    printf("Digite a primeira nota: ");
    scanf("%f", &nota1); // Primeira nota;
    printf("Digite a segunda nota: ");
    scanf("%f", &nota2); // Segunda nota;
    printf("Digite a terceira nota: ");
    scanf("%f", &nota3); // Terceira nota.

    // Cálculo da média das notas:
    media = (nota1 + nota2 + nota3) / 3;

    // Verificando e retornando a situação do aluno/informações:
    printf("\nAluno(a): %s \nMatricula: %s", nome, matricula);
    if (media >= 6) // Condição para a aprovação.
        printf("\nSituacao: APROVADO(a)!\n");
    else
        printf("\nSituacao: REPROVADO(a)!\n");
    
    return (0);
}
