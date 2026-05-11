#include <stdio.h>
#include <string.h>

// Desafio Super Trunfo - Países
// Tema 2 - Comparação das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de comparação de cartas de cidades. 
// Siga os comentários para implementar cada parte do desafio.

int main() {
    // Definição das variáveis para armazenar as propriedades das cidades
    // Você pode utilizar o código do primeiro desafio
    char estado1[50], codigo1[50], cidade1[50];
    int populacao1, pontos1;
    float area1, pib1, densidade1;

    char estado2[50], codigo2[50], cidade2[50];
    int populacao2, pontos2;
    float area2, pib2, densidade2;

    int op1, op2;
    float val1_atr1 = 0, val2_atr1 = 0, val1_atr2 = 0, val2_atr2 = 0;
    char nome_atr1[50] = "", nome_atr2[50] = "";
    int atr1_eh_densidade = 0, atr2_eh_densidade = 0; // Flags para a regra invertida
    
    // Cadastro das Cartas:
    // Implemente a lógica para solicitar ao usuário que insira os dados das cidades
    // utilizando a função scanf para capturar as entradas.
    // utilize o código do primeiro desafio

    // Exemplo:
    // printf("Digite o código da cidade: ");
    // scanf("%s", codigo);
    // 
    // (Repita para cada propriedade)
    
    printf("\n--- Cadastro da Carta 1 ---\n");
    printf("Estado: ");
    scanf("%s", estado1);
    printf("Código da cidade: ");
    scanf("%s", codigo1);
    printf("Nome da cidade: ");
    scanf("%s", cidade1);
    printf("População: ");
    scanf("%d", &populacao1);
    printf("Área (km²): ");
    scanf("%f", &area1);
    printf("PIB: ");
    scanf("%f", &pib1);
    printf("Número de pontos turísticos: ");
    scanf("%d", &pontos1);
    densidade1 = (float)populacao1 / area1;

    printf("\n--- Cadastro da Carta 2 ---\n");
    printf("Estado: ");
    scanf("%s", estado2);
    printf("Código da cidade: ");
    scanf("%s", codigo2);
    printf("Nome da cidade: ");
    scanf("%s", cidade2);
    printf("População: ");
    scanf("%d", &populacao2);
    printf("Área (km²): ");
    scanf("%f", &area2);
    printf("PIB: ");
    scanf("%f", &pib2);
    printf("Número de pontos turísticos: ");
    scanf("%d", &pontos2);
    densidade2 = (float)populacao2 / area2;

    // Comparação de Cartas:
    // Desenvolva a lógica de comparação entre duas cartas.
    // Utilize estruturas de decisão como if, if-else para comparar atributos como população, área, PIB, etc.

    // Exemplo:
    // if (populacaoA > populacaoB) {
    //     printf("Cidade 1 tem maior população.\n");
    // } else {
    //     printf("Cidade 2 tem maior população.\n");
    // }
    
    printf("\n--- Escolha o 1º Atributo para Comparar ---\n");
    printf("1 - População\n2 - Área\n3 - PIB\n4 - Pontos Turísticos\n5 - Densidade Demográfica\n");
    printf("Opção: ");
    scanf("%d", &op1);

    switch (op1) {
        case 1: val1_atr1 = (float)populacao1; val2_atr1 = (float)populacao2; strcpy(nome_atr1, "População"); break;
        case 2: val1_atr1 = area1; val2_atr1 = area2; strcpy(nome_atr1, "Área"); break;
        case 3: val1_atr1 = pib1; val2_atr1 = pib2; strcpy(nome_atr1, "PIB"); break;
        case 4: val1_atr1 = (float)pontos1; val2_atr1 = (float)pontos2; strcpy(nome_atr1, "Pontos Turísticos"); break;
        case 5: val1_atr1 = densidade1; val2_atr1 = densidade2; strcpy(nome_atr1, "Densidade"); atr1_eh_densidade = 1; break;
        default: printf("Opção inválida!\n"); return 1;
    }

    printf("\n--- Escolha o 2º Atributo para Comparar ---\n");
    if (op1 != 1) printf("1 - População\n");
    if (op1 != 2) printf("2 - Área\n");
    if (op1 != 3) printf("3 - PIB\n");
    if (op1 != 4) printf("4 - Pontos Turísticos\n");
    if (op1 != 5) printf("5 - Densidade Demográfica\n");
    printf("Opção: ");
    scanf("%d", &op2);

    if (op1 == op2) {
        printf("Erro: Atributos iguais selecionados.\n");
        return 1;
    }

    switch (op2) {
        case 1: val1_atr2 = (float)populacao1; val2_atr2 = (float)populacao2; strcpy(nome_atr2, "População"); break;
        case 2: val1_atr2 = area1; val2_atr2 = area2; strcpy(nome_atr2, "Área"); break;
        case 3: val1_atr2 = pib1; val2_atr2 = pib2; strcpy(nome_atr2, "PIB"); break;
        case 4: val1_atr2 = (float)pontos1; val2_atr2 = (float)pontos2; strcpy(nome_atr2, "Pontos Turísticos"); break;
        case 5: val1_atr2 = densidade1; val2_atr2 = densidade2; strcpy(nome_atr2, "Densidade"); atr2_eh_densidade = 1; break;
        default: printf("Opção inválida!\n"); return 1;
    }

    // Exibição dos Resultados:
    // Após realizar as comparações, exiba os resultados para o usuário.
    // Certifique-se de que o sistema mostre claramente qual carta venceu e com base em qual atributo.

    // Exemplo:
    // printf("A cidade vencedora é: %s\n", cidadeVencedora);
    
    printf("\n===================================\n");
    printf("        RESULTADO DO DUELO         \n");
    printf("===================================\n");

    // Lógica do Vencedor 1 (Ternário tratando a Densidade)
    printf("Atributo 1: %s\n", nome_atr1);
    printf("%s: %.2f | %s: %.2f\n", cidade1, val1_atr1, cidade2, val2_atr1);
    char *vencedor1 = (val1_atr1 == val2_atr1) ? "Empate" : (atr1_eh_densidade ? (val1_atr1 < val2_atr1 ? cidade1 : cidade2) : (val1_atr1 > val2_atr1 ? cidade1 : cidade2));
    printf("Vencedor Atributo 1: %s\n\n", vencedor1);

    // Lógica do Vencedor 2 (Ternário tratando a Densidade)
    printf("Atributo 2: %s\n", nome_atr2);
    printf("%s: %.2f | %s: %.2f\n", cidade1, val1_atr2, cidade2, val2_atr2);
    char *vencedor2 = (val1_atr2 == val2_atr2) ? "Empate" : (atr2_eh_densidade ? (val1_atr2 < val2_atr2 ? cidade1 : cidade2) : (val1_atr2 > val2_atr2 ? cidade1 : cidade2));
    printf("Vencedor Atributo 2: %s\n\n", vencedor2);

    // Soma final dos atributos
    float soma1 = val1_atr1 + val1_atr2;
    float soma2 = val2_atr1 + val2_atr2;
    
    printf("--- SOMA DOS ATRIBUTOS ---\n");
    printf("Soma %s: %.2f\n", cidade1, soma1);
    printf("Soma %s: %.2f\n", cidade2, soma2);

    // O "Exemplo" do professor pede o formato exato
    if (soma1 > soma2) {
        printf("\nA cidade vencedora é: %s\n", cidade1);
    } else if (soma2 > soma1) {
        printf("\nA cidade vencedora é: %s\n", cidade2);
    } else {
        printf("\nO duelo terminou em Empate!\n");
    }

    return 0;
}