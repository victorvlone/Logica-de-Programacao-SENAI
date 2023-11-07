#include <stdio.h>
#include <locale.h>
#include <stdlib.h>

int main () {

    setlocale (LC_ALL, "portuguese");

    int PrimeiroValor, SegundoValor, soma, produto;
    float media;

    printf("Digite o primeiro valor: ");
    scanf("%d", &PrimeiroValor);
    printf("Digite o segundo valor: ");
    scanf("%d", &SegundoValor);
    printf("\n\n");

    soma = PrimeiroValor + SegundoValor;
    media = soma / 2;
    printf("Soma: %d\n", soma);
    printf("Média: %.1f\n", media);
    
    if(PrimeiroValor > SegundoValor){
        produto = PrimeiroValor * SegundoValor;
        printf("Produto: %d\n", produto);
        printf("Maior valor: %d\n", PrimeiroValor);
        printf("Menor valor: %d\n", SegundoValor);
    }
    else {
        produto = SegundoValor * PrimeiroValor;
        printf("Produto: %d\n", produto);
        printf("Maior valor: %d\n", SegundoValor);
        printf("Menor valor: %d\n", PrimeiroValor);
    }

    return 0;
}