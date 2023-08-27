#include <stdio.h>
#include<math.h>

int main()
{
    int conjunto[10], receptor[10];
    
    for (int i = 0; i < 10; i++) {
        
        printf("Digite o %d° valor:", i + 1);
        scanf("%d", &conjunto[i]);
        receptor[i] = pow(conjunto[i], 2);
    }
    
    for (int j = 0; j < 10; j++) {
        printf("O valor do vetor é: %d.\nE o segundo vetor vale:%d.\n", conjunto[j], receptor[j]);
    }
    
    
    return 0;
}
