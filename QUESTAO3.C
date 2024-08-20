#include <stdio.h>
#include <stdint.h>

int main() {
    int64_t numero;  // Declara uma variável de 64 bits para armazenar o número do cartão de crédito
    printf("Number: ");
    scanf("%lld", &numero);  // Lê o número do cartão de crédito fornecido pelo usuário

    // Variáveis para manipulação dos dígitos do número do cartão
    long D1 = 10, D2 = 1;  // D1 e D2 são usadas para extrair dígitos em posições pares e ímpares
    int posicaoimpa = 0, posicaopar = 0;  // Armazena os dígitos nas posições ímpares e pares
    int soma_nao_multiplicado = 0, soma_multiplicado = 0;  // Acumuladores para as somas dos dígitos

    int i = 0;
    // Loop para processar os primeiros 8 pares de dígitos do número do cartão (total de 16 dígitos)
    while (i < 8) {
        // Extrai o dígito em uma posição ímpar, soma diretamente
        posicaoimpa = (numero / D2) % 10;
        soma_nao_multiplicado += posicaoimpa;
        D2 *= 100;  // Move para o próximo dígito ímpar (D2 é multiplicado por 100)

        // Extrai o dígito em uma posição par, dobra o valor e ajusta a soma
        posicaopar = (numero / D1) % 10;
        if ((posicaopar * 2) >= 10) {
            soma_multiplicado += (posicaopar * 2) / 10; // Adiciona a dezena
            soma_multiplicado += (posicaopar * 2) % 10; // Adiciona a unidade
        } else {
            soma_multiplicado += posicaopar * 2;  // Adiciona diretamente se o dobro for menor que 10
        }
        D1 *= 100;  // Move para o próximo dígito par (D1 é multiplicado por 100)

        i++;
    }

    // Extrai os dois primeiros dígitos do número do cartão para identificar o tipo
    long numeroConta = numero;
    while (numeroConta >= 100) {
        numeroConta /= 10;
    }

    // Determina o tipo de cartão com base nos dois primeiros dígitos
    char tipo_de_cartao[10];
    if (numeroConta == 34 || numeroConta == 37) {
        sprintf(tipo_de_cartao, "AMEX");  // American Express
    } else if (numeroConta >= 51 && numeroConta <= 55) {
        sprintf(tipo_de_cartao, "MASTERCARD");  // Mastercard
    } else if (numeroConta >= 40 && numeroConta <= 49) {
        sprintf(tipo_de_cartao, "VISA");  // Visa
    } else {
        sprintf(tipo_de_cartao, "INVALID");  // Número inválido para cartões reconhecidos
    }

    // Verifica a validade do cartão somando as duas somas calculadas e verificando se o resultado é múltiplo de 10
    if ((soma_nao_multiplicado + soma_multiplicado) % 10 == 0) {
        printf("%s\n", tipo_de_cartao);  // Se válido, imprime o tipo de cartão
    } else {
        printf("INVALID\n");  // Caso contrário, imprime "INVALID"
    }

    return 0;  
}
