#include <stdio.h>
#include <unistd.h>

//Ajustes:
//Quando o usuário responder 'n' para alguma das perguntas, o sistema deve informar que o acesso foi negado.

int main() {
    int cadastrado, ativo, logado; //Usando variáveis inteiras para representar booleanos
    char opcao; //Variável para armazenar a opção do usuário

    printf("Bem vindo ao sistema do banco!\n");
    sleep(2); //Pausa de 2 segundos para melhor experiência do usuário
    printf("Você deseja se cadastrar no nosso sistema? (s/n): ");
    scanf(" %c", &opcao); //atribuindo espaço antes de %c para capturar qualquer caractere de nova linha
    sleep(1);

    cadastrado = ativo = logado = 0; //Definindo todos como 0 (falso)

    if (opcao == 's' || opcao == 'S') { 
        cadastrado = 1; //Definindo como 1 (verdadeiro)
        printf("Ótimo! Você está cadastrado.\n");
        sleep(2);
    }

    printf("Seu quer ativar seu cadastro? (s/n): ");
    scanf(" %c", &opcao);
    sleep(1);

    if (opcao == 's' || opcao == 'S') {
        ativo = 1;
        printf("Perfeito! Seu cadastro está ativo.\n");
        sleep(2);
    }

    printf("Deseja logar no sistema? (s/n): ");
    scanf(" %c", &opcao);
    sleep(1);

    if (opcao == 's' || opcao == 'S') {
        logado = 1;
        printf("Beleza! Você está logado.\n");
        sleep(2);
    }

    if ((cadastrado = 1) && (ativo = 1) && (logado = 1)) { //Usando atribuição ao invés de comparação
        printf("Acesso concedido! Bem vindo ao sistema do banco!\n");
    } else {
        printf("Acesso negado! Verifique se você está cadastrado, ativo e logado.\n");
    }
    
}