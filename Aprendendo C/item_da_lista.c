/******************************************************************************

Escreva o menu de opc¸oes abaixo. Leia a opcao do usuario e execute a operacao 
escolhida. Escreva uma mensagem de erro se a opcao for invalida

1- Soma de 2 numeros.
2- Diferenca entre 2 numeros (maior pelo menor).
3- Produto entre 2 numeros.
4- Divisao entre 2 numeros (o denominador nao pode ser zero).

*******************************************************************************/
#include <stdio.h>

int main() {
    int opcao;
    float num_1, num_2;

    do {
        printf("Escolha uma dentre as opções abaixo.\n");
        printf("Digite 1 para somar dois números.\n");
        printf("Digite 2 para obtermos a diferença positiva de dois valores.\n");
        printf("Digite 3 para obtermos o produto de dois números.\n");
        printf("Digite 4 para obtermos a divisão de dois números.\n");
        scanf("%d", &opcao);

        if (opcao >= 1 && opcao <= 4) {
            printf("Digite dois números: ");
            scanf("%f %f", &num_1, &num_2);

            if (opcao == 1) {
                float soma = num_1 + num_2;
                printf("A soma é: %.2f\n", soma);
            } else if (opcao == 2) {
                float diferenca = (num_1 > num_2) ? num_1 - num_2 : num_2 - num_1;
                printf("A diferença positiva é: %.2f\n", diferenca);
            } else if (opcao == 3) {
                float multiplicacao = num_1 * num_2;
                printf("A multiplicação é: %.2f\n", multiplicacao);
            } else if (opcao == 4) {
                if (num_2 != 0) {
                    float divisao = num_1 / num_2;
                    printf("A divisão é: %.2f\n", divisao);
                } else {
                    printf("Não é possível dividir por zero.\n");
                }
            }
        } else {
            printf("Opção inválida. Escolha entre 1 e 4.\n");
        }
    } while (opcao < 1 || opcao > 4);

    return 0;
}