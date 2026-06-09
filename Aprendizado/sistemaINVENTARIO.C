#include <stdio.h>  


    int main(){
        char produtoA[30];
        char produtoB[30];

        unsigned int estoqueA = 1000;
        unsigned int estoqueB = 2000;

        float valorA = 10.50;
        float valorB = 20.40;

        unsigned int estoque_minimoA = 500;
        unsigned int estoque_minimoB = 2500;

        double valorTotalA;
        double valorTotalB;

        int resultadoA, resultadoB;

        printf("Produto %s tem estoque %u e o valor unitario é R$ %.2f\n", produtoA, estoqueA, valorA);
        printf("Produto %s tem estoque %u e o valor unitario é R$ %.2f\n", produtoB, estoqueB, valorB);

        resultadoA = estoqueA > estoque_minimoA;
        resultadoB = estoqueB > estoque_minimoB;    

        printf("O produto %s tem estoque tem estoque minimo %d\n", produtoA, resultadoA);
        printf("O produto %s tem estoque tem estoque minimo %d\n", produtoB, resultadoB);

        printf("O valor total de A (R$ %.2f) é maior que o valor total de b (R$ %.2f): %d\n", (estoqueA * valorA), (estoqueB * valorB), (estoqueA * valorA) > (estoqueB * valorB));


    }