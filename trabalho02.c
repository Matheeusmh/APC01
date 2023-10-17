/*Implemente um código em linguagem C que leia uma matriz 
3 x 4 e gere outra matriz onde cada elemento resultante seja 
o dobro do elemento da matriz original.*/
#include<stdio.h>

int main() {
    int matriz[3][4], i, j;//Declaração de variáveis;

    printf("__MATRIZES__\n");
    for (i = 0; i < 3; i++) {//Laço de repetição para definir a linha da matriz;
        for (j = 0; j < 4; j++) {//Laço de repetição para definir a coluna da matriz; 
            printf("Digite um valor para a posicao [%d][%d]: ", i, j);
            scanf("%d", &matriz[i][j]);//Entrada de dados na posição em que se encontra a matriz.
        }
    }

    printf("\n__Matriz elaborada__\n");
    for (i = 0; i < 3; i++) {//Laço de repetição para definir a linha da matriz;
        for (j = 0; j < 4; j++) {//Laço de repetição para definir a coluna da matriz; 
            printf("%d\t", matriz[i][j]);//Retorno do conteúdo daquela posição;
        }
        puts("\n");//Melhorando a visualização da informação.
    }

    printf("\n__Matriz com o valor de cada elemento dobrado__\n");
    for (i = 0; i < 3; i++) {//Laço de repetição para definir a linha da matriz;
        for (j = 0; j < 4; j++) {//Laço de repetição para definir a coluna da matriz; 
            printf("%d\t", matriz[i][j] * 2);//Retorno do dobro do conteúdo daquela posição.
        }
        puts("\n");//Melhorando a visualização da informação.
    }

    return(0);
}
