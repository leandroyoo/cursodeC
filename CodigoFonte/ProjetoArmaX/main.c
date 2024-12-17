#include <stdio.h>

int main() {
    int numero, i;

    printf("==== Programa de Tabuada ====\n");
    printf("Digite um número para gerar a tabuada: ");
    scanf("%d", &numero);

    printf("\n--- Tabuada do %d ---\n", numero);
    for (i = 1; i <= 10; i++) {
        printf("%d x %d = %d\n", numero, i, numero * i);
    }

    printf("\nTabuada finalizada. Obrigado por usar o programa!\n");

    return 0;
}
