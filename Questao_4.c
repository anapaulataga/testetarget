#include <stdio.h>

int main() {
    // Valores de faturamento por estado
    float sp = 67836.43;
    float rj = 36678.66;
    float mg = 29229.88;
    float es = 27165.48;
    float outros = 19849.53;

    // Calculando o faturamento total
    float faturamentoTotal = sp + rj + mg + es + outros;

    // Calculando o percentual de cada estado
    float percentualSP = (sp / faturamentoTotal) * 100;
    float percentualRJ = (rj / faturamentoTotal) * 100;
    float percentualMG = (mg / faturamentoTotal) * 100;
    float percentualES = (es / faturamentoTotal) * 100;
    float percentualOutros = (outros / faturamentoTotal) * 100;

    // Exibindo os resultados
    printf("Percentual de representação por estado:\n");
    printf("SP: %.2f%%\n", percentualSP);
    printf("RJ: %.2f%%\n", percentualRJ);
    printf("MG: %.2f%%\n", percentualMG);
    printf("ES: %.2f%%\n", percentualES);
    printf("Outros: %.2f%%\n", percentualOutros);

    return 0;
}