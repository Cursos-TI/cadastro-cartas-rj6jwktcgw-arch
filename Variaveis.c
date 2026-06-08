#include <stdio.h>

int main (){
    int a= 10;
    int b= 3;
    int soma= a + b;
    int diferenca= a - b;
    int produto= a * b;
    int quociente= a / b;

    float x = 5.5;
    float y = 2.2;
    float soma1 = x + y;
    float diferenca1 = x - y;
    float produto1 = x * y;
    float quociente1 = x / y;

    printf("Soma: %d\n", soma);
    printf("Diferença: %d\n", diferenca);  
    printf("Produto: %d\n", produto);
    printf("Quociente: %d\n", quociente);   

    printf("Soma: %.2f\n", soma1);
    printf("Diferença: %.2f\n", diferenca1);
    printf("Produto: %.2f\n", produto1);     
    printf("Quociente: %.2f\n", quociente1);

    return 0;
    



}