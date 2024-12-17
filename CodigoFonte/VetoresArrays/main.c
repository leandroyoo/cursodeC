#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() {
	int v[5];
	
	float m;
	
	v[0] = 50;
	v[1] = 40;
	v[2] = 30;
	v[3] = 20;
	v[4] = 10;
	
	
	m = (v[0]+ v[1] + v[2] + v[3] + v[4] ) / 5; 
	
	printf("Resultado: %.2f \n", m);
	
	

}
