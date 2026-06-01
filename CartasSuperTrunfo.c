#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das cartas
// Objetivo: No nível novato você deve criar as cartas representando as cidades utilizando scanf para entrada de dados e printf para exibir as informações.

int main() {

  // Área para definição das variáveis para armazenar as propriedades das cidades
  char cidade1[40]= "ijui";
  int habitantes1= 5776; 
  int pracas1= 1;
  int hospitais1= 0;
  float pib1= 1200000000.00;
  char cidade2[40]= "cidade2";
  int habitantes2= 5776;
  int pracas2= 1;
  int hospitais2= 0;
  float pib2= 148000000.00;

  //carta 2 define os atributos da carta 2 do game.

  // Área para entrada de dados

    printf("Digite sua cidade: \n");
    scanf("%s", &cidade1);  

    printf("Digite a quantidade de habitantes: \n");
    scanf("%d", &habitantes1);

    printf("Digite a quantidade de pracas:\n");
    scanf("%d", &pracas1);
    
    printf("Digite a quantidade de hospitais:\n");
    scanf("%d", &hospitais1);

    printf("Digite o PIB:");
    scanf("%f", &pib1);

    printf("=== CARTA 1 CADASTRADA COM SUCESSO! ===\n");
    printf("Cidade: %s\n", cidade1);
    printf("Habitantes: %d\n", habitantes1);
    printf("Pracas: %d\n", pracas1);
    printf("Hospitais: %d\n", hospitais1);    
    printf("PIB: %.2f\n", pib1);




  // Área para exibição dos dados da cidade

return 0;
} 
