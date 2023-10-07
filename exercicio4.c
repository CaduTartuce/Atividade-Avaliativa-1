#include <stdio.h>

int main() {
    double A, B, C;

    printf("Digite os valores dos lados do triângulo (A, B e C): ");
    scanf("%lf %lf %lf", &A, &B, &C);

    // Verifique se os lados formam um triângulo
    if (A + B > C && A + C > B && B + C > A) {
        // Calcule os quadrados dos lados
        double A2 = A * A;
        double B2 = B * B;
        double C2 = C * C;

        // Verifique o tipo de triângulo com base nos quadrados dos lados
        if (A2 + B2 == C2 || A2 + C2 == B2 || B2 + C2 == A2) {
            printf("É um triângulo retângulo.\n");
        } else if (A2 + B2 < C2 || A2 + C2 < B2 || B2 + C2 < A2) {
            printf("É um triângulo obtusângulo.\n");
        } else {
            printf("É um triângulo acutângulo.\n");
        }
    } else {
        printf("Não é um triângulo válido.\n");
    }

    return 0;
}