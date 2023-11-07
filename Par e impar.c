#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main () {

    setlocale(LC_ALL, "portuguese");

    int numero;

    printf("Digite um número qualquer: ");
    scanf("%d", &numero);
    printf("\n");

    if(numero % 2 == 0){
        printf("O número é par!");
    } else{
        printf("O número é impar!");
    }

    return 0;
}