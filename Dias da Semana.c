#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{

    setlocale(LC_ALL, "portuguese");

    int dia;

    printf("Digite um n�mero de 1 ate 7: ");
    scanf("%d", &dia);

    switch (dia){
    case 1:
        printf("Domingo � um dia de final de semana!");
        break;
    case 2:
        printf("Segunda � um dia de semana!");
        break;
    case 3:
        printf("Ter�a � um dia de semana!");
        break;
    case 4:
        printf("Quarta � um dia de semana!");
        break;
    case 5:
        printf("Quinta � um dia de semana!");
        break;
    case 6:
        printf("Sexta � um dia de semana!");
        break;
    case 7:
        printf("Sabado � um dia de final de semana!");
        break;
    default:
        printf("N�mero invalido!");
        break;
    }

    return 0;
}