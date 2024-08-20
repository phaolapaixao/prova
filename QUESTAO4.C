#include <stdio.h>

int main() {
    int troco, total = 0;  
    int moedas[4] = {25, 10, 5, 1};  // Array contendo os valores das moedas em centavos (25, 10, 5, 1)
    int quant[4] = {0};  // Array para armazenar a quantidade de cada tipo de moeda usada

    printf("Troco devido: \n");
    scanf("%d", &troco);  // Lê o valor do troco em centavos


    // Validação da entrada: garante que o valor do troco seja positivo e maior que 0
    while (troco <= 0) {
        if (troco < 0)
            printf("---Por favor, digite um valor inteiro maior que 0.---\n");
        else {
            printf("%d?\n", troco);  // Se o troco for 0, pergunta se o valor está correto
        }
        printf("Troco devido: \n");
        scanf("%d", &troco);  // Solicita novamente o valor do troco
    }

    // Calcula a quantidade de moedas necessárias para o troco
    for (int i = 0; i < 4; i++) {
        quant[i] = troco / moedas[i];  // Calcula o número de moedas do valor atual
        troco %= moedas[i];  // Atualiza o valor do troco subtraindo o valor das moedas já contadas
        if (quant[i] > 0)
            total += quant[i];  // Soma a quantidade de moedas usadas ao total
    }

    // Exibe o valor original do troco e o número total de moedas utilizadas
    printf("Quantidade de moedas: %d\n", total);

    return 0; 
}
