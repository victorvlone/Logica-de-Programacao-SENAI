#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main () {

    setlocale(LC_ALL, "portuguese");

    int numero;
    int NumeroParaAcertar = 5;

    printf("Tente adivinhar o n�mero de 1 a 10: ");
    scanf("%d", &numero);

    while (numero != NumeroParaAcertar){

            if (numero > 5){
            printf("Tente um n�mero menor: ");
            scanf("%d", &numero);
        } else {
            printf("Tente um n�mero maior:");
            scanf("%d", &numero);
        }
        
    }   

printf("\nVoc� acertou! O n�mero � %d.\n", NumeroParaAcertar);


    return 0;
}