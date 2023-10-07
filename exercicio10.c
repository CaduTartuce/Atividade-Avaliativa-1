#include <stdio.h>
#include <string.h>

int main() {
    int codigo, num_veiculos, num_acidentes;
    char estado[3];
    int maior_acidente = -1, menor_acidente = -1;
    char cidade_maior[50], cidade_menor[50];
    int total_veiculos = 0, total_acidentes_RS = 0;
    int num_cidades_RS = 0;

    for (int i = 0; i < 200; i++) {
        printf("Digite o código da cidade: ");
        scanf("%d", &codigo);

        if (codigo == 0) {
            break; // Encerra a entrada de dados quando o código for 0
        }

        printf("Digite o estado da cidade (sigla): ");
        scanf("%s", estado);

        printf("Digite o número de veículos de passeio em 1992: ");
        scanf("%d", &num_veiculos);

        printf("Digite o número de acidentes de trânsito com vítimas em 1992: ");
        scanf("%d", &num_acidentes);

        // Verifica o maior e o menor índice de acidentes e as cidades correspondentes
        if (maior_acidente == -1 || num_acidentes > maior_acidente) {
            maior_acidente = num_acidentes;
            strcpy(cidade_maior, estado);
        }

        if (menor_acidente == -1 || num_acidentes < menor_acidente) {
            menor_acidente = num_acidentes;
            strcpy(cidade_menor, estado);
        }

        // Soma o número de veículos para calcular a média
        total_veiculos += num_veiculos;

        // Verifica se a cidade pertence ao Rio Grande do Sul e calcula a média de acidentes
        if (strcmp(estado, "RS") == 0) {
            total_acidentes_RS += num_acidentes;
            num_cidades_RS++;
        }
    }

    // Calcula a média de veículos nas cidades brasileiras
    double media_veiculos = (double)total_veiculos / 200.0;

    // Calcula a média de acidentes com vítimas entre as cidades do Rio Grande do Sul
    double media_acidentes_RS = (double)total_acidentes_RS / num_cidades_RS;

    printf("a) Maior índice de acidentes de trânsito: %d (Cidade: %s)\n", maior_acidente, cidade_maior);
    printf("   Menor índice de acidentes de trânsito: %d (Cidade: %s)\n", menor_acidente, cidade_menor);
    printf("b) Média de veículos nas cidades brasileiras: %.2lf\n", media_veiculos);
    printf("c) Média de acidentes com vítimas nas cidades do Rio Grande do Sul: %.2lf\n", media_acidentes_RS);

    return 0;
}