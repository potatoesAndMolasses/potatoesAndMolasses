/******************************************************************************

Faca um programa que receba tres numeros e mostre-os em ordem crescente.

*******************************************************************************/
#include <stdio.h>

int main()
{
    int a, b, c;
    
    printf("Digite três números inteiros.");
    scanf("%d%d%d", &a, &b, &c);
    
    if (a > b) {
        if (a > c) {
            if (b > c) {
            printf("O maior valor é: %d, o segundo maior valor é %d e o menor é %d", a, b, c);
        } else {
            printf("O maior valor é: %d, o segundo miaor é %d e o menor é %d", a, c, b);
        }
    } else {
        printf("O maior valor é:%d o segundo maior é %d e o menor é %d", c, a, b);
        } 
    } else {
        if (c > b) {
            printf("O maior valor é:%d o segundo maior é %d e o menor é %d", c, b, a);
        } else if (c > a){
            printf("O maior valor é:%d o segundo maior é %d e o menor é %d", b, c, a);
        } else{
            printf("O maior valor é:%d o segundo maior é %d e o menor é %d", b, a, c);
        }
    }

    return 0;
}

