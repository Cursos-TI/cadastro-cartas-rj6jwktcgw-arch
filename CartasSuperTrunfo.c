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
  char cidade2[40]= "antonio";
  int habitantes2= 5779;
  int pracas2= 2;
  int hospitais2= 3;
  float pib2= 148000000.00;


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

    printf("Hora de cadastrar a segunda carta!\n");
    
    printf("Digite sua cidade: \n");
    scanf("%s", &cidade2); 
    
    printf("Digite a quantidade de habitantes: \n");
    scanf("%d", &habitantes2);

    printf("Digite a quantidade de pracas:\n");
    scanf("%d", &pracas2);

    printf("Digite a quantidade de hospitais:\n");
    scanf("%d", &hospitais2);

    printf("Digite o PIB:");
    scanf("%f", &pib2);

    printf("=== CARTA 2 CADASTRADA COM SUCESSO! ===\n");
    printf("cidade: %s\n", cidade2); 
    printf("Habitantes: %d\n", habitantes2);
    printf("Pracas: %d\n", pracas2);
    printf("Hospitais: %d\n", hospitais2);  
    printf("PIB: %.2f\n", pib2);


  




  // Área para exibição dos dados da cidade

return 0;
} 
