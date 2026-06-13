#include <stdio.h>
#include <string.h> // Necessário para usar a função strcspn
#include <stdlib.h>
#include <time.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das cartas
// Objetivo: No nível novato você deve criar as cartas representando as cidades utilizando scanf para entrada de dados e printf para exibir as informações.

int main() {
  // Área para definição das variáveis para armazenar as propriedades das cidades
  // Carta número 01
  char estado;
  char codigo[4];
  char cidade[50];
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
  char cidade2[50];
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
  fgets(cidade, sizeof(cidade), stdin);
  cidade[strcspn(cidade, "\n")] = '\0';
  
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
  fgets(cidade2, sizeof(cidade2), stdin);
  cidade2[strcspn(cidade2, "\n")] = '\0';
  
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

  // Menu interativo

  int opcao;

  printf("          Menu Principal\n");
  printf("        Escolha uma opção:\n");
  printf("1. População\n");
  printf("2. Área\n");
  printf("3. PIB\n");
  printf("4. Número de pontos turísticos\n");
  printf("5. Densidade demográfica\n");
  printf("6. Sair\n");
  
  scanf("%d", &opcao);
  switch (opcao)
  {
  case 1:
    printf("As cidades escolhidas são: %s e %s\n",cidade, cidade2);
    printf("O item POPULAÇÃO foi a escolha utilizada com os valores:\n");
    printf("%lu para a cidade: %s\n", populacao, cidade);
    printf("%lu para a cidade: %s\n", populacao2, cidade2);
    if (populacao > populacao2){
       printf("%s venceu!\n", cidade);
    } else if (populacao < populacao2){
        printf("%s venceu!\n", cidade2);
    } else {
        printf("Houve um empate!\n");  
    }
    break;
  case 2:
    printf("As cidades escolhidas são: %s e %s\n",cidade, cidade2);
    printf("O item ÁREA foi a escolha utilizada com os valores:\n");
    printf("%f de km² para a cidade: %s\n", area, cidade);
    printf("%f de km² para a cidade: %s\n", area2, cidade2);
    if (area > area2){
       printf("%s venceu!\n", cidade);
    } else if (area < area2){
        printf("%s venceu!\n", cidade2);
    } else {
        printf("Houve um empate!\n");  
    }
    break;
  case 3:
    printf("As cidades escolhidas são: %s e %s\n",cidade, cidade2);
    printf("O item PIB foi a escolha utilizada com os valores:\n");
    printf("%f para a cidade: %s\n", pib, cidade);
    printf("%f para a cidade: %s\n", pib2, cidade2);
    if (pib > pib2){
       printf("%s venceu!\n", cidade);
    } else if (pib < pib2){
        printf("%s venceu!\n", cidade2);
    } else {
        printf("Houve um empate!\n");  
    }
    break;
  case 4:
    printf("As cidades escolhidas são: %s e %s\n",cidade, cidade2);
    printf("O item N° DE PONTOS TURÍSTICOS foi a escolha utilizada com os valores:\n");
    printf("%d para a cidade: %s\n", numeropontosturisticos, cidade);
    printf("%d para a cidade: %s\n", numeropontosturisticos2, cidade2);
    if (numeropontosturisticos > numeropontosturisticos2){
       printf("%s venceu!\n", cidade);
    } else if (numeropontosturisticos < numeropontosturisticos2){
        printf("%s venceu!\n", cidade2);
    } else {
        printf("Houve um empate!\n");  
    }
    break;
  case 5:
    printf("As cidades escolhidas são: %s e %s\n",cidade, cidade2);
    printf("O item DENSIDADE DEMOGRÁFICA foi a escolha utilizada com os valores:\n");
    printf("%f para a cidade: %s\n", densidade, cidade);
    printf("%f para a cidade: %s\n", densidade2, cidade2);
    if (densidade < densidade2){
       printf("%s venceu!\n", cidade);
    } else if (densidade > densidade2){
        printf("%s venceu!\n", cidade2);
    } else {
        printf("Houve um empate!\n");  
    }
    break;
  case 6:
    printf("Saindo do jogo!\n");
    break;
  default:
    printf("Opção inválida\n");
    break;
  }
  
return 0;
} 