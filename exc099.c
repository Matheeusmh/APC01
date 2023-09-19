/* Um time de basquete possui 12 jogadores. Elabore um 
programa que calcule e imprima:
– A média de altura do time.
– A altura daqueles atletas que tem altura maior que a média.
– O nome do jogador mais alto e a sua altura. */
#include <stdio.h>
#include<windows.h> // Mudar a cor do texto.

// Dados dos jogadores:
struct jogador 
{
    char nome[50];
    float altura;
};

int main(void)
{
    // Variáveis:
    struct jogador jogadores[12];
    char mais_alto[50];
    float soma_alturas = 0, media_alturas = 0, maior_altura = 0;

    HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
    printf("__Cadastre 12 jogadores__\n");
    
    // Entrada do nome e altura dos jogadores:
    for (int i = 0; i < 12; i++)
    {
        printf("Digite o nome do jogador: ");
        gets(jogadores[i].nome);
        do // Invalidando alturas negativas ou nulas;
        {
            printf("Digite a altura do %s em metros: ", jogadores[i].nome);
            scanf("%f", &jogadores[i].altura);
        } while (jogadores[i].altura <=0);
        fflush(stdin);
        printf("\n");
        soma_alturas += jogadores[i].altura; // Soma das alturas;
        if (jogadores[i].altura > maior_altura) // Verificando a maior altura.
        {
            maior_altura = jogadores[i].altura;
        }
    }

    // Calculando e imprimindo a média entre as alturas:
    media_alturas = soma_alturas / 12; 
    printf("\n\n A media de altura do time em metros eh: %.2f\n", media_alturas);
    
    // Verificar e imprimir quais jogadores/alturas estão acima da média:
    printf(" As alturas acima da media sao:\n");
    for (int h = 0; h < 12; h++)
    {
        if (jogadores[h].altura > media_alturas)
        {
            printf("  %s = %.2f\n", jogadores[h].nome, jogadores[h].altura);
        }  
    }

    // Verificar qual jogador é o mais alto e imprimir seu nome/altura:
    for (int m = 0; m < 12; m++) 
    {
        if (maior_altura == jogadores[m].altura)
        {
            SetConsoleTextAttribute(hConsole, FOREGROUND_GREEN); // Mudar a cor do texto para verde;
            printf(" O jogador mais alto eh o %s com %.2fm!!\n", jogadores[m].nome, jogadores[m].altura); // Imprimir as informações do jogador mais alto;
            SetConsoleTextAttribute(hConsole, FOREGROUND_RED | FOREGROUND_GREEN | FOREGROUND_BLUE); // Voltando a cor do sistema.
        }
    }

    return (0);
}
