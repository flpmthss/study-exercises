#include <stdio.h>
#include <unistd.h>

/*Desenvolva um programa que leia, inicialmente, a porcentagem de reajuste dos salários dos 
funcionários de uma empresa. Na sequência, deve ler o salário de cada um dos 50 funcionários, 
calcular e mostrar o novo salário reajustado, aplicando a porcentagem de ajuste sobre os 
respectivos salários atuais. Ao final, o maior salário reajustado da empresa deve ser 
apresentado na tela. */

int main () {
    float reajuste, salario, novoSalario, maiorSalario;
    maiorSalario = 0;

    printf("Digite a porcentagem de reajuste: ");
    scanf("%f", &reajuste);
    sleep(1);

    for (int contador = 1; contador <= 3; contador++) {
        printf("\nDigite o salario do funcionario %d: ", contador);
        scanf("%f", &salario);
        sleep(1);

        novoSalario = salario + (salario * reajuste / 100);
        printf("\nO novo salario do funcionario %d esta: R$ %.2f\n", contador, novoSalario);
        sleep(1);

        if (novoSalario > maiorSalario) {
            maiorSalario = novoSalario;
        }

    }

    printf("\nO maior salario reajustado ate agora esta: R$ %.2f\n\n", maiorSalario);
    
    return 0;
}