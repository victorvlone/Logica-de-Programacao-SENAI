#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{

    setlocale(LC_ALL, "portuguese");

    int dia;

    printf("Digite um número de 1 ate 7: ");
    scanf("%d", &dia);

    switch (dia){
    case 1:
        printf("Domingo é um dia de final de semana!");
        break;
    case 2:
        printf("Segunda é um dia de semana!");
        break;
    case 3:
        printf("Terça é um dia de semana!");
        break;
    case 4:
        printf("Quarta é um dia de semana!");
        break;
    case 5:
        printf("Quinta é um dia de semana!");
        break;
    case 6:
        printf("Sexta é um dia de semana!");
        break;
    case 7:
        printf("Sabado é um dia de final de semana!");
        break;
    default:
        printf("Número invalido!");
        break;
    }

    return 0;
}