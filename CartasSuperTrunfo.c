#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das cartas
// Objetivo: No nível novato você deve criar as cartas representando as cidades utilizando scanf para entrada de dados e printf para exibir as informações.

int main() {


  // Área para definição das variáveis para armazenar as propriedades das cidades

  //variáveis para a carta 1
  char estado1[2];
  char codigo1[3];
  char cidade1[20];
  int população1; 
  int numero_de_pontos_turisticos1;
  float area1;
  float pib1;


  //variáveis para a carta 2
  char estado2[2];
  char codigo2[3];
  char cidade2[20];
  int população2; 
  int numero_de_pontos_turisticos2;
  float area2;
  float pib2;

// Cálculo da densidade populacional e PIB per capita para cada cidade **VARIAVEIS** LINHA 121
 


  printf(" ===DESAFIO SUPER TRUNFO - CIDADES ===\n");
  getchar(); // Limpa o buffer do teclado

  printf("Seja bem vindo ao Desafio Super Trunfo - Cidades!\n Nesse game voce ira cadastrar as suas cartas e comparar as propriedades das cidades para descobrir qual é a melhor carta!\n");
  getchar(); // Aguarda o usuário pressionar uma tecla

  printf("Vamos começar a cadastrar as cartas!\n Pressione uma tecla para continuar...");
  getchar(); // Aguarda o usuario pressionar uma tecla

  // Área para entrada de dados CARTA 1

    printf("Digite seu estado: \n");
    scanf("%s", estado1);  

    printf("Digite o codigo: \n");
    scanf("%s", codigo1);

    printf("Digite o nome da cidade:\n");
    scanf("%s", cidade1);

    printf("Digite a quantidade de habitantes: \n");
    scanf("%d", &população1);

    printf("Digite a quantidade de pontos turisticos:\n");
    scanf("%d", &numero_de_pontos_turisticos1);

    printf("Digite a area:\n");
    scanf("%f", &area1);

    printf("Digite o PIB:");
    scanf("%f", &pib1);

    printf("=== CARTA 1 CADASTRADA COM SUCESSO! ===\n");
    printf("Estado: %s\n", estado1);
    printf("Código: %s\n", codigo1);
    printf("Cidade: %s\n", cidade1);
    printf("População: %d\n", população1);
    printf("Pontos Turísticos: %d\n", numero_de_pontos_turisticos1);
    printf("Área: %.2f\n", area1);
    printf("PIB: %.2f\n", pib1);


  //; cadastro da Carta 2  


    printf("Hora de cadastrar a segunda carta!\n");
    getchar(); // Limpa o buffer do teclado
    
    printf("Digite seu estado: \n");
    scanf("%s", estado2);

    printf("Digite o codigo da carta: \n");
    scanf("%s", codigo2);

    printf("Digite o nome da cidade: \n");
    scanf("%s", cidade2);

    printf("Digite a quantidade de habitantes: \n");
    scanf("%d", &população2);

    printf("digite a quantidade de pontos turisticos: \n");
    scanf("%d", &numero_de_pontos_turisticos2);

    printf("digite a area: \n");
    scanf("%f", &area2);

    printf("digite o pib: \n");
    scanf("%f", &pib2);

    printf("=== CARTA 2 CADASTRADA COM SUCESSO! ===\n");

    printf("estado: %s\n", estado2);
    printf("codigo: %s\n", codigo2);
    printf("cidade: %s\n", cidade2);
    printf("população: %d\n", população2);
    printf("pontos turisticos: %d\n", numero_de_pontos_turisticos2);
    printf("area: %.2f\n", area2);
    printf("pib: %.2f\n", pib2);

  
  float densidade_populacional1 = população1 / area1;
  float densidade_populacional2 = população2 / area2;
  float pib_per_capita1 = pib1 / população1;
  float pib_per_capita2 = pib2 / população2;



  // Área para exibição dos dados da cidade

  printf("=== CARTAS CADASTRADAS ===\n");
  printf("Carta 1:\n");
  printf("Estado: %s\n", estado1);
  printf("Código: %s\n", codigo1);
  printf("Cidade: %s\n", cidade1);
  printf("População: %d\n", população1);
  printf("Pontos Turísticos: %d\n", numero_de_pontos_turisticos1);
  printf("Densidade Populacional: %.2f\n", densidade_populacional1);
  printf("Área: %.2f\n", area1);
  printf("PIB: %.2f\n", pib1);
  printf("PiB per capita: %.2f\n", pib_per_capita1);

  printf("Carta 2:\n");
  printf("Estado: %s\n", estado2);
  printf("Código: %s\n", codigo2);
  printf("Cidade: %s\n", cidade2);
  printf("População: %d\n", população2);
  printf("Pontos Turísticos: %d\n", numero_de_pontos_turisticos2);
  printf("Densidade Populacional: %.2f\n", densidade_populacional2);
  printf("Área: %.2f\n", area2);
  printf("PIB: %.2f\n", pib2);
  printf("PiB per capita: %.2f\n", pib_per_capita2);

  printf("=== FIM DO CADASTRO DAS CARTAS! ===\n");
  printf("Agora que as cartas estão cadastradas, vamos comparar as propriedades das cidades para descobrir qual é a melhor carta!\n");

  printf("Pressione uma tecla para comparar as cartas...\n");
  getchar(); // Aguarda o usuário pressionar uma tecla

  printf("Comparando as cartas...\n");

  printf("Se o resultado for 1 significa que a carta1 é vencedora, se for 0 significa que a carta2 é vencedora.\n");

  printf("A população da Carta 1 é maior que a população da carta 2? a Carta %d venceu\n", população1 > população2);
  printf("O PIB da Carta 1 é maior que o PIB da carta 2? a Carta %d venceu\n", pib1 > pib2);
  printf("O numero de pontos turisticos da Carta 1 é maior que o numero de pontos turisticos da Carta 2? A Carta %d Venceu\n", numero_de_pontos_turisticos1 > numero_de_pontos_turisticos2);
  printf("A densidade populacional da Carta 1 é maior que a densidade populacional da Carta 2? A Carta %d Venceu\n", densidade_populacional1 > densidade_populacional2);
  printf("O PIB per capita da Carta 1 é maior que o PIB per capita da Carta 2? A Carta %d Venceu\n", pib_per_capita1 > pib_per_capita2);
  printf("A area da Carta 1 é maior que a area da Carta 2? a Carta %d venceu\n", area1 > area2);

  printf("Poder total carta 1: %.2f\n", (float)(população1 + pib1 + numero_de_pontos_turisticos1 + densidade_populacional1 + pib_per_capita1 + pib1));
  printf("Poder total carta 2: %.2f\n", (float)(população2 + pib2 + numero_de_pontos_turisticos2 + densidade_populacional2 + pib_per_capita2 + pib2));
  printf("A carta vencedora é: %s\n", (população1 + pib1 + numero_de_pontos_turisticos1 + densidade_populacional1 + pib_per_capita1 + pib1) > (população2 + pib2 + numero_de_pontos_turisticos2 + densidade_populacional2 + pib_per_capita2 + pib2) ? cidade1 : cidade2);

  

  


return 0;
} 
