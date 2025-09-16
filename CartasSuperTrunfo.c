#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das cartas
// Objetivo: No nível novato você deve criar as cartas representando as cidades utilizando scanf para entrada de dados e printf para exibir as informações.

int main() {
  // Área para definição das variáveis para armazenar as propriedades das cidades
    char estado1[20], estado2[20];
  char codigoCarta1[4], codigoCarta2[4];
  char nomeCidade1[50], nomeCidade2[50];
  int populacao1, populacao2;
  float pib1, pib2;
  float area1, area2;
  float densidade1, densidade2, pibpercapta1, pibpercapta2;
  int pontosTuristicos1, pontosTuristicos2;

 
  // Área para entrada de dados    
    printf("Digite os dados da primeira cidade\n");

    printf("Estado (Uma letra de A até H): ");
    scanf("%s", estado1);

    printf("Código da Carta (Ex: A01 ou B02): ");
    scanf("%s",codigoCarta1);
    
 printf("Digite o nome da cidade: ");
    scanf("%s", nomeCidade1);

    printf("Digite a quantidade da população:");
    scanf("%d", &populacao1);

    printf("Digite o número de pontos turísticos:");
    scanf("%d", &pontosTuristicos1);

    printf("Digite a área (km²): ");
    scanf("%f", &area1);

    printf("Digite o PIB : ");
    scanf("%f", &pib1);

     printf("Digite os dados da segunda cidade\n");

    printf("Estado (Uma letra de A até H [Não repetir a anterior]): ");
    scanf("%s", estado2);

    printf("Código da Carta [Diferente do anterior] (Ex: A01 ou B02):");
    scanf("%s",codigoCarta2);

 printf("Digite o nome da cidade: ");
    scanf("%s", nomeCidade2);

    printf("Digite a quantidade da população: ");
    scanf("%d", &populacao2);

    printf("Digite o número de pontos turísticos: ");
    scanf("%d", &pontosTuristicos2);

    printf("Digite a área (km²): ");
    scanf("%f", &area2);

    printf("Digite o PIB : ");
    scanf("%f", &pib2);



      //Área dos cálculos
  densidade1 = (float) populacao1 / area1;
  densidade2 = (float) populacao2 / area2;
  pibpercapta1 = (float) pib1 / populacao1;
  pibpercapta2 = (float) pib2 / populacao2;

  // Área para exibição dos dados da cidade
 printf("\nAqui estão os dados cadastrados nas duas cartas:\n\n");
    printf("\n Dados primeira cidade ===\n");
    printf("Estado: %s\n", estado1);
    printf("Código: %s\n", codigoCarta1);
    printf("Cidade: %s\n", nomeCidade1);
    printf("População: %d\n", populacao1);
    printf("Pontos turísticos: %d\n", pontosTuristicos1);
    printf("Área ( km²): %.2f \n", area1);
    printf("PIB: %.2f \n", pib1);
    printf("Densidade Populacional: %.2f hab/km² \n", densidade1);
    printf("Pib per Capita: %.2f reais \n", pibpercapta1);


     printf("\n Dados segunda cidade ===\n");
    printf("Estado: %s\n", estado2);
    printf("Código: %s\n", codigoCarta2);
    printf("Cidade: %s\n", nomeCidade2);
    printf("População: %d\n", populacao2);
    printf("Pontos turísticos: %d\n", pontosTuristicos2);
    printf("Área ( km²): %.2f \n", area2);
    printf("PIB: %.2f \n", pib2);
    printf("Densidade Populacional: %.2f hab/km² \n", densidade2);
    printf("Pib per Capita: %.2f reais \n", pibpercapta2);

return 0;
} 
