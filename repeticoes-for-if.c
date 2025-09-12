    #include <stdio.h>
    #include <unistd.h>

    //Desenolver um contador de números e informar o maior numero digitado pelo usuário.
    //O programa deve solicitar ao usuário que digite números inteiros.

    int main () {
        int contador, numero, maiorNumero;
        maiorNumero = 0;

        for (contador = 0; contador <= 7; contador++) {
            printf("Digite um valor inteiro: \n");
            scanf("%d", &numero);
            if (numero > maiorNumero){
                maiorNumero = numero;
            }
        }
            printf("O maior número digitado até agora é: %d\n", maiorNumero);
            sleep(1);
    }