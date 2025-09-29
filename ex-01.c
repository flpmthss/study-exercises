#include <stdio.h>

int main() {
    // array para armazenar 5 números inteiros
    int numeros[5] = {0};

    printf("Digite 5 números inteiros:\n");

    // loop para ler os números e armazená-los no array
    for (int i = 1; i <= 5; i++) {
        scanf("%d", &numeros[i]);
        getchar(); // Limpar o buffer do teclado
    }

    for (int i = 5; i >= 1; i--) {
        printf("%d", numeros[i]);
    }
    printf("\n");
}