#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#define ALCOOL 3.0
#define GASOLINA 5.0

int main(void) {

    float largura, altura, profundidade, metrolitro;
    float formula, precoal, precogas, Pal, Pgas;

    printf("Valor da altura: "); scanf("%f", &altura);
    printf("Valor da largura: "); scanf("%f", &largura);
    printf("Valor da profundidade: "); scanf("%f", &profundidade);

    formula = altura * largura * profundidade;  // multiplicação do LAP
    metrolitro = formula * 1000;               // conversão de m³ para litro
    precogas = metrolitro * GASOLINA;
    precoal = metrolitro * ALCOOL;
    Pal = metrolitro * 0.2;       // calculo de 20% para o total de Litros
    Pgas = metrolitro * 0.8;     // calculo de 80% para o total de litros

    printf("O total a ser pago apenas com gasolina é: %.2f\n", precogas);
    printf("O total a ser pago apenas com álcool é: %.2f\n", precoal);
    printf("O tanque com 20%% de álcool será %.2f Litros e com 80%% gasolina será %.2f Litros", Pal, Pgas);


    return 0;
}