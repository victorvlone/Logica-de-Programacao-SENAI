#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main () {

    setlocale(LC_ALL, "portuguese");

    int i, numero, soma;

    soma = 0;
    for ( i = 1; i <= 5; i++){
        printf("Digite o %d� n�mero:", i);
        scanf("%d", &numero);
        soma += numero;
    }

    printf("\nEssa � a soma dos n�meros digitados: %d\n", soma);

    return 0;
}