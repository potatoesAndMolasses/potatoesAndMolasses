#include <stdio.h>

int main()
{
    float valor, parcela, desconto, comissao_vendedor_vista, comissao_vendedor_parcela;
    int venda;
    
    printf("Digite o valor do item a ser comprado:\n");
    scanf("%f", &valor);
    
    printf("Digite 1 para venda a vista, ou 2 para venda em parcelas:");
    scanf("%d", &venda);
    
    parcela = valor / 3.0;
    desconto = 0.09 * valor;
    
    if(venda == 1){
        printf("Você escolheu venda a vista.\n");
        comissao_vendedor_vista = (0.05 * desconto);
        printf("A comissão do vendedor é de: %.2f\n", comissao_vendedor_vista);
        printf("O pagamento será de: %.2f", desconto);
    } else{
        printf("Você escolheu venda parcelada.\n");
        comissao_vendedor_parcela = (0.05 * valor);
        printf("A comissão do vendedor é de: %.2f.\n As parcelas valem R$%.2f", comissao_vendedor_parcela, parcela);
    }

    return 0;
}
