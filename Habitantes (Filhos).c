#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main () {

    setlocale(LC_ALL, "portuguese");

    float MaiorSalario = 0, MenorSalario = 1000000;
    float salario, SomaSalario = 0;
    int contagem = 0;
    int codigo;
    int filhos, somaFilhos = 0;

    do{

        printf("Qauntos filhos voc� tem? ");
        scanf("%d", &filhos);
        somaFilhos += filhos;
        contagem++;

         printf("Digite seu sal�rio: ");
        scanf("%f", &salario);
        SomaSalario += salario;

        if (salario > MaiorSalario){
            MaiorSalario = salario;
        } else if (salario < MenorSalario){
            MenorSalario = salario;
        }
        
        system("CLS || Clear");

        printf("C�digo |          Descri��o\n");
        printf("   1   |      Adicionar Pessoa\n");
        printf("   2   |  Sair e exibir resultados\n\n");

        printf("Digite um c�digo: ");
        scanf("%d", &codigo);

        system("CLS || Clear");

    } while (codigo == 1);
    
    float Mediasalario =  SomaSalario / contagem;
    float MediaFilhos = somaFilhos / contagem;
    printf("Qauntidade familias que responderam a pesquisa: %d\n\n", contagem);
    printf("M�dia de sal�rio dapopula��o: %.2f\n", Mediasalario);
    printf("M�dia do n�mero de filhos: %.1f\n", MediaFilhos);
    printf("Maior sal�rio: %.2f\n", MaiorSalario);
    printf("Menor sal�rio: %.2f\n", MenorSalario);

    return 0;
}
