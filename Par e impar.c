#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main () {

    setlocale(LC_ALL, "portuguese");

    int numero;

    printf("Digite um n�mero qualquer: ");
    scanf("%d", &numero);
    printf("\n");

    if(numero % 2 == 0){
        printf("O n�mero � par!");
    } else{
        printf("O n�mero � impar!");
    }

    return 0;
}