/******************************************************************************

30. Leia um valor em real e a cotacao do dolar e do euro. Em seguida, imprima o valor correspondente
em dolares e euros.

*******************************************************************************/
#include <stdio.h>

float real_euro(float euro, int real){
    float conversao_real_euro;
    conversao_real_euro = real / euro;
    return conversao_real_euro;
}

float real_dolar(float dolar, int real){
    float conversao_real_dolar;
    conversao_real_dolar = real / dolar;
    return conversao_real_dolar;
}

int main(){
    float cotacao_dolar, cotacao_euro;
    int valor_em_real, opcao = 0;
    
    do {
        printf("Escolha uma das duas opções:\n");
        printf("Aperte 1 para converter de real para dolar\n");
        printf("Aperte 2 para converter de real para euro\n");
        scanf("%d", &opcao);
    } while(opcao < 1 || opcao > 2);
    
    if (opcao == 1){
        printf("Informe a cotação do dolar:\n");
        scanf("%f", &cotacao_dolar);
        printf("Informe um determinado valor em real:\n");
        scanf("%d", &valor_em_real);
        float converter = real_dolar(cotacao_dolar, valor_em_real);
        printf("A conversão do valor dá %.2f USD", converter);   
    } else {
        printf("Informe a cotação do euro:\n");
        scanf("%f", &cotacao_euro);
        printf("Informe um determinado valor em real:\n");
        scanf("%d", &valor_em_real);
        float converter = real_euro(cotacao_euro, valor_em_real);
        printf("A conversão do valor dá %.2f Euros\n", converter);
    }

    return 0;
}

