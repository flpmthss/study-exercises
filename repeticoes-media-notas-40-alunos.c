#include <stdio.h>
#include <unistd.h>

/* Desenvolva um programa que leia 3 notas de 40 alunos, calcule e mostre a média aritmética e a situação
de aprovação de cada um deles. Lembre-se de que apenas a média igual ou acima de 7 aprova o aluno. */

int main () {
    // Declaração de variáveis
    float nota1, nota2, nota3, media;
    int i;

    // Loop para 40 alunos
    for (i = 1; i <= 40; i++) {
        printf("Aluno %d\n", i);
        printf("Digite a primeira nota: ");
        scanf("%f", &nota1);
        printf("Digite a segunda nota: ");
        scanf("%f", &nota2);
        printf("Digite a terceira nota: ");
        scanf("%f", &nota3);

        // Cálculo da média
        media = (nota1 + nota2 + nota3) / 3;

        printf("Média: %.2f\n", media);
        // Verificação da situação do aluno
        if (media >= 7) {
            printf("Você está aprovado!\n");
        } if (media >= 5 && media < 7) {
            printf("Você está de recuperação!\n");
        } if (media < 5) {
            printf("Você está reprovado!\n");
        }
        }
    return 0;
}