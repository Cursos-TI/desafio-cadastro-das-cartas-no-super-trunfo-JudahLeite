#include <stdio.h>

int main (){
    // declaração das variaveis das duas cartas.
    //Carta 1
    char estado1 [50];
    char codigo1 [50];
    char cidade1 [50];
    int populacao1;
    float area1;
    float pib1;
    int turisticos1;

    //Carta 2
    char estado2 [50];
    char codigo2 [50];
    char cidade2 [50];
    int populacao2;
    float area2;
    float pib2;
    int turisticos2;

    // solicitação dos dados das cartas.
    printf("Iremos criar duas cartas de Super Trunfo \n");
    printf("Vamos começar pela Carta 1 \n");

    //Dados Carta 1
    printf("Digite o Estado da Carta 1: \n");
    scanf("%s", &estado1);

    printf("Digite o Código da Carta 1: \n");
    scanf("%s", &codigo1);

    printf("Digite o Nome da Cidade da Carta 1: \n");
    scanf("%s", &cidade1);

    printf("Digite a População da Carta 1: \n");
    scanf("%d", &populacao1);

    printf("Digite a Área da Carta 1: \n");
    scanf("%f", &area1);

    printf("Digite o PIB da Carta 1: \n");
    scanf("%f", &pib1);

    printf("Digite o Número de Pontos Turísticos da Carta 1: \n");
    scanf("%d", &turisticos1);

    // Dados Carta 2
    printf("Agora criaremos a Carta 2 \n");

    printf("Digite o Estado da Carta 2: \n");
    scanf("%s", &estado2);

    printf("Digite o Código da Carta 2: \n");
    scanf("%s", &codigo2);

    printf("Digite o Nome da Cidade da Carta 2: \n");
    scanf("%s", &cidade2);

    printf("Digite a População da Carta 2: \n");
    scanf("%d", &populacao2);

    printf("Digite a Área da Carta 2: \n");
    scanf("%f", &area2);

    printf("Digite o PIB da Carta 2: \n");
    scanf("%f", &pib2);

    printf("Digite o Número de Pontos Turísticos da Carta 2: \n");
    scanf("%d", &turisticos2);

    // impressão dos dados organizados.
    printf("\n"); // pulando uma linha para melhor visualização.

    printf("Carta 1: \n");
    printf("Estado: %s \n", estado1);
    printf("Código: %s \n", codigo1);
    printf("Nome da cidade: %s \n", cidade1);
    printf("População: %d habitantes \n", populacao1);
    printf("Área: %.2f Km2\n", area1);
    printf("PIB: %.2f bilhões de reais\n", pib1);
    printf("Número de pontos turísticos: %d \n", turisticos1);

    printf("\n");

    printf("Carta 2: \n");
    printf("Estado: %s \n", estado2);
    printf("Código: %s \n", codigo2);
    printf("Nome da cidade: %s \n", cidade2);
    printf("População: %d habitantes \n", populacao2);
    printf("Área: %.2f Km2 \n", area2);
    printf("PIB: %.2f bilhões de reais \n", pib2);
    printf("Número de pontos turísticos: %d \n", turisticos2);

    
}