#include <stdio.h>

int main() {
    int num, a = 0, b = 1, temp;

    // Solicita ao usuário que informe um número
    printf("Digite um número: ");
    scanf("%d", &num);

    // Verifica se o número informado é 0 ou 1, que sempre pertencem à sequência de Fibonacci
    if (num == 0 || num == 1) {
        printf("O número %d pertence à sequência de Fibonacci.\n", num);
        return 0;
    }

    // Gera a sequência de Fibonacci até que o valor ultrapasse ou iguale ao número informado
    while (b < num) {
        temp = b;
        b = a + b;
        a = temp;
    }

    // Verifica se o número informado pertence à sequência
    if (b == num) {
        printf("O número %d pertence à sequência de Fibonacci.\n", num);
    } else {
        printf("O número %d NÃO pertence à sequência de Fibonacci.\n", num);
    }

    return 0;
}