#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{

    setlocale(LC_ALL, "portuguese");

    int N1, N2, N3;

    printf("Digite o 1� n�mero: ");
    scanf("%d", &N1);
    printf("Digite o 2� n�mero: ");
    scanf("%d", &N2);
    printf("Digite o 3� n�mero: ");
    scanf("%d", &N3);
    system("CLS || clear");

    printf("N�meros informados: %d, %d, %d\n", N1, N2, N3);

    printf("O maior N�mero: ");
    if (N1 > N2 && N1 > N3){
        printf("%d\n", N1);
    } else if (N2 > N1 && N2 > N3){
        printf("%d\n", N2);
    } else{
        printf("%d\n", N3);
    }

    printf("O menor N�mero: ");
    if (N1 < N2 && N1 < N3){
        printf("%d\n", N1);
    } else if (N2 < N1 && N2 < N3){
        printf("%d\n", N2);
    } else{
        printf("%d\n", N3);
    }

    return 0;
}