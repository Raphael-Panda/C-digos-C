#include <stdio.h>
#include <stdlib.h>

#define TAMANHO 5   // Estática: Alunos

int main()
{
    int matricula[TAMANHO];             // colocar o TAMANHO para alocar os 50 espaços de memória
    float bimestre1[TAMANHO], media, aux2;           // colocar o TAMANHO para alocar os 50 espaços de memória
    int indice = 0, i;                      // O indice sempre começa no 0 e vai até o TAMANHO - 1
    int opcao, soma = 0, output, valor;
    int Ls, Flag, aux1;


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
        else if(opcao == 3){
            if(indice == 0)
                printf("Pauta Vazia\n");
            else{
                // Método da Pesquisa Sequencial(Resetar): Inicio
                printf("Entre com a matricula para pesquisar: ");
                scanf("%i", &valor);
                // TRATAMENTO DE ERRO:
                if(valor < 100 || valor > 999)
                    printf("ERRO: matricula Incorreta. Escolha Novamente\n");
                else{
                    i = 0;        // voltar o indice pra 0
                    output = -1;  // Valor não encontrado no vetor
                    while(i < indice){
                            if(matricula[i] == valor){
                                output = i;
                                break;
                            }
                            i++;
                    }
                    if(output == -1)
                        printf("Matricula: %i nao localizada na Pauta\n", valor);
                    else{
                        printf("Dados do aluno %i sao: \n", output + 1);
                        printf("Matricula: %i\n", matricula[output]);
                        printf("Nota Bimestre 1: %.1f\n\n", bimestre1[output]);
                    }
                    // Método da Pesquisa Sequencial(Resetar): FIM

                }
            }

        }
        else if(opcao == 4){
            if(indice == 0)
                printf("Pauta Vazia\n");
            else{
                // Método Bolha: INICIO(Resetar)
                Ls = indice - 1;
                do{
                    Flag = 0; // Base Ordenada
                    for(i = 0; i < Ls; i++){
                        if(matricula[i] > matricula[i + 1]){
                            // Trocar: Matricula (aux1)
                            aux1 = matricula [i];
                            matricula[i] = matricula[i + 1];
                            matricula[i + 1] = aux1;

                            // Trocar: Nota do 1 Bimestre (aux2)
                            aux2 = bimestre1[i];
                            bimestre1[i] = bimestre1[i + 1];
                            bimestre1[i + 1] = aux2;

                            Flag = 1;    // Base Desordenada
                        }
                    }
                    Ls--;
                }while(Flag);
                printf("Pauta em Ordem (Crescente) de Matricula:\n");
                for(i = 0; i < indice; i++){
                    printf("Dados do Aluno %i:\n", i + 1);
                    printf("Matricula: %i\n", matricula[i]);
                    printf("Nota - Bimestre 1: %.1f\n\n", bimestre1[i]);
                }
                // Metodo Bolha: FIM
            }
        }
        else
            printf("RELATORIO 4:\n");



    }while(opcao != 0);    // para continuar o programa tem q ir o contrário do tratamento de erro
                           // justamente para o programa continuar a funciona enquanto for TRUE


    return 0;
}
