#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das cartas
// Objetivo: No nível novato você deve criar as cartas representando as cidades utilizando scanf para entrada de dados e printf para exibir as informações.

int main() {

  // Área para definição das variáveis para armazenar as propriedades das cidades
  char cidade1[]= "Antonio Carlos";
  int habitantes1= 11000; 
  int pracas1= 1;
  int hospitais1= 0;
  float pib1= 1200000000.00;

  //carta 1 define os atributos da carta 1 do game.

  char cidade2[]= "Sao Pedro de Alcantara";
  int habitantes2= 5776;
  int pracas2= 1;
  int hospitais2= 0;
  float pib2= 148000000.00;

  //carta 2 define os atributos da carta 2 do game.

  // Área para entrada de dados

  printf("Digite sua cidade:\n");
  scanf(" %c\n", cidade1);
  printf("cidade cadastrada: %c", cidade1);


  // Área para exibição dos dados da cidade

return 0;
} 
