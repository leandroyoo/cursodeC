#include <stdio.h>
#include <stdlib.h> // Necessário para system("pause")

int main() {
    // Inicializando a matriz
    int mat[3][3] = {
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9}
    };

    int i, j;

    // Imprimindo a primeira linha
    printf("Imprimindo a primeira linha:\n");
    for (j = 0; j < 3; j++) {
        printf("%d ", mat[0][j]);
    }

    printf("\n\nImprimindo a matriz toda:\n");
    // Imprimindo toda a matriz
    for (i = 0; i < 3; i++) {
        for (j = 0; j < 3; j++) {
            printf("%d ", mat[i][j]);
        }
        printf("\n"); // Quebra de linha após cada linha da matriz
    }

    system("pause"); // Mantém o terminal aberto no Windows
    return 0;
}
