#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main (){

    setlocale(LC_ALL, "portuguese");

    int codigo, ano, TempodeEmpresa;

    printf("Digite o seu c�digo: ");
    scanf("%d", &codigo);
    system("CLS ||  Clear");

    printf("Voc� nasceu em que ano? ");
    scanf("%d", &ano);
    printf("Tem quantos anos de empresa? ");
    scanf("%d", &TempodeEmpresa);
    system("CLS || Clear");


    printf("C�digo: %d\n", codigo);
    printf("Idade: %d\n", 2023 - ano);
    printf("Tempo de trabalho: %d\n\n", TempodeEmpresa);

    2023 - ano >= 65 || TempodeEmpresa >= 30 ? 
     printf("Requerer aposentadoria.") : 
     printf("N�o requerer aposentaria.");

    return 0;
}