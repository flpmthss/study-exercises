#include <stdio.h>
#include <unistd.h>

//Código de um exemplo de reconhecimento de padrões com repetições.
int main() {
    float prova1 = 8, prova2 = 7, mediaProvas;
    float trabalho1 = 8, trabalho2 = 9, mediaTrabalhos;

    //Melhor forma: float calcularMedia(float a, float b) { return (a + b) / 2; }
    //int main() { float prova1 = 8, prova2 = 7, trabalho1 = 8, trabalho2 = 9; ... }

    mediaProvas = (prova1 + prova2) / 2;
    mediaTrabalhos = (trabalho1 + trabalho2) / 2;

    printf("Média das provas: %.1f\n", mediaProvas);
    printf("Média dos trabalhos: %.1f\n", mediaTrabalhos);

    return 0;
}