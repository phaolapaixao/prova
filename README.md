# Prova de Algoritmo e Programação

**Nome:** Phaola Paraguai Da Paixão Lustosa  
**Data de entrega:** 20/08/2024  
**Professor:** Felipe Gonçalves dos Santos

## Introdução
Temas importantes como matrizes, vetores, funções e lógica de programação são abordados neste repositório de questões resolvidas para prova de algoritmos e programação em linguagem C. As soluções são discutidas e organizadas para facilitar o aprendizado, sendo úteis tanto para iniciantes quanto para aqueles que desejam aprimorar o que já sabem.

## Questão 1: Questão sobre Arrays

### Descrição do Problema
Essa questão envolve a implementação de uma função em C que calcula a soma dos elementos de um array de números inteiros. A função, chamada `soma_array`, deve receber dois parâmetros: o array de inteiros e o tamanho do array. A tarefa da função é iterar sobre o array, somar cada elemento e retornar o valor total dessa soma.

### Explicação do Código
- Define duas variáveis, `n` para armazenar a quantidade de números e `soma` para acumular a soma dos números.
- Pede ao usuário para digitar a quantidade de números que ele deseja somar (`n`).
- Cria um vetor `num` com `n` elementos e lê `n` números fornecidos pelo usuário.
- Percorre o vetor `num` e soma todos os elementos.

## Questão 2: Multiplicação de Matrizes

### Descrição do Problema
Implemente uma função em C que multiplique duas matrizes quadradas de tamanho `n x n` e retorne a matriz resultante. Em seguida, escreva um programa que leia o tamanho das matrizes e os elementos das duas matrizes do usuário, calcule a multiplicação e exiba a matriz resultante.

### Explicação do Código
- **Entrada de Dados:** Lê o tamanho `n` das matrizes e preenche duas matrizes (`matriz` e `matriz2`) com valores fornecidos pelo usuário.
- **Inicialização da Matriz Resultado:** Cria uma matriz `result` e inicializa todos os elementos como zero.
- **Multiplicação de Matrizes:** Calcula a multiplicação das duas matrizes e armazena o resultado na matriz `result`.
- **Saída:** Exibe a matriz `result`.

## Questão 3: Validação de Números de Cartões de Crédito

### Descrição do Problema
O programa valida números de cartões de crédito usando o algoritmo de Luhn e identifica o tipo de cartão (American Express, MasterCard ou Visa). Se o número for válido, imprime o tipo; caso contrário, imprime "INVALID".

### Explicação do Código
- **Entrada:** Lê um número de cartão de crédito.
- **Algoritmo de Luhn:** Soma os dígitos que não são multiplicados. Multiplica cada segundo dígito (a partir do penúltimo) por 2 e soma os dígitos dos produtos.
- **Identificação do Tipo de Cartão:** Verifica se o número pertence a American Express, MasterCard ou Visa com base nos primeiros dígitos.
- **Saída:** Imprime o tipo de cartão ou "INVALID" se a validação falhar.

## Questão 4: Dinheiro

### Descrição do Problema
O programa deve calcular o número mínimo de moedas necessárias para dar o troco para um valor dado em centavos.

### Explicação do Código
- **Declaração de Variáveis:** Define variáveis para armazenar o valor do troco, o total de moedas, o valor das moedas (25, 10, 5, 1 centavos), e a quantidade de cada moeda.
- **Entrada de Troco:** Solicita ao usuário que digite o valor do troco. Se o valor for menor ou igual a zero, pede novamente até que o usuário insira um valor válido.
- **Cálculo do Troco:** Percorre o array de moedas e calcula quantas de cada moeda são necessárias para o troco. O valor do troco é atualizado a cada iteração.
- **Saída:** Exibe a quantidade total de moedas necessárias.

## Questão 5: Scrabble

### Descrição do Problema
O programa deve comparar duas palavras inseridas por dois jogadores e determinar o vencedor com base nos pontos de cada palavra, seguindo os valores de letras do jogo Scrabble. Após calcular a pontuação das palavras, o programa exibe "Jogador 1 venceu!", "Jogador 2 venceu!" ou "Empate!" dependendo de quem obteve a maior pontuação.

