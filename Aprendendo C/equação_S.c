#include <stdio.h>

int main()
{
    float soma;
    
    
    for (int i = 1; i <= 99; i++){
        for (int j = 1; j <= 50; j++){
        soma += i / j;
        }
        i += 2;
    }
    
    printf("%.2f", soma);
    
    return 0;
}
