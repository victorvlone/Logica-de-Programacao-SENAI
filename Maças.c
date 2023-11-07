#include <stdio.h>
#include <locale.h>

int main () {

    int N;
    float macas;

    printf("Quantas maças foram compradas? ");
    scanf("%d", &N);

    if( N >= 12){
        macas = N;
    }
    else {
        macas = N * 1.30;
    }

    printf("Custo total: %.2f\n", macas);

    return 0;
}