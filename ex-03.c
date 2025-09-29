#include <stdio.h>
#include <unistd.h>
#include <ctype.h> // Biblioteca para funções de manipulação de caracteres [toupper, tolower]

int main() {
    // array para armazenar a contagem de cada vogal
    int ind[10] = {0};
    char vogais[5] = {'a', 'e', 'i', 'o', 'u'};
    char letra;

    printf("Digite 10 letras aleatórias:\n");

    //
    for (int i = 0; i < 10; i++) {
        scanf(" %c", &letra);

        //switch para verificar se a letra é uma vogal e incrementar o contador correspondente
        switch (tolower(letra)) {
            case 'a':
                ind[0]++;
                break;
            case 'e':
                ind[1]++;
                break;
            case 'i':
                ind[2]++;
                break;
            case 'o':
                ind[3]++;
                break;
            case 'u':
                ind[4]++;
                break;
        }
    }

    printf("\n-----RESULTADO FINAL-----\n");
    // exibir a contagem de cada vogal
    for (int i = 0; i < 5; i++) {
        printf("A vogal '%c' apareceu %d vezes.\n", (toupper(vogais[i])), ind[i]);
    }
    return 0;
}