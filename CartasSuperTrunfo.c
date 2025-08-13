#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.
//Teste larissa

int main() {
    
    
  //declarando as variaveis
  char estado[3], codigodacarta[3], nomedacidade[100]; 
  char estado2[3], codigodacarta2[3], nomedacidade2[100]; 
  int populacao, pontosturisticos; 
  float pib, area;
  int populacao2, pontosturisticos2; 
  float pib2, area2; 

  //entrada de dados primeira carta
  printf("Vamos criar a primeira carta do Super trunfo\n");
  printf("Digite seu estado de A a H\n");
  scanf(" %2s", estado);

  
  printf("Digite o código da carta de 01 a 04\n");
  scanf(" %2s", codigodacarta);

  printf("Digite o nome da cidade\n");
  scanf(" %99[^\n]", nomedacidade); 

  printf("Digite a população da cidade\n");
  scanf("%d", &populacao);

  printf("Digite a área da cidade\n");
  scanf("%f", &area);

  printf("Digite o PIB da cidade em bilhões\n");
  scanf("%f", &pib);

  printf("Digite o número de pontos turísticos da cidade\n");
  scanf("%d", &pontosturisticos);

  //entrada de dados da segunda carta

  printf("Vamos criar a segunda carta do Super trunfo\n");
  printf("Digite seu estado de A a H\n");
  scanf(" %2s", estado2);

  
  printf("Digite o código da carta de 01 a 04\n");
  scanf(" %2s", codigodacarta2);

  printf("Digite o nome da cidade\n");
  scanf(" %99[^\n]", nomedacidade2); 

  printf("Digite a população da cidade\n");
  scanf("%d", &populacao2);

  printf("Digite a área da cidade\n");
  scanf("%f", &area2);

  printf("Digite o PIB da cidade em bilhões\n");
  scanf("%f", &pib2);

  printf("Digite o número de pontos turísticos da cidade\n");
  scanf("%d", &pontosturisticos2);

  //Exibindo as cartas na tela
    
  printf(
        "\nCARTA1:\n"
        "Estado: %s\n"
        "Código: %s%s\n"
        "Nome da Cidade: %s\n"
        "População: %d\n"
        "Área: %.2f km\u00B2\n"
        "PIB: %.2f bilhões de reais\n"
        "Número de pontos turísticos: %d\n", estado, estado, codigodacarta, nomedacidade, populacao, area, pib, pontosturisticos
      );

        printf(
        "\nCARTA2:\n"
        "Estado: %s\n"
        "Código: %s%s\n"
        "Nome da Cidade: %s\n"
        "População: %d\n"
        "Área: %.2f km\u00B2\n"
        "PIB: %.2f bilhões de reais\n"
        "Número de pontos turísticos: %d", estado2, estado2, codigodacarta2, nomedacidade2, populacao2, area2, pib2, pontosturisticos2
      );


    return 0;
}
