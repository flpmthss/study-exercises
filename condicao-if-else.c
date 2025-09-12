#include <stdio.h>
#include <unistd.h>

int main () {
    int opcao;

    printf("Escolha um número inteiro: \n");
    scanf("%d", &opcao);

    if (opcao >= 0) {
        if (opcao == 0) {
            printf("Você escolheu o número ZERO!\n");
        }
        else {
            printf("Você escolheu um número POSITIVO!\n");
        }
    } else {
        printf("Você escolheu um número NEGATIVO!\n");
    }
    

}