#include <stdio.h>
#include <unistd.h>

int main() {
    int number[5] = {0};
    int number2[5] = {0};

    printf("Digite 5 valores inteiros: \n");

    for (int i = 0; i < 5; i++) {
        scanf("%d", &number[i]);

            if (number[i] % 2 == 0) {
            number2[i] = number[i] + 1;
            } else {
            number2[i] = number[i] - 1;
        }
    }

    printf("-----RESULTADOS-----\n");

    for (int i = 0; i < 5; i++) {
        printf("Vetor original: %d - ", number[i]);
        printf("Alterado: %d\n", number2[i]);
    }
    printf("\n");
    return 0;
}