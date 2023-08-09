#include <stdio.h>
#include <math.h>

int main()
{
    int funcao, x1, x2, x3;
    
    printf("Digite 3 números inteiros:\n");
    scanf("%d %d %d", &x1, &x2, &x3);

    do {
        printf("Escolha uma opção:\n");
        printf("Digite (1) para calcular a média geométrica:\n");
        printf("Digite (2) para calcular a média ponderada:\n");
        printf("Digite (3) para calcular a média harmônica:\n");
        printf("Digite (4) para calcular a média aritmética:\n");
        scanf("%d", &funcao);

        if (funcao == 1) {
            float geometrica = cbrt(x1 * x2 * x3);
            printf("A média geométrica é: %f\n", geometrica);}
        else if (funcao == 2) {
            float ponderada = (x1 + 2 * x2 + 3 * x3) / 6;
            printf("A média ponderada é: %f\n", ponderada);}
        else if (funcao == 3) {
            float harmonica = 1 / ((1.0 / x1) + (1.0 / x2) + (1.0 / x3));
            printf("A média harmônica é: %f\n", harmonica);}
        else if (funcao == 4) {
            float aritmetica = (x1 + x2 + x3) / 3.0;
            printf("A média aritmética é: %f\n", aritmetica);}
        else {
            printf("Opção inválida. Tente novamente.\n");}
    } while (funcao < 1 || funcao > 4);

    return 0;
}

