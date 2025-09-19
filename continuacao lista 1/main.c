#include <stdio.h>
#include <stdlib.h>

int main()
{
    int quantidade = 0, contador;

    printf("Multiplos de 7 ou 13 no Intervalo de [1000, 1500]\n");

    for(contador = 1000; contador <= 1500; contador++){
        if(contador % 7 == 0 || contador % 13 == 0){
            quantidade++;
            printf("Os numeros multiplos sao %i: %i\n", quantidade, contador);
        }
    }

    return 0;
}
