#define N 20
#include <stdio.h>
#include <string.h>
#include <locale.h>

int main(){
    setlocale(LC_ALL,"Portuguese");

    char s1[N] = {"Lógica de"};
    char s2[N] = {"Programação!"};

    printf("Antes do strcpy:\n");
    printf("str1: %s\n", s1);
    printf("str1: %s\n", s2);

    //concatenação
    strcat(s1,s2);

    printf("Depois do strcat:\n");
    puts(s1);
}
