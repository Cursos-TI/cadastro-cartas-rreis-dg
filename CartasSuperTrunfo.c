#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das cartas
// Objetivo: No nível novato você deve criar as cartas representando as cidades utilizando scanf para entrada de dados e printf para exibir as informações.

int main() {
  // Área para definição das variáveis para armazenar as propriedades das cidades
   // Variáveis da 1ª carta
    char estado1[20], codigo1[20], cidade1[20];
    int populacao1, pontos_turisticos1;
    float area1, pib1;

    // Variáveis da 2ª carta
    char estado2[20], codigo2[20], cidade2[20];
    int populacao2, pontos_turisticos2;
    float area2, pib2;

  // Área para entrada de dados

   // Entrada de dados da 1ª carta
    printf("=== Cadastro da 1ª Carta ===\n");
    printf("Digite o nome do estado: ");
    scanf("%s", estado1);

    printf("Digite o código da carta: ");
    scanf("%s", codigo1);

    printf("Nome da cidade: ");
    scanf("%s", cidade1);

    printf("Digite a quantidade da população: ");
    scanf("%d", &populacao1);

    printf("Digite o número de pontos turísticos: ");
    scanf("%d", &pontos_turisticos1);

    printf("Digite a área (km²): ");
    scanf("%f", &area1);

    printf("Digite o PIB (em bilhões): ");
    scanf("%f", &pib1);

     // Entrada de dados da 2ª carta
    printf("\n=== Cadastro da 2ª Carta ===\n");
    printf("Digite o nome do estado: ");
    scanf("%s", estado2);

    printf("Digite o código da carta: ");
    scanf("%s", codigo2);

    printf("Nome da cidade: ");
    scanf("%s", cidade2);

    printf("Digite a quantidade da população: ");
    scanf("%d", &populacao2);

    printf("Digite o número de pontos turísticos: ");
    scanf("%d", &pontos_turisticos2);

    printf("Digite a área (km²): ");
    scanf("%f", &area2);

    printf("Digite o PIB (em bilhões): ");
    scanf("%f", &pib2);

  // Área para exibição dos dados da cidade

  // Saída da 1ª carta
    printf("\n=== Dados da 1ª Carta ===\n");
    printf("Estado: %s\n", estado1);
    printf("Código: %s\n", codigo1);
    printf("Cidade: %s\n", cidade1);
    printf("População: %d\n", populacao1);
    printf("Pontos turísticos: %d\n", pontos_turisticos1);
    printf("Área: %.2f km²\n", area1);
    printf("PIB: %.2f bilhões\n", pib1);


    // Saída da 2ª carta
    printf("\n=== Dados da 2ª Carta ===\n");
    printf("Estado: %s\n", estado2);
    printf("Código: %s\n", codigo2);
    printf("Cidade: %s\n", cidade2);
    printf("População: %d\n", populacao2);
    printf("Pontos turísticos: %d\n", pontos_turisticos2);
    printf("Área: %.2f km²\n", area2);
    printf("PIB: %.2f bilhões\n", pib2);

return 0;
} 
