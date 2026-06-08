#include <stdio.h>

int main (){

    int a= 10;
    float b = 3.5;
    float resultado = a + b; // Variável implícita, não declarada previamente

    int a1 = 10;
    float b1 = 3;
    float quociente = (float) a1 / b1; // Variável explícita, não declarada previamente
    
    printf("Resultado: %.2f\n", resultado);
    
    printf("Quociente: %.2f\n", quociente);

    return 0;
}