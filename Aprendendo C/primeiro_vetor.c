#include <stdio.h>

int main()
{
    int A[6] = { 1, 0, 5, -2, -5, 7};
    
    int soma_posicoes = 0;
    
    soma_posicoes = A[0] + A[1] + A[5];
    
    printf("A soma das posições %d, %d, %d, é: %d", A[0], A[1], A[5], soma_posicoes);
    
    A[3] = 100;
    
    // por algum motivo quando inicio o i = 0 ele não mostra o valor da primeira posição do vetor
    
    for(int i = -1; i < 6; i++) {
        printf("%d\n", A[i]);
    }
    
    return 0;
}
