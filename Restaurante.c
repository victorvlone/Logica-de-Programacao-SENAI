#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main () {

    setlocale(LC_ALL, "portuguese");

    int codigo;

    printf("C�DIGO          PRATO          VALOR\n\n");
    printf("  1            Picanha        R$25,00\n");
    printf("  2            Lasanha        R$20,00\n");
    printf("  3           Strogonoff      R$18,00\n");
    printf("  4         Bife acebolado    R$15,00\n");
    printf("  5          P�o com ovo      R$ 5,00\n\n");

    printf("Digite um c�digo: ");
    scanf("%d", &codigo);
    system("CLS || Clear");

    switch (codigo){
    case 1:
        printf("Nome do prato: Picanha\n");
        printf("Valor � pagar: R$25,00\n");
        break;
    case 2:
        printf("Nome do prato: Lasanha\n");
        printf("Valor � pagar: R$20,00\n");
        break;
    case 3:
        printf("Nome do prato: Strogonoff\n");
        printf("Valor � pagar: R$18,00\n");
        break;
    case 4:
        printf("Nome do prato: Bife acebolado\n");
        printf("Valor � pagar: R$15,00\n");
        break;
    case 5:
        printf("Nome do prato: P�o com ovo\n");
        printf("Valor � pagar: R$5,00\n");
        break; 
    default:
        printf("Prato indisponivel!\n");
        break;
    }

    return 0;
}