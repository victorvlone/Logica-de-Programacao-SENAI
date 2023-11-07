#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main () {

    setlocale(LC_ALL, "portuguese");

    int i;

    printf("Esses são os números pares de 1 a 20: \n");

    for (i = 1; i <= 20; i++){
        if (i % 2 == 0){
            printf("%d\n", i);
        }

    }

    return 0;
}