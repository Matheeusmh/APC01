/* Numa corrida há 10 corredores, de número de inscrição 
de 1 a 10. Faça um programa que:
– Leia os valores do número do corredor e o seu tempo na corrida(em minutos inteiros),
calcule seu ritmo em um trajeto de 10 Km.
– Imprima o número do vencedor e o vice vencedor, com o tempo de 
corrida e ritmo. */
#include <stdio.h>

// Dados do corredor:
struct corredor {
    int numero;
    float tempo;
    float ritmo;
};

int main(void)
{
    // Variáveis:
    struct corredor corredores[10];
    float distancia = 10, melhor_ritmo = 10000, segundo_mritmo = 10000;

    // Entrada e armazenamento de dados:
    for (int i = 0; i < 10; i++)
    {
        printf("Digite o numero do corredor: ");
        scanf("%d", &corredores[i].numero); // Número do corredor;
        do
        {
            printf("Digite o tempo do corredor %d no trajeto(em minutos inteiros): ", corredores[i].numero);
            scanf("%f", &corredores[i].tempo); // Tempo do jogador;
        } while (corredores[i].tempo < 0); // Condição para um tempo lógico;
        printf("\n");

        corredores[i].ritmo = corredores[i].tempo / distancia; // Calcular o ritmo do jogador;

        if (segundo_mritmo > corredores[i].ritmo) // Ritmo do vice-campeão;
            segundo_mritmo = melhor_ritmo;

        if (corredores[i].ritmo < melhor_ritmo) // Ritmo do campeão.
            melhor_ritmo = corredores[i].ritmo;

    }

    // Imprimir o número, tempo e ritmo do corredor campeão:
    for (int i = 0; i < 10; i++)
    {
        if (melhor_ritmo == corredores[i].ritmo)
            printf("\n O CAMPEAO eh o corredor de numero: %d \n  Tempo: %.2f \n  Ritmo: %.2fKm/min\n", corredores[i].numero, corredores[i].tempo, corredores[i].ritmo);
    }

    // Imprimir o número, tempo e ritmo do corredor vice-campeão:
    for (int i = 0; i < 10; i++)
    {
        if (segundo_mritmo == corredores[i].ritmo)
            printf("\n O vice-campeao eh o corredor de numero: %d \n  Tempo: %.2f \n  Ritmo: %.2fKm/min\n", corredores[i].numero, corredores[i].tempo, corredores[i].ritmo); 
    }

    return (0);
}
