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
  unsigned long int populacao;
  int numeropontosturisticos;
  float area;
  float pib;
  float densidade;
  float percapita;
  float superPoder;

  // Carta número 02
  char estado2;
  char codigo2[4];
  char nome2[50];
  unsigned long int populacao2;
  int numeropontosturisticos2;
  float area2;
  float pib2;
  float densidade2;
  float percapita2;
  float superPoder2;
  

  // Área para entrada de dados
  printf("*** Dados da primeira carta ***\n");
  
  printf("Digite o Estado com apenas uma letra de 'A' a 'H': \n");
  scanf(" %c", &estado);

  printf("Digite o código do Estado de '01' a '04': \n");
  scanf("%s", codigo);

  getchar() != '\n'; // Necessário para digitar o nome da cidade, senão o programa pula esse bloco.

  printf("Digite o nome da cidade: \n");
  fgets(nome, sizeof(nome), stdin);
  nome[strcspn(nome, "\n")] = '\0';
  
  printf("Digite o total da população: \n");
  scanf("%lu", &populacao); 

  printf("Digite a Área em km²: \n");
  scanf("%f", &area);

  printf("Digite o PIB: \n");
  scanf("%f", &pib); 

  printf("Digite o número de Pontos Turísticos: \n");
  scanf("%d", &numeropontosturisticos);

  densidade = (float)populacao / area;
  percapita = (pib * 1000000000.0) / (float)populacao;
  superPoder = (float)populacao + area + pib + numeropontosturisticos + percapita + (1.0 / densidade);
  
  printf("\n");
  printf("\n");


  printf("*** Dados da segunda carta ***\n");
  printf("Digite o Estado com apenas uma letra de 'A' a 'H': \n");
  scanf(" %c", &estado2);

  printf("Digite o código do Estado de '01' a '04': \n");
  scanf("%s", codigo2);

  getchar() != '\n'; // Necessário para digitar o nome da cidade, senão o programa pula esse bloco.

  printf("Digite o nome da cidade: \n");
  fgets(nome2, sizeof(nome2), stdin);
  nome2[strcspn(nome2, "\n")] = '\0';
  
  printf("Digite o total da população: \n");
  scanf("%lu", &populacao2); 

  printf("Digite a Área em km²: \n");
  scanf("%f", &area2);

  printf("Digite o PIB: \n");
  scanf("%f", &pib2); 

  printf("Digite o número de Pontos Turísticos: \n");
  scanf("%d", &numeropontosturisticos2);

  densidade2 = (float)populacao2 / area2;
  percapita2 = (pib2 * 1000000000.0) / (float)populacao2;
  superPoder2 = (float)populacao2 + area2 + pib2 + numeropontosturisticos2 + percapita2 + (1.0 / densidade2);

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
  printf("O total da população é: %lu\n", populacao);
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
  printf("O total da população é: %lu\n", populacao2);
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

  // Comparação das cartas

  unsigned long int resultPopulacao;
  int resultPontosTuristicos;
  float resultArea, resultPIB, resultDensidade, resultPercapita, resultSuperPoder;

  resultPopulacao = populacao > populacao2;
  resultArea = area > area2;
  resultPIB = pib > pib2;
  resultPontosTuristicos = numeropontosturisticos > numeropontosturisticos2;
  resultDensidade = densidade < densidade2;
  resultPercapita = percapita > percapita2;
  resultSuperPoder = superPoder > superPoder2;

  printf("++++++++++++++++++++ Atributos Vencedores ++++++++++++++++++++\n");
  printf("++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++\n");
  printf("\n");
  printf("População: %s (%lu)\n", resultPopulacao ? "Carta 1 venceu!" : "Carta 2 venceu!", populacao > populacao2);
  printf("Área: %s (%d)\n", resultArea ? "Carta 1 venceu!" : "Carta 2 venceu!", area > area2);
  printf("PIB: %s (%d)\n", resultPIB ? "Carta 1 venceu!" : "Carta 2 venceu!", pib > pib2);
  printf("Pontos Turísticos: %s (%d)\n", resultPontosTuristicos ? "Carta 1 venceu!" : "Carta 2 venceu!", numeropontosturisticos > numeropontosturisticos2); 
  printf("Densidade Populacional: %s (%d)\n", resultDensidade ? "Carta 1 venceu!" : "Carta 2 venceu!", densidade < densidade2);
  printf("PIB per Capita: %s (%d)\n", resultPercapita ? "Carta 1 venceu!" : "Carta 2 venceu!", percapita > percapita2);
  printf("Super Poder: %s (%d)\n", resultSuperPoder ? "Carta 1 venceu!" : "Carta 2 venceu!", superPoder > superPoder2);
  printf("\n");

// Determinando a carta vencedora utilizando o atributo população e mostrando o nome da cidade.

  printf("++++++++++ Determinando a cidade vencedora ++++++++++\n");
  printf("\n");

  printf("Carta 1 - %s: %lu\n", nome, populacao);
  printf("Carta 2 - %s: %lu\n", nome2, populacao2);
  
  if (populacao > populacao2) {
    printf("Com a população com um total de: %lu habitantes, a cidade: %s foi a vencedora!!!\n", populacao, nome); 
  } else {
    printf("Com a população com um total de: %lu habitantes, a cidade: %s foi a vencedora!!!\n", populacao2, nome2);
  }

    printf("\n");

  
return 0;

} 