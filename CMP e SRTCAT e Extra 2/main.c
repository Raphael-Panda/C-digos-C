#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define TAMANHO 1000

int main()
{
    char palavra1[TAMANHO], palavra2[TAMANHO];
    char AUX[TAMANHO];
    unsigned T1, T2;

    printf("Palavra 1: ");
    scanf("\n%[^\n]", palavra1);
    printf("Palavra 2: ");
    scanf("\n%[^\n]", palavra2);
    T1 = strlen(palavra1);
    T2 = strlen(palavra2);

    //TRATAMENTO DE ERRO
    if(T1 < 2 || T2 < 2)
        printf("ERRO: Tamanho Incorreto, escolha de novo.\n");
    else{
        strcpy(AUX, palavra1);  // para não perder a palavra1 armazenar ela na variavel auxiliar (AUX)
        strcat(palavra1, "-");  // concatenar a string ifen na palavra1 para depois colocar a palavra2
        strcat(palavra1, palavra2);
        printf("STRCAT: STR1 + STR2: %s = Palavra 1(%s)-Palavra 2(%s)\n",
               palavra1, AUX, palavra2);
    }

    return 0;
}
