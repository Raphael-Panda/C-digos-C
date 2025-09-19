#include <stdio.h>
#include <stdlib.h>

int main()
{
    int opcao, quantidade = 0;
    float salarioVip = 0, salario, salarioStan = 0;
    float stanP, vipP;
    int Vip = 0, Standard = 0;

    printf("MENU\n");
    printf("[1] para se cadastrar\n");
    printf("[0] para sair do programa\n");

    do{
        printf("Sua opcao: \n"); scanf("%i", &opcao);
        if(opcao == 0)
            printf("FIM do Programa");
        else if(opcao > 1)
            printf("ERRO: Opcao Incorreta");
        else{
            printf("Cadastro Iniciado\n");
            printf("Qual seu salario? R$\n"); scanf("%f", &salario);
            if(salario < 5000){
                Standard++;
                salarioStan += salario;
                printf("Voce e um cliente STANDARD\n");
            }
            else{
                printf("Voce e um cliente VIP\n");
                Vip++;
                salarioVip += salario;
            }
            quantidade++;
            stanP = 100.0 *  Standard/quantidade;
            vipP = 100.0 * Vip/quantidade;

            printf("Total de Clientes: %i\n", quantidade);
            printf("Clientes Standard %i: %.2f%%\n", Standard, stanP);
            printf("Clientes Vip %i: %.2f%%\n", Vip, vipP);
        }
    }while(opcao != 0);
    return 0;
}
