#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main()
{
    // SENHA NUMÉRICA (XXXX) FORTE OU FRACA
    // MULTIPLO DE 17 E ÍMPAR
    int senha;

    printf("Entre com sua senha de 4 números(XXXX): "); scanf("%i", &senha);


    if(senha <= 999 || senha >= 10000)     // OR - ||
        printf("SENHA INCORRETA NAO POSSUI 4 DIGITOS");
    else{
        if(senha % 2 != 0 && senha % 17 == 0)     // AND - &&
            printf("SUA SENHA É FORTE");
        else
            printf("SUA SENHA É FRACA");
    }
    return 0;
}
