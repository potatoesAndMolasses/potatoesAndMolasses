#include <stdio.h>

int main() {
    int numero, numero_invertido = 0;

    printf("Digite um número positivo:");
    scanf("%d", &numero);

    if (numero < 0) {
        printf("O número digitado não é positivo.\n");
    } else {
        
        while (numero > 0) {
            int digito = numero % 10;
            numero_invertido = numero_invertido * 10 + digito;
            numero /= 10;
        }
        printf("O número invertido é: %d\n", numero_invertido);
    }

    return 0;
}
