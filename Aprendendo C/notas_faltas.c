/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
    float notas;
    int faltas;
    
    printf("Digite sua nota:");
    scanf("%f", &notas);
    
    printf("Digite suas faltas:");
    scanf("%d", &faltas);
    
    if (faltas > 20) {
        if (notas < 0 || notas > 10) {
            printf("Nota inválida");
        } else if (notas == 0 || notas <= 3.9) {
            printf("Seu conceito foi E\n");
        } else if (notas == 4 || notas <= 4.9) {
            printf("Seu conceito foi E\n");
        } else if (notas == 5 || notas <= 7.4) {
            printf("Seu conceito foi D\n");
        } else if (notas == 7.5 || notas <= 8.9) {
            printf("Seu conceito foi C\n");
        } else if (notas == 9 || notas <= 10) {
            printf("Seu conceito foi B\n");
        }
        
    } else {
        if (notas < 0 || notas > 10) {
            printf("Nota inválida");
        } else if (notas == 0 || notas <= 3.9) {
            printf("Seu conceito foi E\n");
        } else if (notas == 4 || notas <= 4.9) {
            printf("Seu conceito foi D\n");
        } else if (notas == 5 || notas <= 7.4) {
            printf("Seu conceito foi C\n");
        } else if (notas == 7.5 || notas <= 8.9) {
            printf("Seu conceito foi B\n");
        } else if (notas == 9 || notas <= 10) {
            printf("Seu conceito foi A\n");
        }    
    }
    
    return 0;
}
