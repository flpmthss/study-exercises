#include <stdio.h>

/*
Em uma turma de 10 alunos, cada um faz 3 provas por semestre.
Além de armazenar as 3 provas dos 10 alunos, existe a necessidade de mostrar:
A média de cada prova, a média de cada aluno e a média da turma.
Escreva um programa que leia as notas das 3 provas dos 50 alunos e mostre as médias
*/

int main() {
    float prova1[4], prova2[4], prova3[4];
    float mediaProva, mediaAluno, mediaTurma, somaTurma;

    for (int i = 0; i < 4; i++) {
        printf("Digite a nota da prova 1 do aluno %d: ", i + 1);
        scanf("%f", &prova1[i]);
        printf("Digite a nota da prova 2 do aluno %d: ", i + 1);
        scanf("%f", &prova2[i]);
        printf("Digite a nota da prova 3 do aluno %d: ", i + 1);
        scanf("%f", &prova3[i]);
    }
    for (int i = 0; i < 4; i++) {
         mediaProva = (prova1[i] + prova2[i] + prova3[i]) / 3;
         mediaAluno += mediaProva;

         somaTurma = (prova1[i] + prova2[i] + prova3[i]);
         mediaTurma = somaTurma / 10;
    }
    for (int i = 0; i < 4; i++) {
        printf("O aluno %d - Notas:\ntirou %.2f na prova 1, %.2f na prova 2 e %.2f na prova 3. Teve Media de: %.2f nas provas e ficou com a media: %.2f\n", i + 1,prova1, prova2, prova3, mediaProva, mediaAluno);
    }
}