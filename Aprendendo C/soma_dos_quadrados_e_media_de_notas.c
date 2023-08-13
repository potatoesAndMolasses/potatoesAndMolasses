/******************************************************************************

28. Faca a leitura de tres valores e apresente como resultado a soma dos quadrados dos 
tres valores lidos.
29. Leia quatro notas, calcule a media aritmetica e imprima o resultado.

*******************************************************************************/
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

float soma_valores(float b, float c, float d) {
    float a;
    a = pow(b, 2) + pow(c, 2) + pow(d, 2);
    return a;
}

float media_aritmetica(int n) {
    int quantidade_de_avaliacao = n;
    int* notas = (int*)malloc(n * sizeof(int)); // Alocação dinâmica do array "notas"
    float resultado = 0;

    for (int i = 0; i < n; i++) {
        printf("Digite a nota da avaliação %d:\n", i + 1);
        scanf("%d", &notas[i]);
        resultado += notas[i];
    }

    resultado = resultado / n;
    free(notas); // Libera a memória alocada para o array "notas"
    return resultado;
}

int main() {
    int opcao;
    float x, y, z, resultado_final;

    do {
        printf("Escolha uma das opções abaixo:\n");
        printf("Digite 1, para o programa ler três valores e retornar a soma dos quadrados.\n");
        printf("Digite 2, para o programa ler uma quantidade de valores e retornar a média aritmética dos valores lidos.\n");
        scanf("%d", &opcao);
    } while (opcao < 1 || opcao > 2);

    printf("Você escolheu a opção: %d\n", opcao);

    if (opcao == 1) {
        printf("Digite três valores:\n");
        scanf("%f%f%f", &x, &y, &z);
        resultado_final = soma_valores(x, y, z);
        printf("O valor da soma dos quadrados é: %.2f\n", resultado_final);
    } else {
        int quantidade_de_avaliacoes;
        printf("Digite a quantidade de avaliações:\n");
        scanf("%d", &quantidade_de_avaliacoes);
        float media = media_aritmetica(quantidade_de_avaliacoes);
        printf("A média aritmética dos valores lidos é: %.2f\n", media);
    }

    return 0;
}

