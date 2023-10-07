#include <stdio.h>

int main() {
    double salario, mediaSalario, maiorSalario;
    int numFilhos, totalPessoas, pessoasAte100;
    double totalSalario = 0.0;
    int totalFilhos = 0;
    maiorSalario = 0.0;
    pessoasAte100 = 0;

    totalPessoas = 0;

    do {
        printf("Digite o salário (ou um valor negativo para sair): ");
        scanf("%lf", &salario);

        if (salario >= 0) {
            printf("Digite o número de filhos: ");
            scanf("%d", &numFilhos);

            totalPessoas++;
            totalSalario += salario;
            totalFilhos += numFilhos;

            if (salario > maiorSalario) {
                maiorSalario = salario;
            }

            if (salario <= 100.0) {
                pessoasAte100++;
            }
        }
    } while (salario >= 0);

    if (totalPessoas > 0) {
        mediaSalario = totalSalario / totalPessoas;
        double mediaFilhos = (double)totalFilhos / totalPessoas;
        double percentualAte100 = (double)pessoasAte100 / totalPessoas * 100.0;

        printf("a) Média do salário da população: %.2lf\n", mediaSalario);
        printf("b) Média do número de filhos: %.2lf\n", mediaFilhos);
        printf("c) Maior salário: %.2lf\n", maiorSalario);
        printf("d) Percentual de pessoas com salário até R$100,00: %.2lf%%\n", percentualAte100);
    } else {
        printf("Nenhum dado foi inserido.\n");
    }

    return 0;
}