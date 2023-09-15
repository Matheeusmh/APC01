#include<stdio.h>
#include<string.h>

void main(void) {
    char s1[80], s2[80];
    gets(s1);
    gets(s2);
    printf("Comprimentos: %d %d\n", strlen(s1), strlen(s2));

    if  (!strcmp(s1, s2))
        printf("As strings sao iguais\n");
    
    strcat(s1, s2);
    printf()
}