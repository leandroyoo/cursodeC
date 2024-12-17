#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() {
	int dado = 0;
	
	printf("Digite um valor: \n");
	scanf("%d", &dado);
	
	printf("Antes do incremento: %d. \n", dado);
	
	dado++;
	printf("Depois do incremento: %d. \n", dado);
	
	dado--;
	printf("Depois do decremento: %d. \n", dado);
	
	dado += 3;
	printf("Depois do incremento em 3 unidades: %d. \n", dado);
	
	dado -= 2;
	printf("Depois do decremento em 2 unidades: %d. \n", dado);
	
	dado *=10;
	printf("Depois de multiplicar por 10: %d. \n ", dado);
}
