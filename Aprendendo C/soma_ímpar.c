#include <stdio.h>

int main()
{
    int comeco_intervalo, final_intervalo, aux = 0;
    
    printf("Digite o primeiro valor do intervalo:");
    scanf("%d", &comeco_intervalo);
    
    printf("Digite o último valor do intervalo:");
    scanf("%d", &final_intervalo);
    
    if (comeco_intervalo > final_intervalo) {
        printf("Intervalo de valores inválido.\n");
    } else {
        if (comeco_intervalo % 2 == 1) {
            for (int i = comeco_intervalo; i <= final_intervalo; i += 2) {
                aux += i;
            }
            printf("A soma dos valores ímpares do intervalo é:%d\n", aux);
        } else {
            comeco_intervalo += 1;
            for (int i = comeco_intervalo; i <= final_intervalo; i += 2) {
                aux += i;
            }
            printf("O começo do intervalo foi alterado para, %d e a soma dos valores ímpares do novo intervalo é:%d\n",comeco_intervalo, aux);
        }
    }

    return 0;
}
