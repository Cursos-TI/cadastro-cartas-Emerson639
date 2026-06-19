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

  int primeiroAtributo, segundoAtributo; // escolha dos atributos
  float primeiraEscolha1; // armazenar a escolha sem a necessidade de codificar em todos os cases.
  float primeiraEscolha2; // idem.
  float segundaEscolha1;  // idem.
  float segundaEscolha2;  // idem.
  float soma1 = 0.0f;     // soma dos atributos.
  float soma2 = 0.0f;     // idem.
 

  printf("                         Menu Principal\n");
  printf("        Você deve escolher dois atributos para as cartas\n");
  printf("            Escolha o primeiro atributo para a carta:\n");
  printf("1. População\n");
  printf("2. Área\n");
  printf("3. PIB\n");
  printf("4. Número de pontos turísticos\n");
  printf("5. Densidade demográfica\n");
  printf(">> Escolha qualquer n° para Sair >>\n\n");
  
  printf("Escolha a comparação: ");
  scanf(" %d", &primeiroAtributo);
  printf("\n");

  switch (primeiroAtributo)
  {
  case 1:
     printf("Você escolheu POPULAÇÃO\n\n");
     primeiraEscolha1 = (float)populacao;
     primeiraEscolha2 = (float)populacao2;
     soma1 += populacao;
     soma2 += populacao2;
     break;
  case 2:
     printf("Você escolheu AREA\n\n");
     primeiraEscolha1 = area;
     primeiraEscolha2 = area2;
     soma1 += area;
     soma2 += area2;
     break;
  case 3:
     printf("Você escolheu PIB\n\n");
     primeiraEscolha1 = pib;
     primeiraEscolha2 = pib2;
     soma1 += pib;
     soma2 += pib2;
     break;
  case 4:
     printf("Você escolheu N° DE PONTOS TURÍSTICOS\n\n");
     primeiraEscolha1 = numeropontosturisticos;
     primeiraEscolha2 = numeropontosturisticos2;
     soma1 += numeropontosturisticos;
     soma2 += numeropontosturisticos2;
     break;
  case 5:
     printf("Você escolheu DENSIDADE DEMOGRÁFICA\n\n");
     primeiraEscolha1 = (1.0 / densidade); // divisão necessária para que a menor densidade vença.
     primeiraEscolha2 = (1.0 / densidade2); // divisão necessária para que a menor densidade vença.
     soma1 += (1.0 / densidade); // divisão necessária para que a menor densidade vença.
     soma2 += (1.0 / densidade2); // divisão necessária para que a menor densidade vença.
     break;
  default:
     printf("Saindo do jogo!\n\n");
  //   break;
     exit(0);
  }
  
     printf("            Escolha o segundo atributo para as cartas:\n");
     printf("Atenção: Você deve escolher um atributo diferente do primeiro.\n");
     printf("1. População\n");
     printf("2. Área\n");
     printf("3. PIB\n");
     printf("4. Número de pontos turísticos\n");
     printf("5. Densidade demográfica\n");
     printf(">> Escolha qualquer n° para Sair >>\n\n");

     printf("Escolha a comparação: ");
     scanf(" %d", &segundoAtributo);
     printf("\n");

     if (primeiroAtributo == segundoAtributo)
     {
        printf("Voce escolheu o mesmo atributo, tente novamente!\n\n");
        exit(0);
     } else {
        switch (segundoAtributo)
        {
        case 1:
           printf("Você escolheu POPULAÇÃO\n\n");
           segundaEscolha1 = populacao;
           segundaEscolha2 = populacao2;
           soma1 += populacao;
           soma2 += populacao2;
           break;
        case 2:
           printf("Você escolheu AREA\n\n");
           segundaEscolha1 = area;
           segundaEscolha2 = area2;
           soma1 += area;
           soma2 += area2;
           break;
        case 3:
           printf("Você escolheu PIB\n\n");
           segundaEscolha1 = pib;
           segundaEscolha2 = pib2;
           soma1 += pib;
           soma2 += pib2;
           break;
        case 4:
           printf("Você escolheu N° DE PONTOS TURÍSTICOS\n\n");
           segundaEscolha1 = numeropontosturisticos;
           segundaEscolha2 = numeropontosturisticos2;
           soma1 += numeropontosturisticos;
           soma2 += numeropontosturisticos2;
           break;
        case 5:
           printf("Você escolheu DENSIDADE DEMOGRÁFICA\n\n");
           segundaEscolha1 = (1.0 / densidade); // divisão necessária para que a menor densidade vença.
           segundaEscolha2 = (1.0 / densidade2); // divisão necessária para que a menor densidade vença.
           soma1 += (1.0 / densidade); // divisão necessária para que a menor densidade vença.
           soma2 += (1.0 / densidade2); // divisão necessária para que a menor densidade vença.
           break;
        default:
           printf("Saindo do jogo!\n\n");
          // break;
           exit(0);
        }
     }

     //***** Impressão dos resultados *****
           
           printf("As cidades escolhidas foram:\n%s com primeiro atributo = %.2f e segundo atributo = %.2f\n", cidade, primeiraEscolha1, segundaEscolha1);
           printf("Com um total de: %.2f pontos\n", soma1);
           printf("e a cidade %s com primeiro atributo = %.2f e segundo atributo = %.2f\n", cidade2, primeiraEscolha2, segundaEscolha2);
           printf("Com um total de: %.2f pontos\n\n", soma2);
           
           printf("Resultado da comparação:\n");
           if (soma1 > soma2)
           {
               printf("Venceu a primeira carta!\n\n");
           } else if (soma1 < soma2) {
               printf("Venceu a segunda carta!\n\n");
           } else {
               printf("Empatou!\n\n");
           }
    
return 0;
} 