#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main () {

    setlocale(LC_ALL, "portuguese");

    float nota;
    char resposta;
    float soma = 0;
    int i = 1;

    printf("Digite a %dª nota: ", i);
    scanf("%f", &nota);
    soma += nota;
    int contagem = 1;

    fflush(stdin);

    printf("Deseja adicionar mais uma nota? ");
    scanf("%c", &resposta);

    while (resposta != 'N'){

        i++;

        printf("\nDigite a %dª nota: ", i);
        scanf("%f", &nota);
        soma += nota;
        contagem++;

        fflush(stdin);
        
        printf("Deseja adicionar mais uma nota? ");
        scanf("%c", &resposta);

    }
    
    float media = (float) soma / contagem;
    printf("\nMédia: %.2f", media);

    return 0;
}