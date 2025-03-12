#include <stdio.h>

int main(){
    int carta1 = 1;
    char estadoC1;
    char codigoCartaC1[4], nomeCidadeC1[25];
    int populacaoC1, pontosTuristicosC1;
    float areaKM2C1, PIBC1;

    int carta2 = 2;
    char estadoC2;
    char codigoCartaC2[4], nomeCidadeC2[25];
    int populacaoC2, pontosTuristicosC2;
    float areaKM2C2, PIBC2;

    printf("Bem Vindo ao Jogo do SuperTrunfo!\n\n");

    printf("Digite os dados da Primeira carta:\n");


    printf("Codigo Carta: ");
    scanf("%s", codigoCartaC1);
    
    printf("Estado: ");
    scanf(" %c", &estadoC1);  


    printf("Nome Cidade: ");
    scanf("%s", nomeCidadeC1);  

    printf("Populacao: ");
    scanf("%d", &populacaoC1);

    printf("Pontos Turisticos: ");
    scanf("%d", &pontosTuristicosC1);

    printf("Area KM2: ");
    scanf("%f", &areaKM2C1);

    printf("PIB: ");
    scanf("%f", &PIBC1);


    printf("\n\nDigite os dados da Segunda carta:\n");

    
    printf("Codigo Carta: ");
    scanf("%s", codigoCartaC2);

    printf("Estado: ");
    scanf(" %c", &estadoC2);

    printf("Nome Cidade: ");
    scanf("%s", nomeCidadeC2);

    printf("Populacao: ");
    scanf("%d", &populacaoC2);

    printf("Pontos Turisticos: ");
    scanf("%d", &pontosTuristicosC2);

    printf("Area KM2: ");
    scanf("%f", &areaKM2C2);

    printf("PIB: ");
    scanf("%f", &PIBC2);

    printf("\n\nDados Primeira Carta: \n Carta: %d \n Estado: %c \n Codigo: %s \n Nome da Cidade: %s \n Populacao: %d \n Pontos Turisticos: %d \n Area: %.2f km2\n PIB: %.2f bilhoes de reais\n",
           carta1, estadoC1, codigoCartaC1, nomeCidadeC1, populacaoC1, pontosTuristicosC1, areaKM2C1, PIBC1);

    printf("\n\nDados Segunda Carta: \n Carta: %d \n Estado: %c \n Codigo: %s \n Nome da Cidade: %s \n Populacao: %d \n Pontos Turisticos: %d \n Area: %.2f km2\n PIB: %.2f bilhoes de reais\n",
           carta2, estadoC2, codigoCartaC2, nomeCidadeC2, populacaoC2, pontosTuristicosC2, areaKM2C2, PIBC2);

    return 0;
} 
