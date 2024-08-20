#include <stdio.h>

int main() {
    int n;

    // SolicitaR ao usuário o tamanho das matrizes quadradas
    printf("Digite o tamanho das matrizes.\n");
    scanf("%d", &n);

    // Declara três matrizes quadradas de tamanho n x n
    int matriz[n][n], matriz2[n][n], result[n][n];

    // Solicita ao usuário os valores da primeira matriz
    printf("Digite os valores da primeira matriz.\n");
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            scanf("%d", &matriz[i][j]);
        }
    }

    // Solicita ao usuário os valores da segunda matriz
    printf("Digite os valores da segunda matriz.\n");
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            scanf("%d", &matriz2[i][j]);
        }
    }

    // Inicializa todos os elementos da matriz resultante com 0
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            result[i][j] = 0;
        }
    }

    // Multiplica as matrizes (matriz1 * matriz2) e armazena o resultado na matriz 'result'
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            for (int p = 0; p < n; p++) {
                result[i][j] += matriz[i][p] * matriz2[p][j];
            }
        }
    }

    // Exibe a matriz resultante
    printf("Matriz Resultado:\n");
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            printf("%d ", result[i][j]);
        }
        printf("\n");  // Quebra de linha para formatar a matriz corretamente
    }

    return 0;  
}
