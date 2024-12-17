#include <stdio.h>
#include <string.h>
#include <locale.h>
#include <stdlib.h> // Para o uso de system()

#define TAM 3

struct tipo_pessoa {
    char nome[50];
    int idade;
    float peso;
};

typedef struct tipo_pessoa tipo_pessoa;

int main() {
    setlocale(LC_ALL, "Portuguese");
    tipo_pessoa lista[TAM];
    int i;

    for (i = 0; i < TAM; i++) {
        printf("Insira os dados da pessoa %d: \n", i + 1);

        printf("Nome: ");
        // Espaço antes de %49[^\n] para evitar problemas com buffer do scanf
        scanf(" %49[^\n]", lista[i].nome);

        printf("Idade: ");
        scanf("%d", &lista[i].idade);

        printf("Peso: ");
        scanf("%f", &lista[i].peso);

        // Limpa o buffer após o scanf para evitar conflitos na leitura seguinte
        while (getchar() != '\n');
    }

    system("cls"); // Limpa a tela no Windows; no Linux/Mac use "clear"

    printf("Seus dados:\n");
    for (i = 0; i < TAM; i++) {
        printf("--------- Pessoa %d ---------\n", i + 1);
        printf("\tNome: %s\n", lista[i].nome);
        printf("\tIdade: %d\n", lista[i].idade);
        printf("\tPeso: %.2f\n", lista[i].peso);
    }
    printf("-----------------------------\n");

    return 0;
}
