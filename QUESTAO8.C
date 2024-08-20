#include <stdio.h>
#include <math.h>

int main() {
    int a, b, c;
    int metros, lado, cont = 0;
    int lados[1000];  // Array para armazenar os valores de 'lado' calculados

    // Instruções iniciais para o usuário
    printf("Digite as medidas da casa e o percentual máximo liberado para construir nesse bairro.\n");
    printf("Para finalizar digite 0.\n");

    int i = 1;  // Inicializa a variável de controle do loop

    // Loop para processar até 1000 entradas
    while (i <= 1000) {
        scanf("%d", &a);  // Lê o valor de 'a'
        
        if (a == 0) {
            break;  // Se 'a' for 0, o loop é interrompido
        }

        scanf("%d %d", &b, &c);  // Lê os valores de 'b' e 'c'
    
        metros = (a * b * 100) / c;
        lado = sqrt(metros);  

        i++;  
    
        lados[cont] = lado;  // Armazena o valor calculado em 'lados'
        cont++;  
    }

    // Exibe os valores calculados
    for (int i = 0; i < cont; i++) {
        printf("%d\n", lados[i]);  // Imprime cada valor de 'lado' armazenado
    }
        
    return 0;  
}
