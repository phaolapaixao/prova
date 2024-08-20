// bibliotecas para operações de entrada e saída, alocação de memoria, manipulação de strings e
//funções de manipulação de caracteres;

#include <stdio.h>     
#include <stdlib.h>     
#include <string.h>    
#include <ctype.h>      

// Definir tamanhos máximos para a entrada do usuário e para a chave de substituição
#define TAMANHO 2000    //tamanho da frase
#define TAMANHOCHAVE 26  //tamanho da chave  

// Declaração das funções
char substituicao(char letra, const char chave[]);  // Função que realiza a substituição de uma letra usando a chave
int verificarChave(const char chave[]);             // Função que verifica se a chave é válida

int main() {
    char chave[TAMANHOCHAVE + 1];  // Array para armazenar a chave de substituição com espaço para o terminador nulo ('\0')
    
    // Instruções para o usuário
    printf("---Deve conter 26 letras---\n");
    printf("Digite a chave: ");
   
    // Ler a chave de substituição do usuário
    fgets(chave, TAMANHO,stdin);

    // Remover o caractere de nova linha ('\n') da chave, se presente
    size_t len = strlen(chave);
    if (len > 0 && chave[len - 1] == '\n') {
        chave[len - 1] = '\0';
    }
    
    // Verificar se a chave inserida é válida
    if (verificarChave(chave)) {
        printf("Erro: chave inválida.\n");
        return 1;  // Retorna 1 para indicar chave inválida
    }

    char frase[TAMANHO];  // Array para armazenar a frase que será criptografada
    printf("plaintext: ");
    // ler chave
    if (fgets(frase, sizeof(frase), stdin) == NULL) {
        printf("Erro ao ler o plaintext.\n");
        return 1;
    }
    // Remover o caractere de nova linha ('\n') da frase
    len = strlen(frase);
    if (len > 0 && frase[len - 1] == '\n') {
        frase[len - 1] = '\0';
    }

    // Codificar a frase usando a chave de substituição
    int i = 0;
    while (frase[i] != '\0') {  // Percorre cada caractere da frase
        frase[i] = substituicao(frase[i], chave);  // Substitui a letra pela correspondente na chave
        i++;
    }

    // Exibe a frase codificada
    printf("ciphertext: %s\n", frase);

    return 0;  // Retorna 0 para indicar que o programa terminou corretamente
}

// Função que realiza a substituição de uma letra usando a chave
char substituicao(char letra, const char chave[]) {
    // Verifica se a letra é maiúscula e a substitui pela letra correspondente na chave
    if (letra >= 'A' && letra <= 'Z') {
        return chave[letra - 'A'];
    }
    // Verifica se a letra é minúscula e a substitui pela letra correspondente na chave, convertendo para minúscula
    if (letra >= 'a' && letra <= 'z') {
        return tolower(chave[letra - 'a']);
    }
    // Se não for uma letra, retorna o caractere original
    return letra;  
}

// Função que verifica se a chave é válida
int verificarChave(const char chave[]) {
    int i;
    int contagem[26] = {0};  // Array para contar a ocorrência de cada letra

    // Verifica se a chave tem exatamente 26 caracteres
    if (strlen(chave) != 26) {
        return 1;  // Retorna 1 para indicar chave inválida
    }

    // Verifica se todos os caracteres na chave são letras e conta a ocorrência de cada uma
    for (i = 0; i < 26; i++) {
        if (!isalpha(chave[i])) {  // Verifica se o caractere é uma letra
            return 1;  // Retorna 1 para indicar chave inválida
        }
        contagem[tolower(chave[i]) - 'a']++;  // Incrementa a contagem para a letra correspondente
    }

    // Verifica se cada letra aparece exatamente uma vez
    for (i = 0; i < 26; i++) {
        if (contagem[i] != 1) {
            return 1;  // Retorna 1 para indicar chave inválida
        }
    }
    return 0;  // Retorna 0 para indicar que a chave é válida
}
