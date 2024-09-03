#include <stdio.h>
#include <string.h>

int main() {
    char palavra[100];  // Definindo um tamanho máximo para a string
    int tamanho, i;

    // Solicitando ao usuário que insira uma palavra
    printf("Digite uma palavra: ");
    scanf("%s", palavra);

    // Calculando o tamanho da string
    tamanho = strlen(palavra);

    // Invertendo a string
    printf("Palavra invertida: ");
    for (i = tamanho - 1; i >= 0; i--) {
        printf("%c", palavra[i]);
    }
    printf("\n");

    return 0;
}