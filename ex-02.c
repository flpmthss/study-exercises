#include <stdio.h>

int main() {
    // array para armazenar 10 notas
    float notas[10] = {0};
    float soma = 0.0;
    float media = 0.0;

    printf("Digite as notas do alunos:\n");

    // loop para ler as notas e armazená-las no array
    for (int i = 0; i < 10; i++) {
        printf("Nota %d: ", i + 1);
        scanf("%f", &notas[i]);
        // Calcula a soma das notas
        soma += notas[i];
        media = soma / 10;
    }

    printf("A média da turma é: %.2f\n\n", media);

    // Verifica se cada aluno está acima ou abaixo da média
     printf("-----RESULTADO FINAL-----\n");
    for (int i = 0; i < 10; i++) {
        if (notas[i] > media) {
            printf("Sua média é %.2f, você está acima da média da turma!\n", notas[i]);
        } else {
            printf("Sua média é %.2f, você está abaixo da média da turma!\n", notas[i]);
        }
    }

    return 0;
}