#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define TAMANHO 100

int main()
{
    char nomeCompleto[TAMANHO], Letra;
    char copia[TAMANHO];
    unsigned T1;

    printf("Entre com seu Nome Completo: ");
    scanf("\n%[^\n]", nomeCompleto);        // "\n%[^\n]" vai aceitar todos os simbolos do teclado menos o Enter(\n)
    printf("Escolha uma Letra: ");
    scanf("\n%c", &Letra);         // O \n desse scanf vai ser ignorado quando der o ENTER do primeiro Printf
    T1 = strlen(nomeCompleto);
    printf("Bom Dia! Sr. %s (Tamanho: %i caracteres)\n", nomeCompleto, T1);
    printf("Bom Dia! Sr.: %s\n", nomeCompleto);
    strcpy(copia, nomeCompleto);
    printf("Bom Dia! Sr. %s (Tamanho: %i caracteres)\n", copia, strlen(copia));
    printf("Primeira Letra do Seu Nome: %c\n", nomeCompleto[0]);

    return 0;
}
