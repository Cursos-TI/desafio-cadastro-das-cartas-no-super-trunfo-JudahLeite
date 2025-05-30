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
    int opcao1, opcao2;
    float atributo11, atributo12, atributo21, atributo22; // use float aqui para evitar problemas com float
    float soma1, soma2;
   
    // solicitação dos dados das cartas.
    printf("*** Iremos criar duas cartas de Super Trunfo *** \n");
    printf("** Vamos começar pela Carta 1 ** \n");

    //Dados Carta 1
    printf("Digite o Estado da Carta 1: \n");
    scanf("%s", estado1);

    printf("Digite o Código da Carta 1: \n");
    scanf("%s", codigo1);

    printf("Digite o Nome da Cidade da Carta 1 (escreva o nome todo junto. Ex:SAOPAULO): \n");
    scanf("%s", cidade1);

    printf("Digite a População da Carta 1: \n");
    scanf("%lu", &populacao1);

    printf("Digite a Área da Carta 1, em Km2: \n");
    scanf("%f", &area1);

    printf("Digite o PIB da Carta 1, em bilhões de R$: \n");
    scanf("%f", &pib1);

    printf("Digite o Número de Pontos Turísticos da Carta 1: \n");
    scanf("%d", &turisticos1);

    // Dados Carta 2
    printf("** Agora criaremos a Carta 2 ** \n");

    printf("Digite o Estado da Carta 2: \n");
    scanf("%s", estado2);

    printf("Digite o Código da Carta 2: \n");
    scanf("%s", codigo2);

    printf("Digite o Nome da Cidade da Carta 2 (escreva o nome todo junto. Ex:SAOPAULO): \n");
    scanf("%s", cidade2);

    printf("Digite a População da Carta 2: \n");
    scanf("%lu", &populacao2);

    printf("Digite a Área da Carta 2, em Km2: \n");
    scanf("%f", &area2);

    printf("Digite o PIB da Carta 2, em bilhões de R$: \n");
    scanf("%f", &pib2);

    printf("Digite o Número de Pontos Turísticos da Carta 2: \n");
    scanf("%d", &turisticos2);
    
    // Cálculo da Densidade Populacional e PIB per Capita.
    denspop1 = populacao1 / area1;
    denspop2 = populacao2 / area2;

    pibpercapita1 = pib1 * 1e9 / populacao1;  // PIB em bilhões, multiplicar por 1e9 para reais
    pibpercapita2 = pib2 * 1e9 / populacao2;

    // Cálculo do Super Poder.

    superpoder1 = populacao1 + area1 + (pib1 * 1e9) + turisticos1 + pibpercapita1 + (1/denspop1);
    superpoder2 = populacao2 + area2 + (pib2 * 1e9) + turisticos2 + pibpercapita2 + (1/denspop2);
    
    
    // Menu para escolha do PRIMEIRO atributo:

    printf("*** Escolha o primeiro atributo ***\n");
    printf("1. Nome das Cidades (Imprime os atributos das duas cartas).\n");
    printf("2. População\n");
    printf("3. Área\n");
    printf("4. PIB\n");
    printf("5. Número de Pontos Turísticos\n");
    printf("6. Densidade Demográfica\n");
    scanf("%d", &opcao1);

    switch (opcao1) {
    case 1:
        printf("** ESSAS SÃO AS DUAS CARTAS CADASTRADAS:\n");
        printf("CARTA 1: \n");
        printf("Estado: %s \n", estado1);
        printf("Código: %s \n", codigo1);
        printf("Nome da cidade: %s \n", cidade1);
        printf("População: %lu habitantes \n", populacao1);
        printf("Área: %.2f Km2\n", area1);
        printf("PIB: R$ %.2f \n", pib1);
        printf("Número de pontos turísticos: %d \n", turisticos1);
        printf("Densidade Populacional: %.2f hab/Km2 \n", denspop1);
        printf("PIB per Capita: R$ %.2f por pessoa\n", pibpercapita1);
        printf("Super poder: %.2f \n", superpoder1);
        printf("\n"); //pulando uma linha para melhor visualização.
        printf("CARTA 2: \n");
        printf("Estado: %s \n", estado2);
        printf("Código: %s \n", codigo2);
        printf("Nome da cidade: %s \n", cidade2);
        printf("População: %lu habitantes \n", populacao2);
        printf("Área: %.2f Km2 \n", area2);
        printf("PIB: R$ %.2f \n", pib2);
        printf("Número de pontos turísticos: %d \n", turisticos2);
        printf("Densidade Populacional: %.2f hab/Km2 \n", denspop2);
        printf("PIB per Capita: R$ %.2f por pessoa \n", pibpercapita2);
        printf("Super poder: %.2f \n", superpoder2);

        break;

    case 2:
        if(populacao1 > populacao2){
            printf("CARTA 1: %s, CARTA 2: %s\n", cidade1, cidade2);
            printf("Atributo escolhido para batalha: POPULAÇÃO\n");
            printf("CARTA 1: %lu habitantes, CARTA 2: %lu habitantes\n", populacao1, populacao2);
            printf("CARTA 1 Venceu!\n");
            atributo11 = populacao1;
            atributo21 = populacao2;
        } else if (populacao1 < populacao2){
            printf("CARTA 1: %s, CARTA 2: %s\n", cidade1, cidade2);
            printf("Atributo escolhido para batalha: POPULAÇÃO\n");
            printf("CARTA 1: %lu habitantes, CARTA 2: %lu habitantes\n", populacao1, populacao2);
            printf("CARTA 2 Venceu!\n");
            atributo11 = populacao1;
            atributo21 = populacao2;
        } else {
            printf("CARTA 1: %s, CARTA 2: %s\n", cidade1, cidade2);
            printf("Atributo escolhido para batalha: POPULAÇÃO\n");
            printf("CARTA 1: %lu habitantes, CARTA 2: %lu habitantes\n",populacao1, populacao2);
            printf("Empate!\n");
            atributo11 = populacao1;
            atributo21 = populacao2;
        }
        break;

    case 3:
        if(area1 > area2){
            printf("CARTA 1: %s, CARTA 2: %s\n", cidade1, cidade2);
            printf("Atributo escolhido para batalha: ÁREA\n");
            printf("CARTA 1: %.2f Km2, CARTA 2: %.2f Km2\n", area1, area2);
            printf("CARTA 1 Venceu!\n");
            atributo11 = area1;
            atributo21 = area2;
        } else if (area1 < area2){
            printf("CARTA 1: %s, CARTA 2: %s\n", cidade1, cidade2);
            printf("Atributo escolhido para batalha: ÁREA\n");
            printf("CARTA 1: %.2f Km2, CARTA 2: %.2f Km2\n", area1, area2);
            printf("CARTA 2 Venceu!\n");
            atributo11 = area1;
            atributo21 = area2;
        } else {
             printf("CARTA 1: %s, CARTA 2: %s\n", cidade1, cidade2);
            printf("Atributo escolhido para batalha: ÁREA\n");
            printf("CARTA 1: %.2f Km2, CARTA 2: %.2f Km2\n",area1, area2);
            printf("Empate!\n");
            atributo11 = area1;
            atributo21 = area2;
        }
        break;

    case 4:
        if(pib1 > pib2){
            printf("CARTA 1: %s, CARTA 2: %s\n", cidade1, cidade2);
            printf("Atributo escolhido para batalha: PIB\n");
            printf("CARTA 1: R$ %.2f, CARTA 2: R$ %.2f\n", pib1, pib2);
            printf("CARTA 1 Venceu!\n");
            atributo11 = pib1;
            atributo21 = pib2;
        } else if (pib1 < pib2){
            printf("CARTA 1: %s, CARTA 2: %s\n", cidade1, cidade2);
            printf("Atributo escolhido para batalha: PIB\n");
            printf("CARTA 1: R$ %.2f, CARTA 2: R$ %.2f\n", pib1, pib2);
            printf("CARTA 2 Venceu!\n");
            atributo11 = pib1;
            atributo21 = pib2;
        } else {
            printf("CARTA 1: %s, CARTA 2: %s\n", cidade1, cidade2);
            printf("Atributo escolhido para batalha: PIB\n");
            printf("CARTA 1:R$ %.2f, CARTA 2:R$ %.2f\n",pib1, pib2);
            printf("Empate!\n");
            atributo11 = pib1;
            atributo21 = pib2;
        }
        break;

    case 5:
        if(turisticos1 > turisticos2){
            printf("CARTA 1: %s, CARTA 2: %s\n", cidade1, cidade2);
            printf("Atributo escolhido para batalha: NÚMERO DE PONTOS TURÍSTICOS\n");
            printf("CARTA 1: %d pontos, CARTA 2: %d pontos\n", turisticos1, turisticos2);
            printf("CARTA 1 Venceu!\n");
            atributo11 = turisticos1;
            atributo21 = turisticos2;
        } else if (turisticos1 < turisticos2){
            printf("CARTA 1: %s, CARTA 2: %s\n", cidade1, cidade2);
            printf("Atributo escolhido para batalha: NÚMERO DE PONTOS TURÍSTICOS\n");
            printf("CARTA 1: %d pontos, CARTA 2: %d pontos\n", turisticos1, turisticos2);
            printf("CARTA 2 Venceu!\n");
            atributo11 = turisticos1;
            atributo21 = turisticos2;
        } else {
            printf("CARTA 1: %s, CARTA 2: %s\n", cidade1, cidade2);
            printf("Atributo escolhido para batalha: NÚMERO DE PONTOS TURÍSTICOS\n");
            printf("CARTA 1: %d, CARTA 2: %d\n",turisticos1, turisticos2);
            printf("Empate!\n");
            atributo11 = turisticos1;
            atributo21 = turisticos2;
        }
        break;

    case 6:
        if(denspop1 < denspop2){  // menor densidade ganha?
            printf("CARTA 1: %s, CARTA 2: %s\n", cidade1, cidade2);
            printf("Atributo escolhido para batalha: DENSIDADE DEMOGRÁFICA\n");
            printf("CARTA 1: %.2f hab/km2, CARTA 2: %.2f hab/km2\n", denspop1, denspop2);
            printf("CARTA 1 Venceu!\n");
            atributo11 = denspop1;
            atributo21 = denspop2;
        } else if (denspop1 > denspop2){
            printf("CARTA 1: %s, CARTA 2: %s\n", cidade1, cidade2);
            printf("Atributo escolhido para batalha: DENSIDADE DEMOGRÁFICA\n");
            printf("CARTA 1: %.2f hab/km2, CARTA 2: %.2f hab/km2\n", denspop1, denspop2);
            printf("CARTA 2 Venceu!\n");
            atributo11 = denspop1;
            atributo21 = denspop2;
        } else {
            printf("CARTA 1: %s, CARTA 2: %s\n", cidade1, cidade2);
            printf("Atributo escolhido para batalha: DENSIDADE POPULACIONAL\n");
            printf("CARTA 1: %f hab/Km2, CARTA 2: %f hab/Km2\n",denspop1, denspop2);
            printf("Empate!\n");
            atributo11 = denspop1;
            atributo21 = denspop2;
        }
        break;
    }

    printf("\n");

    // Segundo atributo para batalha
    printf("*** Escolha o segundo atributo ***\n");
    printf("1. Nome das Cidades (Imprime os atributos das duas cartas).\n");
    printf("2. População\n");
    printf("3. Área\n");
    printf("4. PIB\n");
    printf("5. Número de Pontos Turísticos\n");
    printf("6. Densidade Demográfica\n");
    scanf("%d", &opcao2);

    if (opcao1 == opcao2) {
        printf("Você escolheu o mesmo atributo! Reinicie o Jogo!\n");
    } else {
    switch (opcao2) {
    case 1:
        printf("** ESSAS SÃO AS DUAS CARTAS CADASTRADAS:\n");
        printf("CARTA 1: \n");
        printf("Estado: %s \n", estado1);
        printf("Código: %s \n", codigo1);
        printf("Nome da cidade: %s \n", cidade1);
        printf("População: %lu habitantes \n", populacao1);
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
        printf("População: %lu habitantes \n", populacao2);
        printf("Área: %.2f Km2 \n", area2);
        printf("PIB: R$ %.2f \n", pib2);
        printf("Número de pontos turísticos: %d \n", turisticos2);
        printf("Densidade Populacional: %.2f hab/Km2 \n", denspop2);
        printf("PIB per Capita: R$ %.2f por pessoa \n", pibpercapita2);
        printf("Super poder: %.2f \n", superpoder2);

        break;

    case 2:
        if(populacao1 > populacao2){
            printf("CARTA 1: %s, CARTA 2: %s\n", cidade1, cidade2);
            printf("Atributo escolhido para batalha: POPULAÇÃO\n");
            printf("CARTA 1: %lu habitantes, CARTA 2: %lu habitantes\n", populacao1, populacao2);
            printf("CARTA 1 Venceu!\n");
            atributo12 = populacao1;
            atributo22 = populacao2;
        } else if (populacao1 < populacao2){
            printf("CARTA 1: %s, CARTA 2: %s\n", cidade1, cidade2);
            printf("Atributo escolhido para batalha: POPULAÇÃO\n");
            printf("CARTA 1: %lu habitantes, CARTA 2: %lu habitantes\n", populacao1, populacao2);
            printf("CARTA 2 Venceu!\n");
            atributo12 = populacao1;
            atributo22 = populacao2;
        } else {
            printf("CARTA 1: %s, CARTA 2: %s\n", cidade1, cidade2);
            printf("Atributo escolhido para batalha: POPULAÇÃO\n");
            printf("CARTA 1: %lu habitantes, CARTA 2: %lu habitantes\n",populacao1, populacao2);
            printf("Empate!\n");
            atributo12 = populacao1;
            atributo22 = populacao2;
        }
        break;

    case 3:
        if(area1 > area2){
            printf("CARTA 1: %s, CARTA 2: %s\n", cidade1, cidade2);
            printf("Atributo escolhido para batalha: ÁREA\n");
            printf("CARTA 1: %.2f Km2, CARTA 2: %.2f Km2\n", area1, area2);
            printf("CARTA 1 Venceu!\n");
            atributo12 = area1;
            atributo22 = area2;
        } else if (area1 < area2){
            printf("CARTA 1: %s, CARTA 2: %s\n", cidade1, cidade2);
            printf("Atributo escolhido para batalha: ÁREA\n");
            printf("CARTA 1: %.2f Km2, CARTA 2: %.2f Km2\n", area1, area2);
            printf("CARTA 2 Venceu!\n");
            atributo12 = area1;
            atributo22 = area2;
        } else {
            printf("CARTA 1: %s, CARTA 2: %s\n", cidade1, cidade2);
            printf("Atributo escolhido para batalha: ÁREA\n");
            printf("CARTA 1: %.2f Km2, CARTA 2: %.2f Km2\n",area1, area2);
            printf("Empate!\n");
            atributo12 = area1;
            atributo22 = area2;
        }
        break;

    case 4:
        if(pib1 > pib2){
            printf("CARTA 1: %s, CARTA 2: %s\n", cidade1, cidade2);
            printf("Atributo escolhido para batalha: PIB\n");
            printf("CARTA 1: R$ %.2f, CARTA 2: R$ %.2f\n", pib1, pib2);
            printf("CARTA 1 Venceu!\n");
            atributo12 = pib1;
            atributo22 = pib2;
        } else if (pib1 < pib2){
            printf("CARTA 1: %s, CARTA 2: %s\n", cidade1, cidade2);
            printf("Atributo escolhido para batalha: PIB\n");
            printf("CARTA 1: R$ %.2f, CARTA 2: R$ %.2f\n", pib1, pib2);
            printf("CARTA 2 Venceu!\n");
            atributo12 = pib1;
            atributo22 = pib2;
        } else {
            printf("CARTA 1: %s, CARTA 2: %s\n", cidade1, cidade2);
            printf("Atributo escolhido para batalha: PIB\n");
            printf("CARTA 1:R$ %.2f, CARTA 2:R$ %.2f\n",pib1, pib2);
            printf("Empate!\n");
            atributo12 = pib1;
            atributo22 = pib2;
        }
        break;

    case 5:
        if(turisticos1 > turisticos2){
            printf("CARTA 1: %s, CARTA 2: %s\n", cidade1, cidade2);
            printf("Atributo escolhido para batalha: NÚMERO DE PONTOS TURÍSTICOS\n");
            printf("CARTA 1: %d pontos, CARTA 2: %d pontos\n", turisticos1, turisticos2);
            printf("CARTA 1 Venceu!\n");
            atributo12 = turisticos1;
            atributo22 = turisticos2;
        } else if (turisticos1 < turisticos2){
            printf("CARTA 1: %s, CARTA 2: %s\n", cidade1, cidade2);
            printf("Atributo escolhido para batalha: NÚMERO DE PONTOS TURÍSTICOS\n");
            printf("CARTA 1: %d pontos, CARTA 2: %d pontos\n", turisticos1, turisticos2);
            printf("CARTA 2 Venceu!\n");
            atributo12 = turisticos1;
            atributo22 = turisticos2;
        } else {
            printf("CARTA 1: %s, CARTA 2: %s\n", cidade1, cidade2);
            printf("Atributo escolhido para batalha: NÚMERO DE PONTOS TURÍSTICOS\n");
            printf("CARTA 1: %d, CARTA 2: %d\n",turisticos1, turisticos2);
            printf("Empate!\n");
            atributo12 = turisticos1;
            atributo22 = turisticos2;
        }
        break;

    case 6:
        if(denspop1 < denspop2){
            printf("CARTA 1: %s, CARTA 2: %s\n", cidade1, cidade2);
            printf("Atributo escolhido para batalha: DENSIDADE DEMOGRÁFICA\n");
            printf("CARTA 1: %.2f hab/km2, CARTA 2: %.2f hab/km2\n", denspop1, denspop2);
            printf("CARTA 1 Venceu!\n");
            atributo12 = denspop1;
            atributo22 = denspop2;
        } else if (denspop1 > denspop2){
            printf("CARTA 1: %s, CARTA 2: %s\n", cidade1, cidade2);
            printf("Atributo escolhido para batalha: DENSIDADE DEMOGRÁFICA\n");
            printf("CARTA 1: %.2f hab/km2, CARTA 2: %.2f hab/km2\n", denspop1, denspop2);
            printf("CARTA 2 Venceu!\n");
            atributo12 = denspop1;
            atributo22 = denspop2;
        } else {
            printf("CARTA 1: %s, CARTA 2: %s\n", cidade1, cidade2);
            printf("Atributo escolhido para batalha: DENSIDADE POPULACIONAL\n");
            printf("CARTA 1: %f hab/Km2, CARTA 2: %f hab/Km2\n",denspop1, denspop2);
            printf("Empate!\n");
            atributo12 = denspop1;
            atributo22 = denspop2;
        }
        break;
    }
    // Soma dos dois atributos para definir o vencedor final.
    soma1 = atributo11 + atributo12;
    soma2 = atributo21 + atributo22;

    printf("\n");

    if(soma1 > soma2){
        printf("Parabéns! CARTA 1 venceu!\n");
        printf("Soma da Carta 1 = %.2f\n", soma1);
        printf("Soma da Carta 2 = %.2f\n", soma2);
    } else if (soma2 > soma1){
        printf("Parabéns! CARTA 2 venceu!\n");
            printf("Soma da Carta 2 = %.2f\n", soma2);
            printf("Soma da Carta 1 = %.2f\n", soma1);
    } else {
        printf("EMPATE!\n");
            printf("Soma da Carta 1 = %.2f\n", soma1);
            printf("Soma da Carta 2 = %.2f\n", soma2);
    }
}
    return 0;
}
    
