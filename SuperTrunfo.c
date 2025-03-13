#include <stdio.h>

int main (){
    // declaração das variaveis das duas cartas.
    char estado1[50], estado2[50];
    char codigo1[50], codigo2[50];
    char cidade1[50], cidade2[50];
    int populacao1, populacao2;
    float area1, area2;
    float pib1, pib2;
    int turisticos1, turisticos2;
    float denspop1, denspop2;
    float pibpercapita1, pibpercapita2;
    
    // solicitação dos dados das cartas.
    printf("*** Iremos criar duas cartas de Super Trunfo *** \n");
    printf("** Vamos começar pela Carta 1 ** \n");

    //Dados Carta 1
    printf("Digite o Estado da Carta 1: \n");
    scanf("%s", &estado1);

    printf("Digite o Código da Carta 1: \n");
    scanf("%s", &codigo1);

    printf("Digite o Nome da Cidade da Carta 1 (escreva o nome todo junto. Ex:SAOPAULO): \n");
    scanf("%s", &cidade1);

    printf("Digite a População da Carta 1: \n");
    scanf("%d", &populacao1);

    printf("Digite a Área da Carta 1, em Km2: \n");
    scanf("%f", &area1);

    printf("Digite o PIB da Carta 1, em bilhões de R$: \n");
    scanf("%f", &pib1);

    printf("Digite o Número de Pontos Turísticos da Carta 1: \n");
    scanf("%d", &turisticos1);

    // Dados Carta 2
    printf("** Agora criaremos a Carta 2 ** \n");

    printf("Digite o Estado da Carta 2: \n");
    scanf("%s", &estado2);

    printf("Digite o Código da Carta 2: \n");
    scanf("%s", &codigo2);

    printf("Digite o Nome da Cidade da Carta 2 (escreva o nome todo junto. Ex:SAOPAULO): \n");
    scanf("%s", &cidade2);

    printf("Digite a População da Carta 2: \n");
    scanf("%d", &populacao2);

    printf("Digite a Área da Carta 2, em Km2: \n");
    scanf("%f", &area2);

    printf("Digite o PIB da Carta 2, em bilhões de R$: \n");
    scanf("%f", &pib2);

    printf("Digite o Número de Pontos Turísticos da Carta 2: \n");
    scanf("%d", &turisticos2);
    
    // Cálculo da Densidade Populacional e PIB per Capita.
    denspop1 = (float)(populacao1 / area1);
    denspop2 = (float)(populacao2 / area2);

    pibpercapita1 = (float)((1000000000*pib1) / populacao1);
    pibpercapita2 = (float)((1000000000*pib2) / populacao2);

    // impressão dos dados organizados.
    printf("\n"); // pulando uma linha para melhor visualização.

    printf("CARTA 1: \n");
    printf("Estado: %s \n", estado1);
    printf("Código: %s \n", codigo1);
    printf("Nome da cidade: %s \n", cidade1);
    printf("População: %d habitantes \n", populacao1);
    printf("Área: %.2f Km2\n", area1);
    printf("PIB: %.2f bilhões de reais\n", pib1);
    printf("Número de pontos turísticos: %d \n", turisticos1);
    printf("Densidade Populacional: %.2f hab/Km2 \n", denspop1);
    printf("PIB per Capita: %.2f reais\n", pibpercapita1);

    printf("\n");

    printf("CARTA 2: \n");
    printf("Estado: %s \n", estado2);
    printf("Código: %s \n", codigo2);
    printf("Nome da cidade: %s \n", cidade2);
    printf("População: %d habitantes \n", populacao2);
    printf("Área: %.2f Km2 \n", area2);
    printf("PIB: %.2f bilhões de reais \n", pib2);
    printf("Número de pontos turísticos: %d \n", turisticos2);
    printf("Densidade Populacional: %.2f hab/Km2 \n", denspop2);
    printf("PIB per Capita: %.2f reais \n", pibpercapita2);

    return 0;
    
}