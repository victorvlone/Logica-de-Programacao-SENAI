#include <stdio.h>
#include <locale.h>
#include <stdlib.h>

int main () {

    setlocale(LC_ALL, "portuguese");

    int idade;

    printf("Digite sua idade: ");
    scanf("%d", &idade);
    printf("\n");

    if (idade > 65 || idade < 18){
        printf("Voc� n�o � obrigado a votar.");
    }
    else{
        printf("Voc� � obrigado a votar!");
    }

    return 0;
}