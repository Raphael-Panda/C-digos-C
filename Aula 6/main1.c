#include <stdio.h>
#include <stdlib.h>

// �MPARES e (AND) M�LTIPLAS DE 39.
// VALOR INICIAL. : START : 1000
// VALOR FINAL : STOP : 9999

int main()
{
    int contador, quantidade = 0;
    printf("SUGESTOES DE SENHAS: \n");

    for(contador = 1000; contador <= 10000; contador += 1){ // NO STEP TAMB�M PODE SER USADO: CONTADOR++ OU ++CONTADOR (PARA CONTAR DE 1 EM 1)
        // CRIPTOGRAFIA: �MPARES E M�LTIPLO DE 39
        if(contador % 2 != 0  && contador % 39 == 0){
            quantidade++;  // ENUMERAR: contar
            printf("SENHA %i: %i\n", quantidade, contador); // MOSTRA QUANTAS SENHAS FORAM ENCONTRADAS E MOSTRA AS SENHAS ENCONTRADAS
        }
    }
    return 0;
}
