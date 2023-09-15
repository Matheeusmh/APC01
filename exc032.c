//Descobrir o comprimento do vetor:
#include<stdio.h>
#include<string.h>

int main() {
    char e1[] = "Erro de leitura\n";
    char e2[] = "Erro de escrita\n";
    char e3[] = "Arquivo não pode ser aberto\n";

    printf("%s Tem comprimento %d\n", e2, sizeof e2);

    return (0);
}
