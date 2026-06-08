#include <stdio.h>

    int main () {
        /*
        Atribuição Simples (=)
        Atribuição com Soma (+=)
        Atribuição com Subtração (-=)
        Atribuição com Multiplicação (*=)
        Atribuição com Divisão (/=)
        */

    int numero1, numero2, resultado;

    resultado = 10;
    printf("Resultado: %d\n", resultado);

    resultado += 20; // resultado = resultado + 20
    printf("Resultado: %d\n", resultado);

    resultado -= 1; // resultado = resultado - 1
    printf("Resultado: %d\n", resultado);

    resultado *= 2; // resultado = resultado * 2
    printf("Resultado: %d\n", resultado);

    resultado /= 2; // resultado = resultado / 2
    printf("Resultado: %d\n", resultado);

    }