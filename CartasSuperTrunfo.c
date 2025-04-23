
#include <stdio.h>

int main() {
    // Variáveis da carta 1
    char estado1[30], codigo1[4], cidade1[30];
    int pop1, pontos1;
    float area1, pib1, dens1, pibpc1;

    // Variáveis da carta 2
    char estado2[30], codigo2[4], cidade2[30];
    int pop2, pontos2;
    float area2, pib2, dens2, pibpc2;

    // Leitura da carta 1
    printf("=== Carta 1 ===\n");
    printf("Estado: "); scanf(" %[^\n]", estado1);
    printf("Código: "); scanf(" %s", codigo1);
    printf("Cidade: "); scanf(" %[^\n]", cidade1);
    printf("População: "); scanf("%d", &pop1);
    printf("Área: "); scanf("%f", &area1);
    printf("PIB: "); scanf("%f", &pib1);
    printf("Pontos turísticos: "); scanf("%d", &pontos1);

    // Leitura da carta 2
    printf("\n=== Carta 2 ===\n");
    printf("Estado: "); scanf(" %[^\n]", estado2);
    printf("Código: "); scanf(" %s", codigo2);
    printf("Cidade: "); scanf(" %[^\n]", cidade2);
    printf("População: "); scanf("%d", &pop2);
    printf("Área: "); scanf("%f", &area2);
    printf("PIB: "); scanf("%f", &pib2);
    printf("Pontos turísticos: "); scanf("%d", &pontos2);

    // Cálculos
    dens1 = pop1 / area1;
    pibpc1 = pib1 / pop1;

    dens2 = pop2 / area2;
    pibpc2 = pib2 / pop2;

    // Exibição dos resultados
    printf("\n=== Resultado das Cartas ===\n");
    printf("Carta 1 - %s (%s):\n", cidade1, estado1);
    printf("Densidade: %.2f | PIB per capita: %.6f\n", dens1, pibpc1);

    printf("Carta 2 - %s (%s):\n", cidade2, estado2);
    printf("Densidade: %.2f | PIB per capita: %.6f\n", dens2, pibpc2);

    // Comparação (atributo: PIB per capita)
    printf("\nComparação de cartas (Atributo: PIB per capita):\n");
    printf("%s: %.6f\n", cidade1, pibpc1);
    printf("%s: %.6f\n", cidade2, pibpc2);

    if (pibpc1 > pibpc2) {
        printf("Resultado: Carta 1 (%s) venceu!\n", cidade1);
    } else if (pibpc2 > pibpc1) {
        printf("Resultado: Carta 2 (%s) venceu!\n", cidade2);
    } else {
        printf("Resultado: Empate!\n");
    }

    return 0;
}