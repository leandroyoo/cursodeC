#define N 20
#include <stdio.h>
#include <string.h>
#include <locale.h>

int main(){
    setlocale(LC_ALL,"Portuguese");

    char s[N] = {"Lógica de"};
    int i;

    printf("Antes do strcpy:\n");
    gets(s);
    i = strlen(s);
    printf("\nTamanho do texto: %d\n\n", i);

    //contador de string
    printf("Impressão de posição a posição: \n");
    for(i=0; i<strlen(s); i++){
        printf("%c", s[i]);
    }
}


