#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() {
	
	int idade = 0;
	float peso = 0.0;
	
	printf("valor inicial da idade: %d. \n", idade);
	
		//utilizando o scan %d. \n , &variavel////////////
	printf("Digite uma idade: \n");
	scanf("%d", &idade);
	printf("Digite um peso: \n");
	scanf("%f", &peso);	
	///////////////////////////////////////////////
	
	printf("Idade informada: %d. \n", idade);
	printf("Ano informado: %f. \n", peso);
	
}
