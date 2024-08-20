#include <stdio.h>

int main(){

    int n, soma = 0; // variavel para receber os numeros e variavel acumuladora para somar.

    printf("Digite a quantidade de numeros que deseja somar.\n");
    scanf("%d",&n); //recebe a quantidade de numeros que será somada
    printf("Digite os números que deseja somar.\n");

    // apos o usuario digitar a quantidade de numeros, ler x numeros.
    int num[n];
    for(int i = 0; i < n; i++){
        scanf("%d",&num[i]); //a leitura ocorre dentro do vetor
    }
    
    //calculo da soma, a variavel soma irá acumular os numeros digitados
    for(int i = 0; i < n; i++){
        soma+=num[i];
    }
    // resultado
        printf("A soma dos elementos do array é: %d\n",soma);

    return 0;
}