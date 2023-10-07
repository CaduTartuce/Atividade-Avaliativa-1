#include <stdio.h>

int main() {
    double A, B, C;

    printf("Digite os valores dos lados do triângulo (A, B e C): ");
    scanf("%lf %lf %lf", &A, &B, &C);

    // Verifique se os lados formam um triângulo
    if (A + B > C && A + C > B && B + C > A) {
        // Verifique o tipo de triângulo
        if (A == B && B == C) {
            printf("É um triângulo equilátero.\n");
        } else if (A == B || A == C || B == C) {
            printf("É um triângulo isósceles.\n");
        } else {
            printf("É um triângulo escaleno.\n");
        }
    } else {
        printf("Não é um triângulo válido.\n");
    }

    return 0;
}