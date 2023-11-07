#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main () {

    setlocale(LC_ALL, "portuguese");

    float N;

    printf("Digite um número: ");
    scanf ("%f", &N);
    printf("\n");

    if (N > 10){
        printf("É MAIOR QUE 10!");
    }
    else if(N == 10){
        printf("O NÚMERO É 10!");
    }
    else {
        printf("NÃO É MAIOR QUE 10!");
    }

    return 0;
}