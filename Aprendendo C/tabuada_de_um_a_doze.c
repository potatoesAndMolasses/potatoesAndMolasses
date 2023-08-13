#include <stdio.h>

int main()
{
    int tabuada[13][13];
    int i, j;
    
    for (i = 1; i < 13; i++) {
        for (j = 1; j < 13; j++) {
            tabuada[i][j] = i * j;
            printf("%3d ", tabuada[i][j]); //o %3d diz para o computador considerar todos os valores com três casas decimais, deixando tudo alinhado
        }
        printf("\n");
    }

    return 0;
}


