#include <stdio.h>
#include <string.h>

int main() {
    int t;  
    scanf("%d", &t);  // Lê o número de casos de teste
    char pessoa1[10], pessoa2[10];  // Strings para armazenar as escolhas dos jogadores

    // Loop para processar cada caso de teste
    for (int i = 1; i <= t; i++) {
        scanf("%s %s", pessoa1, pessoa2);  // Lê as escolhas dos dois jogadores

        // Verifica se as escolhas são iguais (empate)
        if (strcmp(pessoa1, pessoa2) == 0) {
            printf("Caso #%d: De novo!\n", i);  
        }
        // Verifica se a primeira pessoa venceu
        else if ((strcmp(pessoa1, "tesoura") == 0 && strcmp(pessoa2, "papel") == 0) ||
                 (strcmp(pessoa1, "papel") == 0 && strcmp(pessoa2, "pedra") == 0) ||
                 (strcmp(pessoa1, "pedra") == 0 && strcmp(pessoa2, "lagarto") == 0) ||
                 (strcmp(pessoa1, "lagarto") == 0 && strcmp(pessoa2, "Spock") == 0) ||
                 (strcmp(pessoa1, "Spock") == 0 && strcmp(pessoa2, "tesoura") == 0) ||
                 (strcmp(pessoa1, "tesoura") == 0 && strcmp(pessoa2, "lagarto") == 0) ||
                 (strcmp(pessoa1, "lagarto") == 0 && strcmp(pessoa2, "papel") == 0) ||
                 (strcmp(pessoa1, "papel") == 0 && strcmp(pessoa2, "Spock") == 0) ||
                 (strcmp(pessoa1, "Spock") == 0 && strcmp(pessoa2, "pedra") == 0) ||
                 (strcmp(pessoa1, "pedra") == 0 && strcmp(pessoa2, "tesoura") == 0)) {
            printf("Caso #%d: Bazinga!\n", i);  
        }
        // Caso contrário, o jogador 2 vence
        else {
            printf("Caso #%d: Raj trapaceou!\n", i);  
        }
    }

    return 0;
}
