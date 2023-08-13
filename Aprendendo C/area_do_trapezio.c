/******************************************************************************

Faca um programa que calcule e mostre a area de um trapezio

*******************************************************************************/
#include <stdio.h>

float area(float a, float b, float c) {
    float A;
    
    A = ((a + b) * c) / 2;
    
    return A;
}

int main()
{
    float base_maior, base_menor, altura, resultado;
    
    printf("Vamos calcular a área de um trapezio. \n");
    printf("Informe os valores da base maior, base menor e a altura da figura:\n");
    scanf("%f%f%f", &base_menor, &base_maior, &altura);
    
    resultado = area(base_menor, base_maior,altura);
    
    printf("A area da figura é: %.2f", resultado);

    return 0;
}

