#include <stdio.h>

int main() {
    char estado1, codigo1[10], cidade1[50];
    int populacao1, pontos_turisticos1;
    double area1, pib1;
    double densidade1, pib_per_capita1;

    char estado2, codigo2[10], cidade2[50];
    int populacao2, pontos_turisticos2;
    double area2, pib2;
    double densidade2, pib_per_capita2;

    printf("=== Cadastro da Carta 1 ===\n");
    printf("Digite o estado (A-H): ");
    scanf(" %c", &estado1);
    printf("Digite o codigo da carta (ex: A01): ");
    scanf("%s", codigo1);
    printf("Digite o nome da cidade: ");
    scanf("%s", cidade1);
    printf("Digite a populacao: ");
    scanf("%d", &populacao1);
    printf("Digite a area (km2): ");
    scanf("%lf", &area1);
    printf("Digite o PIB (em BILHOES): ");
    scanf("%lf", &pib1);
    pib1 = pib1 * 1000000000.0;   // <-- converte bilhoes para reais
    printf("Digite o numero de pontos turisticos: ");
    scanf("%d", &pontos_turisticos1);

    densidade1 = populacao1 / area1;
    pib_per_capita1 = pib1 / populacao1;

    printf("\n=== Cadastro da Carta 2 ===\n");
    printf("Digite o estado (A-H): ");
    scanf(" %c", &estado2);
    printf("Digite o codigo da carta (ex: A01): ");
    scanf("%s", codigo2);
    printf("Digite o nome da cidade: ");
    scanf("%s", cidade2);
    printf("Digite a populacao: ");
    scanf("%d", &populacao2);
    printf("Digite a area (km2): ");
    scanf("%lf", &area2);
    printf("Digite o PIB (em BILHOES): ");
    scanf("%lf", &pib2);
    pib2 = pib2 * 1000000000.0;   // <-- converte bilhoes para reais
    printf("Digite o numero de pontos turisticos: ");
    scanf("%d", &pontos_turisticos2);

    densidade2 = populacao2 / area2;
    pib_per_capita2 = pib2 / populacao2;

    printf("\n=============================\n");
    printf("Carta 1:\n");
    printf("Estado: %c\n", estado1);
    printf("Codigo: %s\n", codigo1);
    printf("Nome da Cidade: %s\n", cidade1);
    printf("Populacao: %d\n", populacao1);
    printf("Area: %.2lf km2\n", area1);
    printf("PIB: %.2lf reais\n", pib1);
    printf("Numero de Pontos Turisticos: %d\n", pontos_turisticos1);
    printf("Densidade Populacional: %.2lf hab/km2\n", densidade1);
    printf("PIB per Capita: %.2lf reais\n", pib_per_capita1);

    printf("\nCarta 2:\n");
    printf("Estado: %c\n", estado2);
    printf("Codigo: %s\n", codigo2);
    printf("Nome da Cidade: %s\n", cidade2);
    printf("Populacao: %d\n", populacao2);
    printf("Area: %.2lf km2\n", area2);
    printf("PIB: %.2lf reais\n", pib2);
    printf("Numero de Pontos Turisticos: %d\n", pontos_turisticos2);
    printf("Densidade Populacional: %.2lf hab/km2\n", densidade2);
    printf("PIB per Capita: %.2lf reais\n", pib_per_capita2);

    return 0;
}
