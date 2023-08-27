#include <stdio.h>
#include<stdlib.h>
#include<time.h>

int main()
{
    int meuVetor[10], contador;
    contador = 0;

    srand(time(NULL));
    
    for (int i = 0; i < 10; i++) {
        
        meuVetor[i] = rand();
        
        if (meuVetor[i] % 2 == 0) {
            contador++;
        }
    }
    
    printf("O vetor tem %d, valores pares.", contador);
    
    return 0;
}
