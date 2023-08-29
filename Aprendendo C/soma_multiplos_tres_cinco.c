#include <stdio.h>

int main()
{
    int aux = 0;
    
    for (int i = 1; i < 1000; i++) {
        if (i % 3 == 0 || i % 5 == 0) {
            aux += i;
        }
    }
    
    printf("A soma dos valores é: %d", aux);

    return 0;
}
