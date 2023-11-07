#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main () {

    setlocale(LC_ALL, "portuguese");

    float media, primeiranota, segundanota;

    printf("Digite a primeira nota: ");
    scanf("%f", &primeiranota);

    printf("Digite a segunda nota: ");
    scanf("%f", &segundanota);

    system("CLS || clear");

    media = (primeiranota + segundanota) / 2;

    printf("\n");
    printf("MEDIA: %.1f", media);


    return 0;
}

