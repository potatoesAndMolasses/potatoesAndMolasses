/******************************************************************************

6 - Leia uma temperatura em graus Celsius e apresente-a convertida em graus Fahrenheit.

*******************************************************************************/
#include <stdio.h>

float conversao(float c){
    float F = 0.0;
    F = (c *9/5)+ 32;
    return(F);
}

int main()
{
    float C, resultado = 0.0;
    printf("Digite a temperatura em Celsius, iremos converter para Fahrenheit:\n");
    scanf("%f", &C);
    resultado = conversao(C);
   // F = (C*9/5)+ 32;
    printf("A conversão foi: %.2f\n", resultado);
    return 0;
}


