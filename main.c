#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main()
{
    // SENHA NUM�RICA (XXXX) FORTE OU FRACA
    // MULTIPLO DE 17 E �MPAR
    int senha;

    printf("Entre com sua senha de 4 n�meros(XXXX): "); scanf("%i", &senha);


    if(senha <= 999 || senha >= 10000)     // OR - ||
        printf("SENHA INCORRETA NAO POSSUI 4 DIGITOS");
    else{
        if(senha % 2 != 0 && senha % 17 == 0)     // AND - &&
            printf("SUA SENHA � FORTE");
        else
            printf("SUA SENHA � FRACA");
    }
    return 0;
}
