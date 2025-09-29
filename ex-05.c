#include <stdio.h>
#include <unistd.h>

int main() {
    float nota[7] = {0};
    
    for (int i = 1; i <= 7; i++) {
        printf("Digite a nota do aluno %d: ", i);
        scanf("%f", &nota[i]);
    }

    printf("\n-----RESULTADO FINAL-----\n");
    printf("Notas\n");
    for (int i = 1; i <= 7; i++) {
    printf("Nota %d: %.2f\n", i, nota[i]);
    }
    return 0;
}