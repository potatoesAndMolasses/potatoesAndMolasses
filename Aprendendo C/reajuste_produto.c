/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
    float preco, reajuste;
    
    printf("Os produtos sofreram um reajuste, digite o valor antigo e irei te mostrar o novo valor:\n");
    scanf("%f", &preco);
    
    if (preco <= 50) {
        reajuste = preco * 1.05;
        printf("Com o ajuste este produto vai valer: %.2f\n", reajuste);
    } else if (preco == 50 || preco <= 100) {
        reajuste = preco * 1.10;
        printf("Com o ajuste este produto vai valer: %.2f\n", reajuste);
    } else if (preco > 100) {
        reajuste = preco * 1.15;
        printf("Com o ajuste este produto vai valer: %.2f\n", reajuste);
    }
    
    if (preco <= 80) {
        printf("Barato.\n");
    } else if (preco > 80 || preco <= 120) {
        printf("Normal.\n");
    } else if (preco > 120 || preco <= 200) {
        printf("Caro.\n");
    } else {
        printf("Muito Caro.\n");
    }

    return 0;
}
