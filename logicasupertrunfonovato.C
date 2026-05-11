#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 2 - Comparação das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de comparação de cartas de cidades. 
// Siga os comentários para implementar cada parte do desafio.

int main() {
    // Definição das variáveis para armazenar as propriedades das cidades
    // Variáveis da Carta 1
    char estado1[50], codigo1[10], cidade1[50];
    int populacao1, pontosTuristicos1;
    float area1, pib1, densidade1, pibPerCapita1;

    // Variáveis da Carta 2
    char estado2[50], codigo2[10], cidade2[50];
    int populacao2, pontosTuristicos2;
    float area2, pib2, densidade2, pibPerCapita2;

    // Cadastro das Cartas:
    // Implemente a lógica para solicitar ao usuário que insira os dados das cidades
    // utilizando a função scanf para capturar as entradas.
    
    printf("--- Cadastro da Carta 1 ---\n");
    printf("Estado: ");
    scanf("%s", estado1);
    printf("Código da carta: ");
    scanf("%s", codigo1);
    printf("Nome da cidade: ");
    scanf("%s", cidade1);
    printf("População: ");
    scanf("%d", &populacao1);
    printf("Área (em km²): ");
    scanf("%f", &area1);
    printf("PIB: ");
    scanf("%f", &pib1);
    printf("Número de pontos turísticos: ");
    scanf("%d", &pontosTuristicos1);

    printf("\n--- Cadastro da Carta 2 ---\n");
    printf("Estado: ");
    scanf("%s", estado2);
    printf("Código da carta: ");
    scanf("%s", codigo2);
    printf("Nome da cidade: ");
    scanf("%s", cidade2);
    printf("População: ");
    scanf("%d", &populacao2);
    printf("Área (em km²): ");
    scanf("%f", &area2);
    printf("PIB: ");
    scanf("%f", &pib2);
    printf("Número de pontos turísticos: ");
    scanf("%d", &pontosTuristicos2);

    // Cálculos exigidos pelo desafio (Mesmo que não sejam usados na comparação escolhida, devem ser calculados)
    densidade1 = (float)populacao1 / area1;
    pibPerCapita1 = pib1 / (float)populacao1;

    densidade2 = (float)populacao2 / area2;
    pibPerCapita2 = pib2 / (float)populacao2;

    // Comparação de Cartas:
    // Desenvolva a lógica de comparação entre duas cartas.
    // Utilize estruturas de decisão como if, if-else para comparar atributos como população, área, PIB, etc.
    // Atributo escolhido: População (vence a maior)

    printf("\n--- Comparação de Cartas (Atributo: População) ---\n");
    printf("Carta 1 - %s (%s): %d\n", cidade1, estado1, populacao1);
    printf("Carta 2 - %s (%s): %d\n", cidade2, estado2, populacao2);

    // Exibição dos Resultados:
    // Após realizar as comparações, exiba os resultados para o usuário.
    // Certifique-se de que o sistema mostre claramente qual carta venceu e com base em qual atributo.

    if (populacao1 > populacao2) {
        printf("Resultado: Carta 1 (%s) venceu!\n", cidade1);
    } else if (populacao2 > populacao1) {
        printf("Resultado: Carta 2 (%s) venceu!\n", cidade2);
    } else {
        printf("Resultado: Houve um empate entre %s e %s!\n", cidade1, cidade2);
    }

    return 0;
}