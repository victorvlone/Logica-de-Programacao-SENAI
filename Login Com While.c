#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <time.h>
#include <string.h>

int main () {

    int senha;
    char login [500];

    do{

        fflush(stdin);

        printf("Nome de usuario: ");
        gets(login);
        printf("Digite a senha: ");
        scanf("%d", &senha);

        system("CLS || Clear");

        if (login != "VictorVlone" || senha != 123456){
            printf("Login ou senha invalidos! Tente novamente.");
            sleep(3);
            system("CLS || Clear");
        } else {
        }

    } while (login == "VictorVlone" || senha == 123456);
    
    return 0;
}