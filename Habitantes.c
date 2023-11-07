#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main () {

    setlocale(LC_ALL, "portuguese");

    int idade, MaiorIdade = 0, MenorIdade = 150, contagemSalario = 0;
    char sexo;
    float salario, SomaSalario = 0;
    int contagemMulheres = 0;
    int codigo;

    do{

        printf("Digite sua idade: ");
        scanf("%d", &idade);

        if (idade > MaiorIdade){
            MaiorIdade = idade;
        } else if (idade < MenorIdade){
            MenorIdade = idade;
        }
        
        fflush(stdin);
        
        printf("Digite seu sexo: ");
        scanf("%c", &sexo);

        printf("Digite seu salário: ");
        scanf("%f", &salario);
        SomaSalario += salario;
        contagemSalario++;

        if (sexo == 'F' && salario > 5000){
            contagemMulheres++;
        }
        
        system("CLS || Clear");

        printf("Código |          Descrição\n");
        printf("   1   |      Adicionar Pessoa\n");
        printf("   2   |  Sair e exibir resultados\n\n");

        printf("Digite um código: ");
        scanf("%d", &codigo);

        system("CLS || Clear");

    } while (codigo == 1);
    
    float Mediasalario =  SomaSalario / contagemSalario;
    printf("Média de salário do grupo: %.2f\n", Mediasalario);
    printf("Maior Idade do grupo: %d\n", MaiorIdade);
    printf("Menor idade do grupo: %d\n", MenorIdade);
    printf("Quantidade de mulheres %d\n", contagemMulheres);

    return 0;
}

