#define N 20
#include <stdio.h>
#include <string.h>
#include <locale.h>

int main(){
    setlocale(LC_ALL,"Portuguese");

    char origem[N] = {"Ol√°, mundo!"};
    char destino[N];

    printf("Antes do strcpy:\n");
    puts(origem);
    puts(destino);
    
    ///para alterar conteudo de string
    // no caso a string origem est· vazia mas apos o comando abaixo colocamos o conteudo de destino
    // dentro da variable.

    strcpy(destino, origem);
 
    printf("Depois do strcpy: \n");
    puts(origem);
    puts(destino);



}
