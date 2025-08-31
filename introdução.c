#include <stdio.h>
#include <unistd.h>

int main() {

    const char nomeDev[10] = "Mat";
    char nomeEstudante[25];

    printf("E aí novos Devs! Belê?\n");
    sleep(2);
    printf("Me chamo %s. Sou estudante de Ciência da Computação(CC)\n", nomeDev);
    sleep(2);
    printf("Tô mó empolgado que estamos aqui codando juntos, mas não esquenta.\n");
    sleep(3);
    printf("Hoje vamos bater só aquele papo de parceiros. hehe\n");
    sleep(2);
    
    printf("Mas e aí, como você se chama?\n");
    scanf("%24s", nomeEstudante);
    sleep(1);

    printf("Ih, ala! '%s'... Nome maneiro! hehe!\n", nomeEstudante);
    sleep(2);
    printf("De toda forma, seja bem vindo a Comunidade 'Olá Mundo!'\n");
    sleep(2);
    printf("Aqui agora é nossa casa de estudo.\n");
    sleep(2);
    printf("Espero que você consiga adquirir muito conhecimento através de nossa biblioteca.\n");
    sleep(3);
    printf("Ah e sim... A gente tem uma. rs\n");
    sleep(2);
    printf("Aqui estamos todos começando juntos. Então não se sinta acanhado pra perguntar algo. rs\n");
    sleep(3);
    printf("Então, mais uma vez...\nSeja bem vindo!\n");

    return 0;
}