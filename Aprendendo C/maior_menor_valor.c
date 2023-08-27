#include <stdio.h>
#include<stdlib.h>
#include<time.h>

int main()
{
    int meuVetor[10], maior_valor, menor_valor;
    menor_valor, maior_valor = 0;

    srand(time(NULL));
    
    for (int i = 0; i < 10; i++) {
        
        meuVetor[i] = rand();
        
        if (maior_valor < meuVetor[i]) {
            maior_valor = meuVetor[i];
        } else if (menor_valor > meuVetor[i]) {
            menor_valor = meuVetor[i];
        }
    }
    
    printf("O vetor tem como maior %d, e como menor %d.", maior_valor, menor_valor);
    
    return 0;
}
