#include <stdio.h>
#include <unistd.h>

int main() {
    const int tamNumber = 10, tamList = 5;
    int number[tamNumber], posicao, posNum, achou, num;

    printf("Digite 10 valores inteiros: \n");

    for (posicao = 0; posicao < tamNumber; posicao++) {
        scanf("%d", &number[posicao]);
    }
    printf("Digite 5 valores para buscar no vetor: \n");
    for (posicao = 0; posicao < tamList; posicao++) {
        scanf("%d", &num);
        achou = 0;
        posNum = 0;
        while (posNum < tamNumber && achou == 0) {
            if (num == number[posNum]) {
            achou = 1;
            } else {
            posNum++;
        }
    }
        
        if (achou == 1) {
            printf("O valor %d foi encontrado na posicao %d do vetor.\n", num, posNum);
        } else {
            printf("O valor %d nao foi encontrado no vetor.\n", num);
            }
    }
    return 0;
}