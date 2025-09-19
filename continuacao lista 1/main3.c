#include <stdio.h>
#include <stdlib.h>

#define PI 3.14
#define PI3 309.5

int main()
{
    int contador;
    float media, num;

    printf("Escolha um numero dentro do intervalo de [10 * PI3, 100 * PI] ou
               [309.5, 314]\n");
    printf("Numero: "); scanf("%f", &num);

    if(num < PI3 || num > 100*PI)
        printf("ERRO: numero fora do intervalo");
    else{
        for(contador = PI3; contador = 100*PI, contador++){


        }
    }

    return 0;
}
