/******************************************************************************

37. Faca um programa que leia o valor de um produto e imprima o valor com desconto, tendo
em vista que o desconto foi de x%

*******************************************************************************/
#include <stdio.h>

int main()
{
    float preco, desconto, calculo_do_desconto, valor_final_do_produto;
    printf("Digite o valor do produto que deseja comprar:");
    scanf("%f", &preco);
    printf("Digite a porcentagem do desconto a ser fornecido:");
    scanf("%f", &desconto);
    calculo_do_desconto = desconto / 100;
    valor_final_do_produto = calculo_do_desconto * preco;
    valor_final_do_produto = preco - valor_final_do_produto;
    printf("O desconto do produto foi de, %.2f porcento e o valor final foi de %.2f", calculo_do_desconto, valor_final_do_produto);

    return 0;
}

