#include <stdio.h>

int main() {
    int numAlunos = 30;
    double notas[numAlunos];
    double mediaGeral = 0.0;

    for (int i = 0; i < numAlunos; i++) {
        double n1, n2, n3;
        printf("Digite as notas do aluno %d (n1 n2 n3): ", i + 1);
        scanf("%lf %lf %lf", &n1, &n2, &n3);

        // Calcula a média ponderada
        double mediaPonderada = (n1 * 2 + n2 * 4 + n3 * 4) / 10;

        // Acumula a média na média geral
        mediaGeral += mediaPonderada;

        // Imprime a média do aluno
        printf("Média do aluno %d: %.2lf - ", i + 1, mediaPonderada);

        // Verifica se o aluno foi aprovado ou reprovado
        if (mediaPonderada >= 7.0) {
            printf("Aprovado\n");
        } else {
            printf("Reprovado\n");
        }
    }

    // Calcula a média geral da turma
    mediaGeral /= numAlunos;

    printf("\nMédia geral da turma: %.2lf\n", mediaGeral);

    return 0;
}