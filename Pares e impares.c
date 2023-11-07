#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main () {

    setlocale(LC_ALL, "portuguese");

    int i, numero, contPar = 0, contImpar = 0;

    for (i = 1; i <= 5; i++){
        printf("Digite o %dº número: ", i);
        scanf("%d", &numero);
        numero % 2 == 0 ? contPar++ : contImpar++;
    }

    printf("\nQuantidade de números pares: %d", contPar);
    printf("\nQuantidade de números impares: %d", contImpar);

    return 0;
}