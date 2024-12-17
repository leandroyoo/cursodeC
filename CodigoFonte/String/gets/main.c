

#include <stdio.h>

int main(){

    char s[10];

    printf("Digite algo (scanf convencional): \n");
    gets(s);
    fflush(stdin);
    printf("Resultado do Convencional:");
    puts(s);
    
    ///olha que maneiro ele formata pegando somente o numero de strings necessarias
    printf("Digite algo (scanf aprimorado): \n");
    fgets(s, 10, stdin);
    fflush(stdin);

    printf("Resultado do Aprimorado:");
    puts(s);


}