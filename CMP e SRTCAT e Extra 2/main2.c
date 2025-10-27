#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define TAMANHO 1000

// EXTRA 1
int main()
{
    char palavra[TAMANHO];
    char menorPalavra[TAMANHO];
    char maiorPalavra[TAMANHO];
    unsigned menor = TAMANHO + 1, maior = 0; // TAMANHO + 1 PQ QUALQUER TAMANHO VAI SER MAIOR QUE TAMANHO + 1
    unsigned tamanhoPalavra;
    int contador = 0;

    while(contador < 5){
        printf("Palavra %i: ", contador + 1);
        scanf("\n%[^\n]", palavra);
        // TRATAMENTO DE ERRO
        tamanhoPalavra = strlen(palavra);
        if(tamanhoPalavra < 2)
            printf("ERRO: palavra incorreta, escolha de novo.\n");
        else{
            if(tamanhoPalavra < menor){
                menor = tamanhoPalavra;
                strcpy(menorPalavra, palavra);
            }
            if(tamanhoPalavra > maior){
                maior = tamanhoPalavra;
                strcpy(maiorPalavra, palavra);
            }
            contador++;
        }
    }
    printf("A menor Palavra e: %s com %u caracteres\n", menorPalavra, menor);
    printf("A menor Palavra e: %s com %u caracteres\n", maiorPalavra, maior);




        // MODO ERRADO DE FAZER


//        T1 = strlen(palavra);
//        if(menor < T1){
//            strcpy(menor, palavra);
//            menorPalavra = strlen(menorPalavra);
//        }
//        if(maior > T1){
//            strcpy(maior, palavra);
//            maiorPalavra = strlen(maiorPalavra);
//        }
//
//   }



    return 0;
}
