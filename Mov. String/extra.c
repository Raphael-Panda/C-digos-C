#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define TAMANHO 5

// EXTRA 1
int main()
{
    char palavra[TAMANHO];
    char menorPalavra[TAMANHO];
    char maiorPalavra[TAMANHO];
    int menor = TAMANHO + 1, maior = 0;
    int contador = 0;
    unsigned T1;

    while(contador < 5){
        printf("Palavra %i: ", contador + 1);
        scanf("\n%[^\n]", palavra);
        T1 = strlen(palavra);
        if(menor < T1){
            strcpy(menorPalavra, palavra);
            menor = strlen(menorPalavra);
        }
        if(maior > T1){
            strcpy(maiorPalavra, palavra);
            maior = strlen(maiorPalavra);
        }
        contador++;

    }
    printf("A menor Palavra e: %s com %i caracteres\n", menorPalavra, strlen(menorPalavra));
    printf("A menor Palavra e: %s com %i caracteres\n", maiorPalavra, strlen(maiorPalavra));



    return 0;
}
