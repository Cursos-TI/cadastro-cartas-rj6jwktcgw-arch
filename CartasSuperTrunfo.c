#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das cartas
// Objetivo: No nível novato você deve criar as cartas representando as cidades utilizando scanf para entrada de dados e printf para exibir as informações.

int main() {


  // Área para definição das variáveis para armazenar as propriedades das cidades

  //variáveis para a carta 1
  char estado1[2]= "RS";
  char codigo1[3]= "A01";
  char cidade1[20]= "ijui";
  int população1= 5776; 
  int numero_de_pontos_turisticos1= 5;
  float area1= 783.0;
  float pib1= 1200000000.00;


  //variáveis para a carta 2
  char estado2[2]= "SC";
  char codigo2[3]= "A02";
  char cidade2[20]= "florianopolis";  
  int população2= 500000; 
  int numero_de_pontos_turisticos2= 10;
  float area2= 500.0;
  float pib2= 2000000000.00;  


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



  // Área para exibição dos dados da cidade

  printf("=== CARTAS CADASTRADAS ===\n");
  printf("Carta 1:\n");
  printf("Estado: %s\n", estado1);
  printf("Código: %s\n", codigo1);
  printf("Cidade: %s\n", cidade1);
  printf("População: %d\n", população1);
  printf("Pontos Turísticos: %d\n", numero_de_pontos_turisticos1);
  printf("Área: %.2f\n", area1);
  printf("PIB: %.2f\n", pib1);

  printf("Carta 2:\n");
  printf("Estado: %s\n", estado2);
  printf("Código: %s\n", codigo2);
  printf("Cidade: %s\n", cidade2);
  printf("População: %d\n", população2);
  printf("Pontos Turísticos: %d\n", numero_de_pontos_turisticos2);
  printf("Área: %.2f\n", area2);
  printf("PIB: %.2f\n", pib2);

return 0;
} 
