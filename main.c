#include <stdio.h>
#include <stdlib.h>

#define TAMANHO 5   // Estática: Alunos

int main()
{
    int matricula[TAMANHO];             // colocar o TAMANHO para alocar os 50 espaços de memória
    float bimestre1[TAMANHO], media;           // colocar o TAMANHO para alocar os 50 espaços de memória
    int indice = 0, i;                      // O indice sempre começa no 0 e vai até o TAMANHO - 1
    int opcao, soma = 0;


    printf("MENU DE OPCOES:\n");
    printf("1: Cadastrar Aluno\n");
    printf("2: RELATORIO 1: Exibir Media do 1 Bimestre\n");
    printf("3: RELATORIO 2: Pesquisar (Pesquisa Sequencial) / Exibir os Dados de um Aluno por sua Matrícula (XXX).\n");
    printf("4: RELATORIO 3: Exibir os dados ordenados por Matrícula.\n");
    printf("5: RELATORIO 4: Pesquisar (Binaria) por Matrícula (XXX).\n");
    printf("0: Sair do Programa");

    do{
        printf("Sua opcao: "); scanf("%i", &opcao);
        if(opcao == 0)
            printf("Fim do Programa\n");
        else if(opcao < 0 || opcao > 5)
            printf("ERRO: Opcao Incorreta. Escolha Novamente\n");
        else if(opcao == 1){
            // Cadastrar os dados: Aluno
            if(indice < TAMANHO){
                printf("Dados do Aluno %i: \n", indice + 1);  // Enumerar
                printf("Matricula (XXX): "); scanf("%i", &matricula[indice]);
                printf("Bimestre 1(Nota[0.0, 10.0]): "); scanf("%f", &bimestre1[indice]);
                // TRATAMENTO DE ERRO:
                if(matricula[indice] < 100 || matricula[indice] > 999)
                    printf("ERRO: matricula incorreta. escolha novamente.\n");
                else if(bimestre1[indice] < 0.0 || bimestre1[indice] > 10.0)
                    printf("ERRO: Nota incorreta. escolha novamente.\n");
                else
                    indice++;   // Step: indice = indice + 1
             }
            else
                printf("Turma Lotada! Nao eh possivel cadastrar alunos.\n");
        }
        else if(opcao == 2){
            if(indice == 0)
                printf("Turma Vazia\n");
            else{
                printf("RELATORIO 1: Exibir Media do 1 Bimestre\n");
                for( i = 0; i < indice; i++)
                    soma += bimestre1[i];
                media = soma/indice;
                printf("Media do Bimestre 1: %.1f\n", media);
            }
        }
        else if(opcao == 3)
            printf("RELATORIO 2:\n");
        else if(opcao == 4)
            printf("RELATORIO 3:\n");
        else
            printf("RELATORIO 4:\n");



    }while(opcao != 0);    // para continuar o programa tem q ir o contrário do tratamento de erro
                           // justamente para o programa continuar a funciona enquanto for TRUE


    return 0;
}
