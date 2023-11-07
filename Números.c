#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{

    setlocale(LC_ALL, "portuguese");

    int N1, N2, N3;

    printf("Digite o 1º número: ");
    scanf("%d", &N1);
    printf("Digite o 2º número: ");
    scanf("%d", &N2);
    printf("Digite o 3º número: ");
    scanf("%d", &N3);
    system("CLS || clear");

    printf("Números informados: %d, %d, %d\n", N1, N2, N3);

    printf("O maior Número: ");
    if (N1 > N2 && N1 > N3){
        printf("%d\n", N1);
    } else if (N2 > N1 && N2 > N3){
        printf("%d\n", N2);
    } else{
        printf("%d\n", N3);
    }

    printf("O menor Número: ");
    if (N1 < N2 && N1 < N3){
        printf("%d\n", N1);
    } else if (N2 < N1 && N2 < N3){
        printf("%d\n", N2);
    } else{
        printf("%d\n", N3);
    }

    return 0;
}