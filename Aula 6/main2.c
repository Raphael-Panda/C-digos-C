#include <stdio.h>
#include <stdlib.h>
#include <math.h>


// Enumerar e exibir na tela os n�meros �mpares entre [X,  X3 ]. Onde X � um valor >= 1 lido do usu�rio.

// VALOR INICIAL - START: X

// VALOR FINAL - STOP:  X3

// Exibir tamb�m a SOMA e a M�DIA destes valores.

int main()
{
    int X, quantidade = 0, contador, soma = 0;
    float media;

    printf("Entre com o Valor Inteiro de X (X >= 1): "); scanf("%i", &X);

    // TRATAMENTO DE ERRO:
    if(X < 1)
        printf("ERRO: DADOS DE ENTRADA DE 'X' INCORRETOS");
    else{
        printf("Os Impares entre [%i, %.0f] sao: \n", X, pow(X, 3));
;        for(contador = X, contador <= pow(X,3), contador++){
            // SELE��O SIMPLES: �mpares:
            if(contador != 0){
                // ENUMERAR: contar
                quantidade++;
                printf("�mpar %i: %i\n", quantidade, contador);
                soma += contador;
            }
        }
        // INT / INT = INT
        // 1.0 * INT / INT = FLOAT / INT = FLOAT
        media = 1.0 * soma / quantidade;
        printf("Soma dos %i �mpares = %i\n", quantidade, soma);
        printf("Media dos %i �mpares = %.1f\n", quantidade, media);
    }


    return 0;
}
