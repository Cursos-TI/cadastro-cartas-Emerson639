#include <stdio.h>
#include <string.h> // Necessário para usar a função strcspn

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das cartas
// Objetivo: No nível novato você deve criar as cartas representando as cidades utilizando scanf para entrada de dados e printf para exibir as informações.

int main() {
  // Área para definição das variáveis para armazenar as propriedades das cidades
  char estado;
  char codigo[4];
  char nome[50];
  int populacao;
  int numeropontosturisticos;
  float area;
  float pib;
  

  // Área para entrada de dados
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

  printf("Digite a Área em km2: \n");
  scanf("%f", &area);

  printf("Digite o PIB: \n");
  scanf("%f", &pib); 

  printf("Digite o numero de pontos turisticos: \n");
  scanf("%d", &numeropontosturisticos);


  // Área para exibição dos dados da cidade
  printf("##############################################################\n");
  printf("################   Dados da carta número 01   ################\n");
  printf("##############################################################\n");
  printf("\n");

    printf("O Estado é: %c\n", estado);
    printf("Código do Estado é: %s\n", codigo);
    printf("O nome da cidade é: %s\n", nome);
    printf("O total da população é: %d\n", populacao);
    printf("O tamanho da área em km2 é: %.2f\n", area);
    printf("O PIB está em: %.2f bilhões de reais\n", pib);
    printf("O número de pontos turísticos é: %d\n", numeropontosturisticos);


  printf("\n");
  printf("##############################################################\n");
  printf("################   Fim carta número 01   #####################\n");
  printf("##############################################################\n");

return 0;
} 
