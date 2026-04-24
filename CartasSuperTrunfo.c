#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das cartas
// Objetivo: No nível novato você deve criar as cartas representando as cidades utilizando scanf para entrada de dados e printf para exibir as informações.

int main() {
  // Área para definição das variáveis para armazenar as propriedades das cidades
  char codigo1[4] = "A01";
  char nomeestado1[20];
  char nomecidade1[30];
  int populacao1;
  float area1;
  float pib1;
  int pontos1;

  char codigo2[4] = "B01";
  char nomeestado2[20];
  char nomecidade2[30];
  int populacao2;
  float area2;
  float pib2;
  int pontos2;

  // Área para entrada de dados
  printf("\nDigite o nome do primeiro estado: ");
  scanf("%s", nomeestado1);

  printf("Cidade: ");
  scanf("%s", nomecidade1);

  printf("Populacao: ");
  scanf("%d", &populacao1);

  printf("Area (km²): ");
  scanf("%f", &area1);

  printf("PIB (em bilhoes): ");
  scanf("%f", &pib1);

  printf("Numero de pontos turisticos: ");
  scanf("%d", &pontos1);


  printf("\nDigite o nome do segundo estado: ");
  scanf("%s", nomeestado2);

  printf("Cidade: ");
  scanf("%s", nomecidade2);

  printf("Populacao: ");
  scanf("%d", &populacao2);

  printf("Area (km²): ");
  scanf("%f", &area2);

  printf("PIB (em bilhoes): ");
  scanf("%f", &pib2);

  printf("Numero de pontos turisticos: ");
  scanf("%d", &pontos2);

  // Área para exibição dos dados da cidade
  printf("\nCarta: %s\n", codigo1);
  printf("Estado: %s\n", nomeestado1);
  printf("Cidade: %s\n", nomecidade1);
  printf("Populacao: %d\n", populacao1);
  printf("Area: %.2f km²\n", area1);
  printf("PIB: %.2f bilhoes\n", pib1);
  printf("Pontos Turisticos: %d\n", pontos1);

  printf("\nCarta: %s\n", codigo2);
  printf("Estado: %s\n", nomeestado2);
  printf("Cidade: %s\n", nomecidade2);
  printf("Populacao: %d\n", populacao2);
  printf("Area: %.2f km²\n", area2);
  printf("PIB: %.2f bilhoes\n", pib2);
  printf("Pontos Turisticos: %d\n", pontos2);

return 0;
} 
