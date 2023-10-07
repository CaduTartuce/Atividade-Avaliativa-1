#include <stdio.h>
#include <math.h>

int main() {
    double x;

    printf("Digite o valor de x: ");
    scanf("%lf", &x);

    // Verifique se x é maior que 4 para evitar divisão por zero
    if (x <= 4.0) {
        printf("O valor de x deve ser maior que 4 para evitar divisão por zero.\n");
    } else {
        // Calcule f(x) usando a fórmula fornecida
        double resultado = (pow(x, 5) + 3 * x) / sqrt(pow(x, 2) - 16);

        // Imprima o resultado
        printf("f(x) = %.4lf\n", resultado);
    }

    return 0;
}