#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main () {

    setlocale(LC_ALL, "portuguese");

    char sexo;
    float altura, pesoideal;

    printf("Digite seu sexo: ");
    scanf("%c", &sexo);
    printf("Digite sua altura: ");
    scanf("%f", &altura);

    switch (sexo){
    case 'M':
        pesoideal = (72.7 * altura) - 58;
        break;
    case 'F':
        pesoideal = (62.1 * altura) - 44.7;
        break;
    }

    printf("Peso ideal: %.1f\n", pesoideal);

    return 0;
}