#include <stdio.h>

int main() {
    double chico_altura = 1.50; // Altura inicial de Chico em metros
    double ze_altura = 1.10;    // Altura inicial de Zé em metros
    int anos = 0;              // Inicialmente, nenhum ano passou

    while (ze_altura <= chico_altura) {
        chico_altura += 0.02;   // Chico cresce 2 centímetros por ano (0.02 metros)
        ze_altura += 0.03;      // Zé cresce 3 centímetros por ano (0.03 metros)
        anos++;
    }

    printf("Serão necessários %d anos para que Zé seja maior que Chico.\n", anos);

    return 0;
}