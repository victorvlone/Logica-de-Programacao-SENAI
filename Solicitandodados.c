#include <stdio.h>
#include <stdlib.h>

int main () {

    char sexo;
    int idade;
    float peso;

    printf("Digite sua idade: ");
    scanf("%d", &idade);
    printf("Digite seu peso: ");
    scanf("%f", &peso);
    fflush(stdin);
    printf("Digite seu sexo: ");
    scanf("%c", &sexo);
    system("cls");

    printf("Idade: %d anos\n", idade);
    printf("Peso: %.1fKg\n", peso);
    printf("Sexo: %c\n", sexo);

    return 0;
}