#include <stdio.h>

int main() {
    // Declaração das variáveis para a Carta 1
    char nome1[50];
    int populacao1, pontos1;
    float area1, pib1, densidade1;

    // Declaração das variáveis para a Carta 2
    char nome2[50];
    int populacao2, pontos2;
    float area2, pib2, densidade2;

    int opcao;

    // --- CADASTRO DA CARTA 1 ---
    printf("--- Cadastro da Carta 1 ---\n");
    printf("Nome do país: ");
    scanf("%s", nome1);
    printf("População: ");
    scanf("%d", &populacao1);
    printf("Área (km²): ");
    scanf("%f", &area1);
    printf("PIB: ");
    scanf("%f", &pib1);
    printf("Número de pontos turísticos: ");
    scanf("%d", &pontos1);

    // Cálculo da densidade demográfica 1
    densidade1 = (float)populacao1 / area1;

    // --- CADASTRO DA CARTA 2 ---
    printf("\n--- Cadastro da Carta 2 ---\n");
    printf("Nome do país: ");
    scanf("%s", nome2);
    printf("População: ");
    scanf("%d", &populacao2);
    printf("Área (km²): ");
    scanf("%f", &area2);
    printf("PIB: ");
    scanf("%f", &pib2);
    printf("Número de pontos turísticos: ");
    scanf("%d", &pontos2);

    // Cálculo da densidade demográfica 2
    densidade2 = (float)populacao2 / area2;

    // --- MENU INTERATIVO ---
    printf("\n===================================\n");
    printf("   SUPER TRUNFO - MENU DE COMBATE  \n");
    printf("===================================\n");
    printf("1 - População\n");
    printf("2 - Área\n");
    printf("3 - PIB\n");
    printf("4 - Pontos Turísticos\n");
    printf("5 - Densidade Demográfica\n");
    printf("===================================\n");
    printf("Escolha o atributo para comparar (1 a 5): ");
    scanf("%d", &opcao);

    printf("\n--- RESULTADO DA COMPARAÇÃO ---\n");

    // --- LÓGICA DE COMPARAÇÃO COM SWITCH E IF-ELSE ANINHADOS ---
    switch (opcao) {
        case 1:
            printf("Atributo: População\n");
            printf("Carta 1 (%s): %d\n", nome1, populacao1);
            printf("Carta 2 (%s): %d\n", nome2, populacao2);
            
            // Estrutura de decisão aninhada (if-else dentro de if-else)
            if (populacao1 > populacao2) {
                printf("Resultado: A carta 1 (%s) venceu!\n", nome1);
            } else {
                if (populacao2 > populacao1) {
                    printf("Resultado: A carta 2 (%s) venceu!\n", nome2);
                } else {
                    printf("Resultado: Empate!\n");
                }
            }
            break;

        case 2:
            printf("Atributo: Área\n");
            printf("Carta 1 (%s): %.2f\n", nome1, area1);
            printf("Carta 2 (%s): %.2f\n", nome2, area2);
            
            if (area1 > area2) {
                printf("Resultado: A carta 1 (%s) venceu!\n", nome1);
            } else {
                if (area2 > area1) {
                    printf("Resultado: A carta 2 (%s) venceu!\n", nome2);
                } else {
                    printf("Resultado: Empate!\n");
                }
            }
            break;

        case 3:
            printf("Atributo: PIB\n");
            printf("Carta 1 (%s): %.2f\n", nome1, pib1);
            printf("Carta 2 (%s): %.2f\n", nome2, pib2);
            
            if (pib1 > pib2) {
                printf("Resultado: A carta 1 (%s) venceu!\n", nome1);
            } else {
                if (pib2 > pib1) {
                    printf("Resultado: A carta 2 (%s) venceu!\n", nome2);
                } else {
                    printf("Resultado: Empate!\n");
                }
            }
            break;

        case 4:
            printf("Atributo: Pontos Turísticos\n");
            printf("Carta 1 (%s): %d\n", nome1, pontos1);
            printf("Carta 2 (%s): %d\n", nome2, pontos2);
            
            if (pontos1 > pontos2) {
                printf("Resultado: A carta 1 (%s) venceu!\n", nome1);
            } else {
                if (pontos2 > pontos1) {
                    printf("Resultado: A carta 2 (%s) venceu!\n", nome2);
                } else {
                    printf("Resultado: Empate!\n");
                }
            }
            break;

        case 5:
            printf("Atributo: Densidade Demográfica\n");
            printf("Carta 1 (%s): %.2f\n", nome1, densidade1);
            printf("Carta 2 (%s): %.2f\n", nome2, densidade2);
            
            // Regra invertida: vence o MENOR valor
            if (densidade1 < densidade2) {
                printf("Resultado: A carta 1 (%s) venceu!\n", nome1);
            } else {
                if (densidade2 < densidade1) {
                    printf("Resultado: A carta 2 (%s) venceu!\n", nome2);
                } else {
                    printf("Resultado: Empate!\n");
                }
            }
            break;

        default:
            // Tratamento para opções inválidas
            printf("Opção inválida! Por favor, execute o programa novamente e escolha um número de 1 a 5.\n");
            break;
    }

    return 0;
}