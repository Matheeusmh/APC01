/*
Leia um vetor de 10 notas inteiras e 
informe:
a) o maior número;
b) o menor número;
c) a média das notas;
d) desvio padrão;
e) verifica se tem números repetidos e quais são e sua posição;
f) restringir as notas digitadas entre 0 e 10.
*/
#include<stdio.h>
#include<string.h>


int main() {
    int nota[10], maior = 0,menor = 10, i, contador = 0, h; float media;

    for (i = 0; i <= 9; i++) {
        printf("Digite a nota %d: ", i + 1);
        scanf("%d", &nota[i]);
        media =+ nota[i];
        while (nota[i] > 10 || nota[i] < 0) {
            printf("Valor INVALIDO!!\n");
            i--;
        }
        if (nota[i] > maior)
            maior = nota[i];
        if (nota[i] < menor)
            menor = nota[i];
        
    }

    printf("A maior nota digitada foi: %d", maior);
    printf("\nA menor nota digitada foi: %d", menor); 
    printf("\nA media das notas eh: %.1f\n", media / 10);

    for (i = 0; i <= 9; i++) {
        for (h = 0; h <= 9; h++) {
            if (nota[i] == nota[h])
                contador++;
        }
        printf("O valor %d se repetiu %d vezes.\n", nota[i], contador);
    }

    return 0;
}
