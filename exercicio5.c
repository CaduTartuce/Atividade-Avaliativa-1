#include <stdio.h>
#include <math.h>

int main() {
    double x1, y1, x2, y2;

    printf("Digite as coordenadas do primeiro ponto (x1 y1): ");
    scanf("%lf %lf", &x1, &y1);

    printf("Digite as coordenadas do segundo ponto (x2 y2): ");
    scanf("%lf %lf", &x2, &y2);

    // Calcula a distância usando a fórmula da distância euclidiana
    double distancia = sqrt(pow(x2 - x1, 2) + pow(y2 - y1, 2));

    // Exibe o resultado com 4 casas decimais
    printf("A distância entre os pontos (%.4lf, %.4lf) e (%.4lf, %.4lf) é %.4lf\n", x1, y1, x2, y2, distancia);

    return 0;
}