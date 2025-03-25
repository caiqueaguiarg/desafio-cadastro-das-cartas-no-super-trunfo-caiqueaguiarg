#include <stdio.h>

int main(){
    int carta1 = 1;
    char estadoC1;
    char codigoCartaC1[4], nomeCidadeC1[25];
    int populacaoC1, pontosTuristicosC1;
    float areaKM2C1, PIBC1, densidadePopulacional1, PibPerCapita1, superPoder1;

    int carta2 = 2;
    char estadoC2;
    char codigoCartaC2[4], nomeCidadeC2[25];
    int populacaoC2, pontosTuristicosC2;
    float areaKM2C2, PIBC2, densidadePopulacional2, PibPerCapita2, superPoder2;

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

    densidadePopulacional1 = (float) populacaoC1 / areaKM2C1;
    densidadePopulacional2 = (float) populacaoC2 / areaKM2C2;
    PibPerCapita1 = (float) PIBC1 / populacaoC1;
    PibPerCapita2 = (float) PIBC2 / populacaoC2;

    superPoder1 = (float) populacaoC1 + areaKM2C1 + PIBC1 + pontosTuristicosC1 + PibPerCapita1 + (1 / densidadePopulacional1);
    superPoder2 =(float) populacaoC2+ areaKM2C2 + PIBC2 + pontosTuristicosC2 + PibPerCapita2 + (1 / densidadePopulacional2);

    int comparaPopulacao, comparaArea, comparaPIB, comparaPontosTuristicos, comparaDensidadePopulacional, comparaPibPerCapita, comparaSuperPoder;

    comparaPopulacao= populacaoC1 > populacaoC2;
    comparaArea = areaKM2C1 > areaKM2C2;
    comparaPIB = PIBC1 > PIBC2;
    comparaPontosTuristicos = pontosTuristicosC1 > pontosTuristicosC2;
    comparaDensidadePopulacional = densidadePopulacional1 < densidadePopulacional2;
    comparaPibPerCapita = PibPerCapita1 > PibPerCapita2;
    comparaSuperPoder = superPoder1 > superPoder2;

    printf("\n\nDados Primeira Carta: \n Carta: %d \n Estado: %c \n Codigo: %s \n Nome da Cidade: %s \n Populacao: %d \n Pontos Turisticos: %d \n Area: %.2f km2\n PIB: %.2f bilhoes de reais\n Densidsidade Populacional: %.2f hab/km2\n PIB Per Capita: %.2f reais\n Super poder: %.2f \n",
       carta1, estadoC1, codigoCartaC1, nomeCidadeC1, populacaoC1, pontosTuristicosC1, areaKM2C1, PIBC1, densidadePopulacional1, PibPerCapita1, superPoder1);

    printf("\n\nDados Segunda Carta: \n Carta: %d \n Estado: %c \n Codigo: %s \n Nome da Cidade: %s \n Populacao: %d \n Pontos Turisticos: %d \n Area: %.2f km2\n PIB: %.2f bilhoes de reais\n Densidade Populacional: %.2f hab/km2\nPIB Per Capita: %.2f reais\n Super poder: %.2f \n",
           carta2, estadoC2, codigoCartaC2, nomeCidadeC2, populacaoC2, pontosTuristicosC2, areaKM2C2, PIBC2, densidadePopulacional2, PibPerCapita2, superPoder2);

    printf("\n\nResultado da Rodada: \n");
    printf("Populacao: Carta %d Venceu, (%d) \n", comparaPopulacao, comparaPopulacao);
    printf("Area: Carta %d Venceu, (%d)\n", comparaArea, comparaArea);
    printf("PIB: Carta %d Venceu, (%d)\n", comparaPIB, comparaPIB);
    printf("Pontos Turisticos: Carta %d Venceu, (%d)\n", comparaPontosTuristicos, comparaPontosTuristicos);
    printf("Densidade Populacional: Carta %d Venceu, (%d)\n", comparaDensidadePopulacional, comparaDensidadePopulacional);
    printf("PIB per Capita: Carta %d Venceu, (%d)\n", comparaPibPerCapita, comparaPibPerCapita);
    printf("Super Poder: Carta %d Venceu, (%d)\n",  comparaSuperPoder, comparaSuperPoder);




    return 0;
} 
