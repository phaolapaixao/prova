#include <stdio.h>
#include <string.h>

// Função para calcular a pontuação total de uma palavra
int funcaocalcular(char palavra[], int pontos[]) {
    int total = 0;  
    
    // Percorre cada caractere da palavra
    for (int i = 0; palavra[i] != '\0'; i++) {
        // Verifica se o caractere é uma letra minúscula
        if (palavra[i] >= 'a' && palavra[i] <= 'z') {
            total += pontos[palavra[i] - 'a'];  // Adiciona a pontuação correspondente
        }
        // Verifica se o caractere é uma letra maiúscula
        if (palavra[i] >= 'A' && palavra[i] <= 'Z') {
            total += pontos[palavra[i] - 'A'];  // Adiciona a pontuação correspondente
        }
    }
    return total;  
}

int main(void) {
    // Array contendo a pontuação de cada letra do alfabeto (em ordem: 'a' a 'z')
    int pontos[26] = {1, 3, 3, 2, 1, 4, 2, 4, 1, 8, 5, 1, 3, 1, 1, 3, 10, 1, 1, 1, 1, 4, 4, 8, 4, 10};

    char pessoa1[100];  // String para armazenar a palavra do jogador 1
    char pessoa2[100];  // String para armazenar a palavra do jogador 2
    int total1, total2;  // Variáveis para armazenar as pontuações dos jogadores

    // Entrada da palavra do jogador 1
    printf("Player 1: ");
    scanf("%s", pessoa1);

    // Entrada da palavra do jogador 2
    printf("Player 2: ");
    scanf("%s", pessoa2);

    // Calcula as pontuações para as palavras dos jogadores
    total1 = funcaocalcular(pessoa1, pontos);
    total2 = funcaocalcular(pessoa2, pontos);

    // Determina o vencedor com base nas pontuações
    if (total1 == total2) {
        printf("Empate!\n");  // Se as pontuações forem iguais
    }
    if (total1 > total2) {
        printf("Jogador 1 venceu!\n");  // Se a pontuação do jogador 1 for maior
    }
    if (total2 > total1) {
        printf("Jogador 2 venceu!\n");  // Se a pontuação do jogador 2 for maior
    }

    return 0;  // Retorna 0 para indicar que o programa terminou corretamente
}
