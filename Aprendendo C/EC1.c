#include <stdio.h>

int main() {
    int tamanho_do_vetor = 11;
    int vetor[11] = {-1, 1, 2, 3, 3, 4, 4, 4, 5, 6, 6};
    int elemento_majoritario = 0;
    int contador_majoritario = 0;

    for (int i = 0; i < tamanho_do_vetor; i++) {
        int elemento_atual = vetor[i];
        int contador_atual = 0;

        for (int j = 0; j < tamanho_do_vetor; j++) {
            if (vetor[j] == elemento_atual) {
                contador_atual++;
            }
        }

        if (contador_atual > contador_majoritario || (contador_atual == contador_majoritario && elemento_atual < elemento_majoritario)) {
            elemento_majoritario = elemento_atual;
            contador_majoritario = contador_atual;
        }
    }

    if (contador_majoritario > 1) {
        printf("O menor valor que mais se repete no vetor é: %d\n", elemento_majoritario);
    } else {
        printf("Nenhum valor se repete no vetor.\n");
    }

    return 0;
}
