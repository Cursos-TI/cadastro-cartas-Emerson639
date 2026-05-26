#include <stdio.h>
#include <string.h> // Necessário para usar a função strcspn

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das cartas
// Objetivo: No nível novato você deve criar as cartas representando as cidades utilizando scanf para entrada de dados e printf para exibir as informações.

int main() {
  // Área para definição das variáveis para armazenar as propriedades das cidades
  // Carta número 01
  char estado;
  char codigo[4];
  char nome[50];
  int populacao;
  int numeropontosturisticos;
  float area;
  float pib;
  float densidade;
  float percapita;

  // Carta número 02
  char estado2;
  char codigo2[4];
  char nome2[50];
  int populacao2;
  int numeropontosturisticos2;
  float area2;
  float pib2;
  float densidade2;
  float percapita2;
  

  // Área para entrada de dados
  printf("*** Dados da primeira cidade ***\n");
  
  printf("Digite o Estado com apenas uma letra de 'A' a 'H': \n");
  scanf(" %c", &estado);

  printf("Digite o código do Estado de '01' a '04': \n");
  scanf("%s", codigo);

  getchar() != '\n'; // Necessário para digitar o nome da cidade, senão o programa pula esse bloco.

  printf("Digite o nome da cidade: \n");
  fgets(nome, sizeof(nome), stdin);
  nome[strcspn(nome, "\n")] = '\0';
  
  printf("Digite o total da população: \n");
  scanf("%d", &populacao); 

  printf("Digite a Área em km²: \n");
  scanf("%f", &area);

  printf("Digite o PIB: \n");
  scanf("%f", &pib); 

  printf("Digite o número de Pontos Turísticos: \n");
  scanf("%d", &numeropontosturisticos);

  densidade = (float)populacao / area;
  percapita = (pib * 1000000000.0) / (float)populacao;
  
  printf("\n");
  printf("\n");


  printf("*** Dados da segunda cidade ***\n");
  printf("Digite o Estado com apenas uma letra de 'A' a 'H': \n");
  scanf(" %c", &estado2);

  printf("Digite o código do Estado de '01' a '04': \n");
  scanf("%s", codigo2);

  getchar() != '\n'; // Necessário para digitar o nome da cidade, senão o programa pula esse bloco.

  printf("Digite o nome da cidade: \n");
  fgets(nome2, sizeof(nome2), stdin);
  nome2[strcspn(nome2, "\n")] = '\0';
  
  printf("Digite o total da população: \n");
  scanf("%d", &populacao2); 

  printf("Digite a Área em km²: \n");
  scanf("%f", &area2);

  printf("Digite o PIB: \n");
  scanf("%f", &pib2); 

  printf("Digite o número de Pontos Turísticos: \n");
  scanf("%d", &numeropontosturisticos2);

  densidade2 = (float)populacao2 / area2;
  percapita2 = (pib2 * 1000000000.0) / (float)populacao2;

  printf("\n");
  printf("\n");

  // Área para exibição dos dados da cidade
  printf("##############################################################\n");
  printf("################   Dados da carta número 01   ################\n");
  printf("##############################################################\n");
  printf("\n");
  printf("O Estado é: %c\n", estado);
  printf("Código do Estado é: %s\n", codigo);
  printf("O nome da cidade é: %s\n", nome);
  printf("O total da população é: %d\n", populacao);
  printf("O tamanho da área em km² é: %.2f\n", area);
  printf("O PIB está em: %.2f bilhões de reais\n", pib);
  printf("O número de Pontos Turísticos é: %d\n", numeropontosturisticos);
  printf("O número da Densidade Populacional é: %.2f hab/km²\n", densidade);
  printf("O número do PIB per Capita é: %.2f reais\n", percapita);
  printf("\n");
  printf("##############################################################\n");
  printf("################   Fim carta número 01   #####################\n");
  printf("##############################################################\n");
  printf("\n");
  printf("\n");
  printf("##############################################################\n");
  printf("################   Dados da carta número 02   ################\n");
  printf("##############################################################\n");
  printf("\n");
  printf("O Estado é: %c\n", estado2);
  printf("Código do Estado é: %s\n", codigo2);
  printf("O nome da cidade é: %s\n", nome2);
  printf("O total da população é: %d\n", populacao2);
  printf("O tamanho da área em km² é: %.2f\n", area2);
  printf("O PIB está em: %.2f bilhões de reais\n", pib2);
  printf("O número de Pontos Turísticos é: %d\n", numeropontosturisticos2);
  printf("O número da Densidade Populacional é: %.2f hab/km²\n", densidade2);
  printf("O número do PIB per Capita é: %.2f reais\n", percapita2);
  printf("\n");
  printf("##############################################################\n");
  printf("################   Fim carta número 02   #####################\n");
  printf("##############################################################\n");
  printf("\n");

return 0;
} 
