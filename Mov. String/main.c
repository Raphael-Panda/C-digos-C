#include <stdio.h>
#include <stdlib.h>

#define TAMANHO 100 // Estática

int main()
{
    char nomeCompleto[TAMANHO], Letra;

    printf("Entre com seu Nome Completo: ");
    scanf("\n%[^\n]", nomeCompleto);        // "\n%[^\n]" vai aceitar todos os simbolos do teclado menos o Enter(\n)
    printf("Escolha uma Letra: ");
    scanf("\n%c", &Letra);         // O \n desse scanf vai ser ignorado quando der o ENTER do primeiro Printf

    printf("Bom Dia! Sr.: %s\n", nomeCompleto);
    printf("Primeira Letra do Seu Nome: %c\n", nomeCompleto[0]);

    return 0;
}
