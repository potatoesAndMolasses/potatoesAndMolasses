#include<stdio.h>
#include<stdlib.h>

int main() {
    float media = 0.0;
    int i, n, acima_media = 0; // Variável acima_media para contar o número de alunos acima da média.
    printf("Digite a quantidade de alunos: ");
    scanf("%d", &n);
    
    float notas[n];
    
    for (i = 0; i < n; i++) {
        printf("Digite a nota do aluno %d: ", i + 1); // Adicionando +1 ao índice para começar em 1.
        scanf("%f", &notas[i]);
        media = media + notas[i];
    }
    media = media / n;
    
    for (i = 0; i < n; i++) {
        if (notas[i] >= media) {
            acima_media++; // Contador de alunos acima da média.
            printf("O aluno %d ficou acima da média, com a nota: %.2f\n", i + 1, notas[i]);
        }
    }
    
    printf("Total de alunos acima da média: %d\n", acima_media); // Exibindo o total de alunos acima da média.
    
    return 0;
}
