#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das cartas
// Objetivo: No nível novato você deve criar as cartas representando as cidades utilizando scanf para entrada de dados e printf para exibir as informações.

int main() {
  // Área para definição das variáveis para armazenar as propriedades das cidades
    char estado1[20], estado2[20];
  char codigoCarta1[3], codigoCarta2[3];
  char nomeCidade1[50], nomeCidade2[50];
  int populacao1, populacao2;
  float pib1, pib2;
  float area1, area2;
  float DensidadePopulacional1,DensidadePopulacional2;
  float pibperCapita1, pibperCapita2;
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

   DensidadePopulacional1= (float) populacao1 / area1;
    printf("Densidade Populacional: %.2f\n", DensidadePopulacional1);

   pibperCapita1= pib1 / populacao1;
    printf("PIB per Capita: %.2f\n", pibperCapita1);

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

DensidadePopulacional2= (float) populacao2 / area2;
    printf("Densidade Populacional: %.2f\n", DensidadePopulacional2);

   pibperCapita2= pib2 / populacao2;
    printf("PIB per Capita: %.2f\n", pibperCapita2);

    

  // Área para exibição dos dados da cidade

    printf("\n Dados primeira cidade ===\n");
    printf("Estado: %s\n", estado1);
    printf("Código: %s\n", codigoCarta1);
    printf("Cidade: %s\n", nomeCidade1);
    printf("População: %d\n", populacao1);
    printf("Pontos turísticos: %d\n", pontosTuristicos1);
    printf("Área ( km²): %.2f \n", area1);
    printf("PIB: %.2f \n", pib1);
    printf("Densidade Populacional: %.2f \n", DensidadePopulacional1);
    printf("Pib per Capita: %.2f \n", pibperCapita1);


     printf("\n Dados segunda cidade ===\n");
    printf("Estado: %s\n", estado2);
    printf("Código: %s\n", codigoCarta2);
    printf("Cidade: %s\n", nomeCidade2);
    printf("População: %d\n", populacao2);
    printf("Pontos turísticos: %d\n", pontosTuristicos2);
    printf("Área ( km²): %.2f \n", area2);
    printf("PIB: %.2f \n", pib2);
    printf("Densidade Populacional: %.2f \n", DensidadePopulacional2);
    printf("Pib per Capita: %.2f \n", pibperCapita2);

return 0;
} 
