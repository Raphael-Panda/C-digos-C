#include <stdio.h>
#include <stdlib.h>
#include <math.h>


#define TAMANHO 15000

// PROVA DE SEGUNDA-FEIRA
int main()
{
    int codigo[TAMANHO], nota[TAMANHO];
    int opcao, i = 0, soma = 0;
    int j = 0;

    printf("MENU:\n");
    printf("OPCAO 1: Cadastrar Visitante\n");
    printf("OPCAO 2: Nota de Satisfacao media\n");
    printf("OPCAO 0: Sair do Programa\n");

    do{
        printf("Sua Opcao: "); scanf("%i", &opcao);
        if(opcao == 0)
            printf("Fim da Pesquisa\n");
        else if(opcao < 0 || opcao > 2)
            printf("ERRO: Opcao Incorreta. Escolha Novamente\n");
        else if(opcao == 1){
            printf("Dados do Visitante %i: \n", i + 1);
            printf("Codigo (XX.XXX): "); scanf("%i", &codigo[i]);
            printf("Nota [1, 5]: "); scanf("%i", &nota[i]);
            if(codigo[i] < 10000 || codigo[i] > 99999)
                printf("ERRO CODIGO: valor incorreto\n");
            else if(nota[i] < 1 || nota[i] > 5)
                printf("ERRO NOTA: valor incorreto\n");
            else{
                i++;
                printf("Cadastro com Sucesso!\n");
            }
        }
        else{
            printf("RELATORIO:\n");
            for(j = 0; j < i; j++)
                soma += nota[i];
            printf("Nota media: %.1f\n", 1.0 * soma / i);
            printf("Nota media (teto): %.0f\n", ceil(1.0 * soma / i));
        }
    }while(opcao != 0);

}


    return 0;
}
