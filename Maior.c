#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main () {

    setlocale(LC_ALL, "portuguese");

    float N;

    printf("Digite um n�mero: ");
    scanf ("%f", &N);
    printf("\n");

    if (N > 10){
        printf("� MAIOR QUE 10!");
    }
    else if(N == 10){
        printf("O N�MERO � 10!");
    }
    else {
        printf("N�O � MAIOR QUE 10!");
    }

    return 0;
}