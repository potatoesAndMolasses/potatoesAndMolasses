/******************************************************************************
O programa vai perguntar qual das opções você deseja fazer e vai retornar com o valor.
Leia um angulo em graus e apresente-o convertido em radianos. R = G ∗ π/180, sendo G o angulo em grause π = 3.14.
Leia um angulo em radianos e apresente-o convertido em graus. G = R ∗ 180/π, sendo G o angulo em graus e π = 3.14.

*******************************************************************************/
#include <stdio.h>
#include <stdlib.h>

float graus_radiano(float G){
    float R;
    R = (G * 3.14) / 180;
    return(R);
}

float radiano_graus(float r){
    float g;
    g = r * (180 / 3.14);
    return(g);
}

int main(){
    int i = 0;
    float g_r, r_g, converter_g_r, converter_r_g = 0;
    do{
        printf("Escolha uma das opções abaixo:\n");
        printf("Digite 1, para o programar converter um ângulo de graus para radiano.\n");
        printf("Digite 2, para o programar converter um ângulo de radianos para graus.\n");
        scanf("%d", &i);
    } while((i<1)||(i>2));
    printf("Você escolheu a opção: %d\n", i);
    if (i == 1){
        printf("Digite o valor do ângulo em graus:\n");
        scanf("%f", &g_r);
        converter_g_r = graus_radiano(g_r);
        printf("O valor convertido é:\n%.2f, radianos", converter_g_r);
    } else {
        printf("Digite o valor do ângulo em radianos:\n");
        scanf("%f", &r_g);
        converter_r_g = radiano_graus(r_g);
        printf("O valor convertido é:\n%.2f°", converter_r_g);
    }
    return 0;
}

