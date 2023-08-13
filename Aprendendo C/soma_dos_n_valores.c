#include<stdio.h>

int main()
{
    int n, i = 0;
    int calculoSoma = 0;
    printf("Digite um valor, vamos somar do um até o valor digitado:");
    scanf("%d", &n);
    for (i = 1; i <= n; i++){
        calculoSoma += i;
    }
    printf("A soma dos valores é:%d", calculoSoma);
    return 0;
}
