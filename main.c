#include <stdio.h>
#include <stdlib.h>
#include <math.h>

//Escrever um algoritmo em C que leia de uma (1) mercadoria:

//Preço: R$
//Quantidade: Unidade
//Reajuste (Desconto): %
//exbir na tela:

//Total a pagar: sem desconto
//Total a pagar: com desconto
//Total de Desconto

int main() {

    // ENTRADA:
    float reajuste, preco;
    float totalBruto, totalLiquido, desconto;
    int quantidade;
    printf("MERCADORIA: Dados de Entrada\n");
    printf("Preço (R$):  "); scanf("%f", &preco);
    printf("Quantidade (Unidade): "); scanf("%i", &quantidade);
    printf("Reajuste (%%): "); scanf("%f", &reajuste);

    // PROCESSAMENTO:
    totalBruto = preco * quantidade;
    desconto = reajuste/100 * totalBruto; // totalBruto aparece pois é dele que será retirado o valor do desconto
    totalLiquido = totalBruto - desconto;

    // SAÍDA:
    printf("Dados de Pagamento: \n");
    printf("Total (sem desconto): R$ %.2f\n", totalBruto);
    printf("Total (com desconto: %.2f %%): R$ %.2f\n", reajuste, totalLiquido);
    printf("Total de desconto %.2f %%: Valor do desconto R$ %.2f\n", reajuste, desconto);

    return 0;
}
