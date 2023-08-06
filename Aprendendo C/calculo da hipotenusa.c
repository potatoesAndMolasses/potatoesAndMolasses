/******************************************************************************

35. Sejam a e b os catetos de um triangulo, onde a hipotenusa e obtida pela equacao:
hipotenusa =√a2 + b2. Faca um programa que receba os valores de a e b e calcule
o valor da hipotenusa atraves da equacao. Imprima o resultado dessa operacao.

*******************************************************************************/
#include <stdio.h>
#include <math.h>

int main()
{
    float a, b, c = 0;
    printf("Digite os valores dos catetos do triângulo:\n");
    scanf("%f%f", &a, &b);
    c = sqrt(pow(a, 2) + pow(b, 2));
    printf("O valor da hipotenusa é: %.2f", c);
    return 0;
}
