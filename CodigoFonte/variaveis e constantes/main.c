#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() {
	char texto[50] = "";
	printf("%s\n", texto);
	
	//char texto[50] = "";
	int idade = 0;
	float altura = 0.0;
	char nome[50] = "";
	
	printf("Digite a idade:\n");
	scanf("%d" , &idade);
	
	printf("Digite a altura:\n");
	scanf("%f" , &altura);
	
	printf("Digite seu nome:\n");
	scanf("%s" , &nome);


	printf("Dados informados:\n");
	printf("Idade: %d. \n", idade);
	printf("Altura: %.2f. \n",altura);
	printf("Nome: %s. \n", nome);
}
