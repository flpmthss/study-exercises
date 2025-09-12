#include <stdio.h>
#include <unistd.h>

int main () {
    // Exercício 3: Repetições
    // Faça um programa que leia o salário de 7 funcionários. No final, mostre
    // o maior salário e a média salarial da empresa.

    // Declaração de variáveis
    float salario, salarioMaior, soma, media;
    salarioMaior = 0;
    soma = 0;

    // Loop para ler os salários dos 7 funcionários
    for (int contador = 0; contador < 7; contador++) {

        // Solicita o salário do funcionário
        printf("Digite o salário do funcionário %d: \n", contador + 1);
        scanf("%f", &salario);

        // Atualiza a soma dos salários e verifica se é o maior salário
        soma = soma + salario;

        // Verifica se o salário atual é maior que o maior salário registrado
        if (salario > salarioMaior){
            // Atualiza o maior salário
            salarioMaior = salario;
        }
    }

    // Calcula a média salarial
    media = soma / 7;

    printf("\n--- Resultados ---\n");
    sleep(1);
    printf("O maior salário digitado é: R$ %.2f\n", salarioMaior);
    sleep(1);
    printf("A média salarial da empresa é: R$ %.2f\n", media);

    return 0;
}