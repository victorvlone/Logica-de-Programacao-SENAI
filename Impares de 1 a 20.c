#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main () {

    setlocale(LC_ALL, "portuguese");

    int i;

    printf("Esses s�o os n�meros impares de 1 a 15: \n");

    for (i = 1; i <= 15; i+=2){
        printf("%d\n", i);
    }

    return 0;
}