//Teste da matriz unidimensional ou vetor
#include<stdio.h>

int main() {
    int x[100], t;

    for (t = 0; t < 100; t++) {
        x[t] = t;
        printf("%d ", x[t]);
    }
    
    return 0;
}
