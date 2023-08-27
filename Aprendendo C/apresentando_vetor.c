#include <stdio.h>

int main()
{
    int valores[5];
    
    for (int i = 0; i < 5; i++) {
        printf("Digite o valor da %d° posição.", i);
        scanf("%d", &valores[i]);
    }
    
     
    for (int i = 0; i < 5; i++) {
        printf("Digite o valor da %d° posição é: %d.\n", i, valores[i]);
        
    }
    
    
    return 0;
}

