#include <stdio.h>
#include <string.h>
#include <locale.h>

#define TAM 50

struct tipo_pessoa{
    char   nome[TAM];
    int    idade;
    float  peso;
};

typedef struct tipo_pessoa tipo_pessoa;
 

int main(){
    setlocale(LC_ALL, "Portuguese");


    //criando e inicializando
    tipo_pessoa pes = {0, 0.0, "Teste"};

    printf("Inicio:\n");
    printf("pes.nome: %s\n", pes.nome);
    printf("pes.idade: %d\n", pes.idade);
    printf("pes.peso: %.2f\n", pes.peso);


    //Atribuindo valores ao campos
    strcpy(pes.nome, "Texto");
    pes.idade = 10;
    pes.peso = 99.99;


    printf("\nAlterando os campos via código:\n");
    printf("pes.nome: %s\n", pes.nome);
    printf("pes.idade: %d\n", pes.idade);
    printf("pes.peso: %.2f\n", pes.peso);

    //solicitando inserções via teclado
    printf("Insira uma palavra:\n");
    scanf("%s", &pes.nome);
    printf("\nInsira um número inteiro:\n");
    scanf("%d", &pes.idade);
    printf("Insira um número real:\n");
    scanf("%f", &pes.peso);
    fflush(stdin);

     printf("\nAlterando com dados do usuário:\n");
     printf("pes.nome: %s \n", pes.nome);
     printf("pes.idade: %d\n", pes.idade);
     printf("pes.peso: %.2f\n", pes.peso);


   

};