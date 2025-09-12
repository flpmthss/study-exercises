#include <stdio.h>
#include <unistd.h>

/*Desenvolva um programa que leia um número N e, em seguida, uma lista de N números inteiros.
Esse programa também deve calcular e mostrar a soma dos números pares e dos números ímpares da lista.*/

int main() {
    // Declaração de variáveis
    int n, numero, somaPar, somaImpar, contador;

    // Inicialização das variáveis
    somaPar = 0;
    somaImpar = 0;

    // Solicita a quantidade de números a serem lidos
    printf ("Digite a quantidade de repeticoes de numeros: \n");
    scanf("%d", &n);
    sleep(1);

    // Loop para ler os números e calcular as somas
    for (contador = 1; contador <= n; contador++) {
        printf ("\nDigite um numero: \n");
        scanf("%d", &numero);
        sleep(1);

        // Verifica se o número é par ou ímpar e atualiza as somas correspondentes
        if (numero % 2 == 0) {
            somaPar = somaPar + numero;
        } else {
            somaImpar = somaImpar + numero;
        }
    }

    // Exibe os resultados
    printf ("\nA soma dos numeros pares = %d\n", somaPar);
    printf ("A soma dos numeros impares = %d\n\n", somaImpar);
    
    return 0;
}