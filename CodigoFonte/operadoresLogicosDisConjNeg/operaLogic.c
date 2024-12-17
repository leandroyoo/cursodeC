#include <stdio.h>

int main(){
	
	float m;
	
	printf("Insira a nota:\n");
	scanf("%f", &m);
	
	if(m >= 4.0 && m < 7.0){
		printf("Tem direito a exame!\n");
		
	}
	
	printf("Nao tem direito a fazer o exame!\n");
	
}
