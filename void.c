#include <stdio.h>
#include <unistd.h>

//void: Função que não retorna valor
//Utilizamos void quando não precisamos retornar nenhum valor de uma função.

// Protótipos das funções
void obterDados();
void checarValores();
void enviarParaBancoDeDados(const char *banco);
char banco[30];

int main() {
    printf("Iniciando o processo...\n");

    printf("Me informe seu banco.\n");
    scanf("%s", banco);
    sleep(2); // Simula um atraso de 2 segundo

    obterDados();
    checarValores();
    enviarParaBancoDeDados(banco);

    // Por main ser ter um operador inteiro, retornamos 0 para indicar sucesso.
    return 0;
}

void obterDados() {
    printf("Obtendo dados...\n");
    sleep(2); // Simula um atraso de 2 segundos
}

void checarValores() {
    printf("Checando valores...\n");
    sleep(2); // Simula um atraso de 2 segundo
}

void enviarParaBancoDeDados(const char *banco) {
    printf("Enviando dados do Banco %s\n", banco);
}