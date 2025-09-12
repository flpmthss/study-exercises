#include <stdio.h>
#include <unistd.h>

//Desenvolver uma contagem de 7 em 7 até 100, utilizando a estrutura de repetição 'for'.
//Dica: Utilize o operador de módulo (%) para verificar se o número é múltiplo de 7.

int main () {
    //Contagem de 7 em 7 até 100
    for (int i = 0; i <= 100; i++) { //Loop de 0 a 100
        if (i % 7 == 0) { //Verifica se o número é múltiplo de 7
            printf("%d\n", i);
            sleep(1);
        }
    }
}