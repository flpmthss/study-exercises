#include <stdio.h>
#include <unistd.h>

int main() {
    float notaM1, notaM2, notaM3, media;

    printf("Por favor, digite a primeira nota: ");
    scanf("%f", &notaM1);
    printf("Por favor, digite a segunda nota: ");
    scanf("%f", &notaM2);
    printf("Por favor, digite a terceira nota: ");
    scanf("%f", &notaM3);

    media = (notaM1 + notaM2 + notaM3) / 3;

    printf("A média de suas notas é: %.2f\n", media);
    sleep(2);

    if (media >= 7) {
        printf("Parabéns! Você foi aprovado!\n");
    } else if (media >= 5 && media < 7) {
        printf("Você está de recuperação.\n");
    } else
    {
        printf("Infelizmente você foi reprovado.\n");
    }
    
}