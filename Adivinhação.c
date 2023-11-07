#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main () {

    setlocale(LC_ALL, "portuguese");

    int numero;
    int NumeroParaAcertar = 5;

    printf("Tente adivinhar o número de 1 a 10: ");
    scanf("%d", &numero);

    while (numero != NumeroParaAcertar){

            if (numero > 5){
            printf("Tente um número menor: ");
            scanf("%d", &numero);
        } else {
            printf("Tente um número maior:");
            scanf("%d", &numero);
        }
        
    }   

printf("\nVocê acertou! O número é %d.\n", NumeroParaAcertar);


    return 0;
}