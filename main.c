#include <stdio.h>
#include <stdlib.h>

#define VISITANTES 15000

int main()
{
    int dias[VISITANTES], nota[VISITANTES];
    int i = 0, soma = 0, contar = 0;
    int opcao;

    printf("MENU\n");
    printf("OPCAO 1: Cadastrar Visitante");
    printf("OPCAO 2: Relatorio da Nota Media");
    printf("OPCAO 0: Para Sair");

    do{
        printf("Sua Opcao: "); scanf("%i", &opcao);
        if(opcao == 0)
            printf("FIM do Programa\n");
        else if(opcao < 0 || opcao > 2)
            printf("OPCAO INCORRETA: Escolha de novo");
        else if(opcao == 1){
            if(i < VISITANTES)
                printf("LISTA COMPLETA");
            else{
                printf("Dados do Visitante %i: ", i + 1);
                printf("Dias (1, 2 ou 3): "); scanf("%i", &dias [i]);
                printf("Nota (1 a 5): "); scanf("%i", &nota[i]);
                if(dias[i] < 1 || dias[i] > 3)
                    printf("ERRO NUMERO DE DIAS. Escolha de novo");
                else if(nota[i] < 1 || nota[i] > 5)
                    printf("ERRO NOTA. Escolha de novo");
                else{
                    i++;
                    printf("VISITANTE CADASTRADO COM SUCESSO.");
                }
            }
            else{
                for(j = 0; j < i; j++){

                }
            }
        }
    }while(opcao != 0)



    return 0;
}
