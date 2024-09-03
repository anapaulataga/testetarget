#include <stdio.h>

int main() {
    // Definindo o vetor de faturamento para um mês com 30 dias (exemplo)
    float faturamento[30] = {100.5, 200.0, 150.2, 0.0, 50.1, 300.5, 0.0, 250.3, 175.4, 200.0,
                             400.2, 350.0, 0.0, 300.1, 50.3, 100.4, 150.5, 0.0, 200.6, 250.7,
                             300.8, 400.9, 500.0, 600.1, 0.0, 200.0, 250.0, 100.0, 50.0, 75.0};

    int i, diasAcimaMedia = 0;
    float menorFaturamento = faturamento[0], maiorFaturamento = faturamento[0], somaFaturamento = 0, mediaMensal;

    // Calculando o menor, maior faturamento e a soma total
    for (i = 0; i < 30; i++) {
        if (faturamento[i] < menorFaturamento) {
            menorFaturamento = faturamento[i];
        }
        if (faturamento[i] > maiorFaturamento) {
            maiorFaturamento = faturamento[i];
        }
        somaFaturamento += faturamento[i];
    }

    // Calculando a média mensal, considerando apenas os dias com faturamento positivo
    mediaMensal = somaFaturamento / 30;

    // Calculando o número de dias em que o faturamento diário foi superior à média mensal
    for (i = 0; i < 30; i++) {
        if (faturamento[i] > mediaMensal) {
            diasAcimaMedia++;
        }
    }

    // Exibindo os resultados
    printf("Menor faturamento do mês: R$ %.2f\n", menorFaturamento);
    printf("Maior faturamento do mês: R$ %.2f\n", maiorFaturamento);
    printf("Número de dias com faturamento acima da média mensal: %d\n", diasAcimaMedia);

    return 0;
}