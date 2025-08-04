/*
  EXEMPLO:
  -> Lógica de Programação: Entrada + Processameto (Aritmético) + Saída
  -> 1º Passo - Entrada:
    -> Declaração das variáveis e constates do problema.
    -> Leitura dos dados do usuário.
  -> 2º Passo - Processamento (Aritmético):
    -> Cálculos aritméticos do problema.
  -> 3º Passo - Saída (Objetivo(s) do problema):
    -> Exibir os Objetivo(s) do problema.
*/
#include <stdio.h>    //BIBLIOTECA: Entrada / Saída
#include <stdlib.h>   //BIBLIOTECA: Operações ULA
#include <locale.h>   //BIBLIOTECA: Idiomas
#include <math.h>     //BIBLIOTECA: Matemática
int main(void) {
    // ALGORITMO: ENTRADA + PROCESSAMENTO (ULA) + SAÍDA
    // ALGORITMO: ENTRADA
    int N1, N2;
    setlocale(LC_ALL, "Portuguese");
    printf("Mini  Calculadora de Inteiros:\n");
    printf("VALOR DE N1: "); scanf("%i", &N1);
    printf("VALOR DE N2: "); scanf("%i", &N2);
    // ALGORITMO: PROCESSAMENTO (ULA) + SAIDA
    printf("SAIDA DAS OPERAÇÕES ARITMÉTICAS BÁSICAS:\n");
    printf("ADIÇÃO: N1 + N2 = %i + %i = %i\n", N1, N2, N1 + N2);
    printf("SUBTRAÇÃO: N1 - N2 = %i - %i = %i\n", N1, N2, N1 - N2);
    printf("MULTIPLICAÇÃO: N1 * N2 = %i * %i = %i\n", N1, N2, N1 * N2);
    printf("SUBTRAÇÃO: N1 - N2 = %i - %i = %i\n", N1, N2, N1 - N2);
    printf("DIVISÃO: N1 / N2 = %i / %i = %.1f\n", N1, N2, 1.0 * N1 / N2);
    printf("QUOCIENTE INT: N1 div N2 = %i div %i = %i\n", N1, N2, N1 / N2);
    printf("RESTO INT: N1 mod N2 = %i %% %i = %i\n", N1, N2, N1 % N2);
    printf("POTÊNCIAÇÃO: N1 elevado N2 = %i elevado %i = %.1f\n", N1, N2, pow(N1, N2));
    printf("RADICIAÇÃO: N1 raiz 1 / N2 = %i raiz %.1f = %.1f\n", N1, 1.0 / N2, pow(N1, 1.0 / N2));
  return 0;
}
