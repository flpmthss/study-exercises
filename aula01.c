// Essa linha de código é a importação da biblioteca padrão de entrada e saída em C
#include <stdio.h>
#include <unistd.h>

//Função principal do programa
int main() {
    const char nomeUm[10] = "Estácio"; // Declaração e inicialização de uma string constante
    const char nomeDois[15] = "Anhanhaguera"; // Declaração e inicialização de outra string constante
    char nomePessoa[30]; // Declaração de uma string para armazenar o nome do usuário

    // Imprime as strings formatadas com espaços específicos
    printf("%9s:%14s, aonde fica a nhanharia?\n", nomeUm, nomeDois);
    sleep(2); // Pausa a execução do programa por 3 segundos

    // Atribui o valor de nomeDois ao ponteiro nomePessoa
    printf("%14s: A nhanharia fica à direita.\n", nomeDois);
    sleep(2); // Pausa a execução do programa por 3 segundos

    printf("%9s: Obrigado, nhanhigo.\n", nomeUm);

    printf("Como você se chama? \n");
    scanf("%29s", nomePessoa); // Lê uma string do usuário e armazena em nomePessoa
    printf("\nPrazer em te conhecer, %s!\n", nomePessoa); // Imprime uma mensagem de boas-vindas com o nome fornecido

    return 0; // Indica que o programa terminou com sucesso
}