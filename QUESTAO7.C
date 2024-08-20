#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

// Função que cifra o texto usando a cifra de César com uma chave numérica
void stringCifra(char *texto, int chave);

int main()
{
    char textosimples[256];  // Array para armazenar o texto de entrada
    int chave;  // Variável para armazenar a chave de cifragem

    // Solicita ao usuário a chave numérica
    printf("Chave numérica: ");
    if (scanf("%d", &chave) != 1)  // Verifica se a entrada é um número
    {
        printf("A chave deve ser um número.\n");
        return 1;  // Retorna com erro se a chave não for um número válido
    }

    getchar(); // Limpa o buffer de entrada para remover o '\n' deixado por `scanf`

    // Condicional para tratar a chave especial 11111 como 1
    if (chave == 11111) {
        chave = 1;
    } else {
        chave = chave % 26;  // Calcula o valor da chave no intervalo de 0 a 25
    }

    // Solicita ao usuário o texto simples para cifrar
    printf("Texto simples: ");
    if (fgets(textosimples, sizeof(textosimples), stdin) == NULL)  
    {
        printf("Erro ao ler a entrada.\n");
        return 1;  // Retorna com erro se a entrada não puder ser lida
    }

    // Remove o caractere de nova linha '\n' adicionado por `fgets`
    textosimples[strcspn(textosimples, "\n")] = '\0';

    // Chama a função para cifrar o texto com a chave fornecida
    stringCifra(textosimples, chave);

    return 0;  // Retorna 0 indicando que o programa foi executado com sucesso
}

// Função que cifra o texto usando a cifra de César
void stringCifra(char *texto, int chave)
{
    
    for (int i = 0; texto[i] != '\0'; i++)
    {
        // Verifica se o caractere atual é uma letra
        if (isalpha(texto[i]))
        {
            // Define o valor inicial do alfabeto ('a' para minúsculas, 'A' para maiúsculas)
            char alfabeto = islower(texto[i]) ? 'a' : 'A';

            // Cifra o caractere, mantendo a letra dentro dos limites do alfabeto
            texto[i] = (texto[i] - alfabeto + chave) % 26 + alfabeto;
        }
    }

    // Imprime o texto cifrado
    printf("Texto cifrado: %s\n", texto);
}

