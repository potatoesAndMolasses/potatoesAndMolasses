#include <stdio.h>

int main()
{
    int receptor[8], x, y, soma;
    
    for (int i = 0; i < 8; i++) {
        receptor[i] = i * 4;
    }
    
    printf("Digite dois valores:");
    scanf("%d%d", &x, &y);
    
    x = x % 8;
    y = y % 8;
    
    soma = receptor[x] + receptor[y];
    
    printf("Os valores são %d e %d e a soma é: %d", receptor[x], receptor[y], soma);
    
    return 0;
}