### Explicação do Código
- **Função `funcaocalcular`:** Calcula a pontuação total de uma palavra, somando os valores das letras conforme a tabela de pontuação do Scrabble.
- **Entrada:** Lê as palavras digitadas por "Player 1" e "Player 2".
- **Cálculo:** Usa a função `funcaocalcular` para obter as pontuações das palavras dos dois jogadores.
- **Resultado:** Compara as pontuações e imprime o vencedor ("Jogador 1 venceu!", "Jogador 2 venceu!" ou "Empate!").

## Questão 6: Cifra de Substituição

### Descrição do Problema
Implemente um programa que criptografe uma mensagem usando uma cifra de substituição. A chave para a cifra é uma string de 26 caracteres, onde cada caractere representa a letra que deve substituir a letra correspondente no alfabeto.

### Explicação do Código
- **Definições e Tamanhos:** Define o tamanho da chave e do texto.
- **Funções:**
  - `substituicao`: Substitui cada letra da entrada pela letra correspondente na chave.
  - `verificarChave`: Verifica se a chave é válida (contém exatamente 26 letras únicas).
- **Entrada da Chave:** O usuário insere uma chave de substituição de 26 letras. A chave é verificada para garantir que seja válida.
- **Entrada do Texto:** O usuário insere o texto que deseja cifrar.
- **Cifragem:** O texto é cifrado substituindo cada letra conforme a chave fornecida.
- **Saída:** O programa imprime o texto cifrado.

## Questão 7: César

### Descrição do Problema
Implemente um programa que criptografe mensagens usando a cifra de César. O programa deve receber uma chave e um texto simples e retornar o texto cifrado.

### Explicação do Código
- **Entrada de Dados:** O usuário insere uma chave numérica para a cifragem e o texto que deseja cifrar.
- **Processamento da Chave:** Se a chave for 11111, ela é tratada como 1. Caso contrário, a chave é convertida para um valor entre 0 e 25 para corresponder ao número de posições no alfabeto.
- **Cifragem:** Cada letra no texto é deslocada no alfabeto pelo valor da chave, preservando maiúsculas e minúsculas.
- **Saída:** O programa imprime o texto cifrado resultante.

## Questão 8: Construindo Casas

### Descrição do Problema
Você deve calcular o tamanho mínimo do lado de um terreno quadrado necessário para construir uma casa, considerando a área que pode ser utilizada conforme o percentual permitido.

### Explicação do Código
- **Entrada de Dados:** O usuário insere a largura (`a`), o comprimento (`b`), e o percentual máximo de área liberada para construção (`c`). O processo continua até que o usuário digite 0 para `a`.
- **Cálculo:** O código calcula a área máxima permitida (`metros`) e depois calcula o lado do quadrado correspondente à área permitida (`lado`).
- **Armazenamento e Exibição:** Os valores de lado são armazenados em um array e depois exibidos.
- **Finalização:** O programa termina quando o usuário digita 0 para `a`.

## Questão 9: Bazinga!

### Descrição do Problema
No jogo Pedra-Papel-Tesoura-Lagarto-Spock, você deve determinar o resultado de uma disputa entre dois jogadores, Sheldon e Raj. Com base nas escolhas de cada um, o programa deve imprimir a reação de Sheldon, que pode ser "Bazinga!" se ele vencer, "Raj trapaceou!" se Raj vencer, ou "De novo!" em caso de empate. A entrada inclui várias rodadas de jogo, e o programa deve processar cada uma delas.

### Explicação do Código
- **Entrada:** O código lê um número `t` de casos de teste. Para cada caso, os jogadores fazem suas escolhas (entre as cinco opções).
- **Comparação:** O código compara essas escolhas e determina o vencedor:
  - Se as escolhas forem iguais, é um empate.
  - Se a escolha do primeiro jogador vencer a do segundo (com base nas regras do jogo), o código imprime "Bazinga!".
  - Caso contrário, imprime "Raj trapaceou!" para indicar que o segundo jogador venceu.
