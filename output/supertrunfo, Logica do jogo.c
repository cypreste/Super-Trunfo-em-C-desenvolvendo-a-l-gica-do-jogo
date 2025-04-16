// Tema 2 - Super Trunfo em c: Desenvolvendo a Lógica do Jogo

#include <stdio.h>

int main() {
    // Carta 1
    char estado1;
    char codigo1[4];
    char nomeCidade1[80];
    unsigned long int populacao1;
    float area1;
    float pib1;
    int pontosTuristicos1;
    float densidade1;
    float pibPerCapita1;

    // Carta 2
    char estado2;
    char codigo2[4];
    char nomeCidade2[80];
    unsigned long int populacao2;
    float area2;
    float pib2;
    int pontosTuristicos2;
    float densidade2;
    float pibPerCapita2;

    // Entrada dos dados da primeira carta
    printf("Digite os dados da primeira carta:\n");
    printf("Estado (A-H): ");
    scanf(" %c", &estado1);
    printf("Código da Carta (ex: A01): ");
    scanf("%s", codigo1);
    printf("Nome da Cidade: ");
    scanf(" %[^\n]", nomeCidade1);
    printf("População: ");
    scanf("%lu", &populacao1); //Utilizando %lu para long unsigned int
    printf("Área (km²): ");
    scanf("%f", &area1);
    printf("PIB (bilhões de reais): ");
    scanf("%f", &pib1);
    printf("Número de Pontos Turísticos: ");
    scanf("%d", &pontosTuristicos1);
    // Entrada dos dados d segunda carta
    printf("\nDigite os dados da segunda carta:\n");
    printf("Estado (A-H): ");
    scanf(" %c", &estado2);
    printf("Código da Carta (ex: B02): ");
    scanf("%s", codigo2);
    printf("Nome da Cidade: ");
    scanf(" %[^\n]", nomeCidade2);
    printf("População: ");
    scanf("%lu", &populacao2); //Utilizando %lu para long unsigned int
    printf("Área (km²): ");
    scanf("%f", &area2);
    printf("PIB (bilhões de reais): ");
    scanf("%f", &pib2);
    printf("Número de Pontos Turísticos: ");
    scanf("%d", &pontosTuristicos2);

    // Cálculos ( Tema 2, desafio novato)
    
    densidade1 = populacao1 / area1; // Carta 1
    pibPerCapita1 = (pib1 * 1000000000) / populacao1;

    densidade2 = populacao2 / area2; // Carta 2
    pibPerCapita2 = (pib2 * 1000000000) / populacao2;

    // Comparações
    printf("\nComparação de Cartas:\n"); //Titulo

    // População
    printf("\n POPULACAO: \n");
    if (populacao1 > populacao2) {
        printf("Carta 1 venceu (%lu > %lu)\n", populacao1, populacao2);
    } else if (populacao1 < populacao2) {
        printf("Carta 2 venceu (%lu < %lu)\n", populacao1, populacao2);
    } else {
        printf("Empate na população (%lu = %lu)\n", populacao1, populacao2);
    }

    // Área
    printf("\n AREA: \n");
    if (area1 > area2) {
        printf("Carta 1 venceu (%.2f > %.2f)\n", area1, area2);
    } else if (area1 < area2) {
        printf("Carta 2 venceu (%.2f < %.2f)\n", area1, area2);
    } else {
        printf("Empate na área (%.2f = %.2f)\n", area1, area2);
    }

    // PIB
    printf("\n PIB: \n");
    if (pib1 > pib2) {
        printf("Carta 1 venceu (%.2f > %.2f)\n", pib1, pib2);
    } else if (pib1 < pib2) {
        printf("Carta 2 venceu (%.2f < %.2f)\n", pib1, pib2);
    } else {
        printf("Empate no PIB (%.2f = %.2f)\n", pib1, pib2);
    }

    // Pontos Turísticos
    printf("\n PONTOS TURISTICOS: \n");
    if (pontosTuristicos1 > pontosTuristicos2) {
        printf("Carta 1 venceu (%d > %d)\n", pontosTuristicos1, pontosTuristicos2);
    } else if (pontosTuristicos1 < pontosTuristicos2) {
        printf("Carta 2 venceu (%d < %d)\n", pontosTuristicos1, pontosTuristicos2);
    } else {
        printf("Empate nos Pontos Turísticos (%d = %d)\n", pontosTuristicos1, pontosTuristicos2);
    }

    // Densidade Populacional
    printf("\n DENSIDADE POPULACIONAL: \n");
    if (densidade1 < densidade2) { // menor vence
        printf("Carta 1 venceu (%.2f < %.2f)\n", densidade1, densidade2);
    } else if (densidade1 > densidade2) {
        printf("Carta 2 venceu (%.2f > %.2f)\n", densidade1, densidade2);
    } else {
        printf("Empate na Densidade Populacional (%.2f = %.2f)\n", densidade1, densidade2);
    }

    // PIB per Capita
    printf("\n PIB PER CAPITA: \n");
    if (pibPerCapita1 > pibPerCapita2) {
        printf("Carta 1 venceu (R$ %.2f > R$ %.2f)\n", pibPerCapita1, pibPerCapita2);
    } else if (pibPerCapita1 < pibPerCapita2) {
        printf("Carta 2 venceu (R$ %.2f < R$ %.2f)\n", pibPerCapita1, pibPerCapita2);
    } else {
        printf("Empate no PIB per Capita (R$ %.2f = R$ %.2f)\n", pibPerCapita1, pibPerCapita2);
    }

    return 0;
}



    /*
    Desafio anterior
    // Exibição dos dados da Carta 1
    printf("\n===== CARTA 1 =====\n");
    printf("Estado: %c\n", estado1);
    printf("Código: %s\n", codigo1);
    printf("Nome da Cidade: %s\n", nomeCidade1);
    printf("População: %u habitantes\n", populacao1); 
    printf("Área: %.2f km²\n", area1);
    printf("PIB: %.2f bilhões de reais\n", pib1);
    printf("Número de Pontos Turísticos: %d\n", pontosTuristicos1);
    printf("Densidade Populacional: %.2f habitantes/km²\n", densidade1); // Nivel aventureiro
    printf("PIB per Capita: R$ %.2f\n", pibPerCapita1);

    // Exibição dos dados da Carta 2
    printf("\n===== CARTA 2 =====\n");
    printf("Estado: %c\n", estado2);
    printf("Código: %s\n", codigo2);
    printf("Nome da Cidade: %s\n", nomeCidade2);
    printf("População: %u habitantes\n", populacao2);
    printf("Área: %.2f km²\n", area2);
    printf("PIB: %.2f bilhões de reais\n", pib2);
    printf("Número de Pontos Turísticos: %d\n", pontosTuristicos2);
    printf("Densidade Populacional: %.2f habitantes/km²\n", densidade2); // Nivel aventureiro
    printf("PIB per Capita: R$ %.2f\n", pibPerCapita2);

    // Exibição do Super Poder
    printf("\nComparação de Cartas:\n"); //Titulo 

    printf("População: Carta 1 venceu (%d)\n", populacao1 > populacao2);
    printf("Área: Carta 1 venceu (%d)\n", area1 > area2);
    printf("PIB: Carta 1 venceu (%d)\n", pib1 > pib2);
    printf("Pontos Turísticos: Carta 1 venceu (%d)\n", pontosTuristicos1 > pontosTuristicos2);
    printf("Densidade Populacional: Carta 1 venceu (%d)\n", densidade1 < densidade2); // menor vence
    printf("PIB per Capita: Carta 1 venceu (%d)\n", pibPerCapita1 > pibPerCapita2);
    printf("Super Poder: Carta 1 venceu (%d)\n", superPoder1 > superPoder2);
    return 0;
}
*/