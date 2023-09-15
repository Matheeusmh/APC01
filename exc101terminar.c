//
#include<stdio.h>

int main() {
    int linhas, colunas; 

    printf("Digite o numero de linhas: ");
    scanf("%d", &linhas);
    printf("Digite o numero de colunas: ");
    scanf("%d", &colunas);
    puts("\n");
    
    int matriz[linhas][colunas];

    for (int i = 0; i < linhas; i++) {
        for (int h = 0; h < colunas; h++) {
            printf("Digite o valor (%d, %d): ", i, h);
            scanf("%d", &matriz[i][h]);
        }
    }
    printf("\nMatriz: \n");
    for (int i = 0; i < linhas; i++) {
        for (int h = 0; h < colunas; h++) {
        printf("%d\t", matriz[i][h]);
        }
        puts("\n");
    }

    return (0);
}
