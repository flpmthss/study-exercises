#include <stdio.h>
#include <unistd.h>

int main() {
    // Declaração de constantes com o tamanho dos vetores
    const int tamNumber = 10, tamList = 5;
    // Declaração do vetor e variáveis auxiliares
    int number[tamNumber], posNum, achou, list;

    printf("Digite 10 valores inteiros: \n");

    // Leitura dos valores para o vetor
    for (int i = 0; i < tamNumber; i++) {
        scanf("%d", &number[i]);
    }

    printf("Regitrando valores...\n");
    sleep(2); // Pausa de 2 segundos para simular o registro dos valores

    printf("Digite 5 valores para buscar no vetor: \n");
    // Laço de repetição para ler os valores a serem buscados
    for (int i = 0; i < tamList; i++) {
        scanf("%d", &list);
    }

    printf("Cruzando Valores...\n");
    sleep(2);

    for (int i = 0; i < posNum; i++) {
        // Inicialização das variáveis auxiliares
        achou = 0;
        posNum = 0;        
        // Laço de repetição para buscar o valor no vetor
        while (posNum < tamNumber && achou == 0) {
            // Verifica se o valor foi encontrado. Caso ache, altera a variável achou para 1
            if (list == number[posNum]) {
            achou = 1;
            } else {
            posNum++;
            }
        }        
         //  Condicional para imprimir o resultado da busca
        if (achou == 1) {
            printf("O valor %d foi encontrado na posicao %d do vetor.\n", list, posNum);
        } else {
            printf("O valor %d nao foi encontrado no vetor.\n", list);
        }
    }
    return 0;
}