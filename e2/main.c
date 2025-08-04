/*
  EXEMPLO:
  -> L�gica de Programa��o: Entrada + Processameto (Aritm�tico) + Sa�da
  -> 1� Passo - Entrada:
    -> Declara��o das vari�veis e constates do problema.
    -> Leitura dos dados do usu�rio.
  -> 2� Passo - Processamento (Aritm�tico):
    -> C�lculos aritm�ticos do problema.
  -> 3� Passo - Sa�da (Objetivo(s) do problema):
    -> Exibir os Objetivo(s) do problema.
*/
#include <stdio.h>    //BIBLIOTECA: Entrada / Sa�da
#include <stdlib.h>   //BIBLIOTECA: Opera��es ULA
#include <locale.h>   //BIBLIOTECA: Idiomas
#include <math.h>     //BIBLIOTECA: Matem�tica
int main(void) {
    // ALGORITMO: ENTRADA + PROCESSAMENTO (ULA) + SA�DA
    // ALGORITMO: ENTRADA
    int N1, N2;
    setlocale(LC_ALL, "Portuguese");
    printf("Mini  Calculadora de Inteiros:\n");
    printf("VALOR DE N1: "); scanf("%i", &N1);
    printf("VALOR DE N2: "); scanf("%i", &N2);
    // ALGORITMO: PROCESSAMENTO (ULA) + SAIDA
    printf("SAIDA DAS OPERA��ES ARITM�TICAS B�SICAS:\n");
    printf("ADI��O: N1 + N2 = %i + %i = %i\n", N1, N2, N1 + N2);
    printf("SUBTRA��O: N1 - N2 = %i - %i = %i\n", N1, N2, N1 - N2);
    printf("MULTIPLICA��O: N1 * N2 = %i * %i = %i\n", N1, N2, N1 * N2);
    printf("SUBTRA��O: N1 - N2 = %i - %i = %i\n", N1, N2, N1 - N2);
    printf("DIVIS�O: N1 / N2 = %i / %i = %.1f\n", N1, N2, 1.0 * N1 / N2);
    printf("QUOCIENTE INT: N1 div N2 = %i div %i = %i\n", N1, N2, N1 / N2);
    printf("RESTO INT: N1 mod N2 = %i %% %i = %i\n", N1, N2, N1 % N2);
    printf("POT�NCIA��O: N1 elevado N2 = %i elevado %i = %.1f\n", N1, N2, pow(N1, N2));
    printf("RADICIA��O: N1 raiz 1 / N2 = %i raiz %.1f = %.1f\n", N1, 1.0 / N2, pow(N1, 1.0 / N2));
  return 0;
}
