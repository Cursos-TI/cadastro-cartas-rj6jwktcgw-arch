#include <stdio.h>

int main(){

    int nota1;
    int nota2;
    int nota3;
    char nome_aluno[50];

    printf("bem vindo a calculadora de media\n");

    printf("digite o nome do aluno: \n");
    scanf("%s", nome_aluno);

    printf("digite a primeira nota: \n");
    scanf("%d", &nota1);

    printf("digite a segunda nota: \n");
    scanf("%d", &nota2);

    printf("digite a terceira nota: \n");
    scanf("%d", &nota3);

    float soma_notas = (float) nota1 + nota2 + nota3;
    float media = soma_notas / 3;  

    printf("a soma das notas do aluno %s é: %.2f\n", nome_aluno, soma_notas);
    printf("a media das notas do aluno %s é: %.2f\n", nome_aluno, media);

    return 0;
}