#include <stdio.h>

int main() {
    int voto;
    int votosCandidato[4] = {0}; // Inicializa o array de votos para cada candidato com zeros
    int votosNulos = 0;
    int votosEmBranco = 0;

    while (1) {
        printf("Digite o código do voto (0 para sair): ");
        scanf("%d", &voto);

        if (voto == 0) {
            break; // Sai do loop quando o valor 0 for inserido
        } else if (voto >= 1 && voto <= 4) {
            // Voto válido para um dos candidatos
            votosCandidato[voto - 1]++; // Incrementa o total de votos para o candidato correspondente
        } else if (voto == 5) {
            // Voto nulo
            votosNulos++;
        } else if (voto == 6) {
            // Voto em branco
            votosEmBranco++;
        } else {
            printf("Voto inválido. Tente novamente.\n");
        }
    }

    printf("Total de votos para cada candidato:\n");
    for (int i = 0; i < 4; i++) {
        printf("Candidato %d: %d votos\n", i + 1, votosCandidato[i]);
    }
    printf("Total de votos nulos: %d\n", votosNulos);
    printf("Total de votos em branco: %d\n", votosEmBranco);

    return 0;
}