/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
    /*int numero, i;
    
    for (i = 0; i <= 100; i++){
        printf("%d\n", i);
    }
    */
    
    /*
    int valor = 1;
    
    while(valor <= 100) {
        printf("%d\n", valor);
        valor++;
    }
    */
    
    int contador = 0;
    
    do{
        contador++;
        printf("%d\n", contador);
    } while (contador <100);
    
    return 0;
}

