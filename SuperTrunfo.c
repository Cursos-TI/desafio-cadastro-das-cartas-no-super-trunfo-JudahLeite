#include <stdio.h>

int main (){
    // declaração das variaveis das duas cartas.
    char estado1[50], estado2[50];
    char codigo1[50], codigo2[50];
    char cidade1[50], cidade2[50];
    unsigned long int populacao1, populacao2;
    float area1, area2;
    float pib1, pib2;
    int turisticos1, turisticos2;
    float denspop1, denspop2;
    float pibpercapita1, pibpercapita2;
    float superpoder1, superpoder2;
    int resultadopop, resultadoarea, resultadopib, resultadoturistico;
    int resultadodensidade, resultadopibpercapita, resultadosuperpoder;

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

    pibpercapita1 = (float)((pib1) / populacao1);
    pibpercapita2 = (float)((pib2) / populacao2);

    // Cálculo do Super Poder.

    superpoder1 = populacao1 + area1 + pib1 + turisticos1 + pibpercapita1 + (1/denspop1);
    superpoder2 = populacao2 + area2 + pib2 + turisticos2 + pibpercapita2 + (1/denspop2);

    // Comparando os atributos das duas cartas.
    resultadopop = populacao1>populacao2;
    resultadoarea = area1>area2;
    resultadopib = pib1>pib2;
    resultadoturistico = turisticos1>turisticos2;
    resultadodensidade = denspop1<denspop2;
    resultadopibpercapita = pibpercapita1>pibpercapita2;  
    resultadosuperpoder = superpoder1>superpoder2;

    // impressão dos dados organizados.
    printf("\n"); // pulando uma linha para melhor visualização.

    printf("CARTA 1: \n");
    printf("Estado: %s \n", estado1);
    printf("Código: %s \n", codigo1);
    printf("Nome da cidade: %s \n", cidade1);
    printf("População: %d habitantes \n", populacao1);
    printf("Área: %.2f Km2\n", area1);
    printf("PIB: R$ %.2f \n", pib1);
    printf("Número de pontos turísticos: %d \n", turisticos1);
    printf("Densidade Populacional: %.2f hab/Km2 \n", denspop1);
    printf("PIB per Capita: R$ %.2f por pessoa\n", pibpercapita1);
    printf("Super poder: %.2f \n", superpoder1);

    printf("\n");

    printf("CARTA 2: \n");
    printf("Estado: %s \n", estado2);
    printf("Código: %s \n", codigo2);
    printf("Nome da cidade: %s \n", cidade2);
    printf("População: %d habitantes \n", populacao2);
    printf("Área: %.2f Km2 \n", area2);
    printf("PIB: R$ %.2f \n", pib2);
    printf("Número de pontos turísticos: %d \n", turisticos2);
    printf("Densidade Populacional: %.2f hab/Km2 \n", denspop2);
    printf("PIB per Capita: R$ %.2f por pessoa \n", pibpercapita2);
    printf("Super poder: %.2f \n", superpoder2);

    printf("\n");
    // Iimpressão das comparações dos atributos das cartas.
    printf("População: Carta 1 venceu (%d)\n", resultadopop);
    printf("Área: Carta 1 venceu (%d)\n", resultadoarea);
    printf("PIB: Carta 1 venceu (%d) \n", resultadopib);
    printf("Pontos Turísticos: Carta 1 venceu (%d)\n", resultadoturistico);
    printf("Densidade Populacional: Carta 2 venceu (%d) \n", resultadodensidade);
    printf("PIB per capita: Carta 1 venceu (%d) \n", resultadopibpercapita);
    printf("Super Poder: Carta 1 venceu (%d) \n ", resultadosuperpoder);

    return 0;
    
}