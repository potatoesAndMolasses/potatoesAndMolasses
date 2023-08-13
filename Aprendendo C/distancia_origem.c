/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>
#include <math.h>

int main()
{
    float x, y, distancia;
    
    printf("Vamos calcular a distância das coordenadas x e y até a origem.\n");
    
    printf("Digite o valor de x:");
    scanf ("%f", &x);
    
    printf("Digite o valor de y:");
    scanf ("%f", &y);
    
    distancia = sqrt(pow(x, 2)+pow(y, 2));
    
    printf("A distancia do ponto até a orgiem é de %.2f", distancia);

    return 0;
}

