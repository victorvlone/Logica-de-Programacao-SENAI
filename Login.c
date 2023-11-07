#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main () {

    char senha[50];
    char login[50];

    printf("Nome de usuario: ");
    fgets(login, 50, stdin);
    fflush(stdin);
    printf("Senha: ");
    fgets(senha, 50, stdin);
    system("CLS || clear");

    if (senha == "20222023" && login == "victorvlone"){
        prinf("Acesso permitido!");
    }
    else {
        printf("login ou senha incorretos!");
    }

    return 0;
}