#include <stdio.h>
#include <stdlib.h>

int main()
{
   int opcao, voto;
   int moradores = 0;
   int fulano = 0, beltrano = 0, cicrano = 0;
   float pfulano, pbeltrano, pcicrano;

   printf("MENU\n");
   printf("[1] Cadastrar seu voto\n");
   printf("[0] Sair do programa\n");

    do{
       printf("Sua Opcao: "); scanf("%i", &opcao);
       if(opcao == 0)
          printf("Fim do Programa\n");
       else if(opcao > 1)
          printf("ERRO: opcao Incorreta\n");
       else{
          printf("MENU: Opcao de Candidatos\n");
          printf("1: para votar em Fulano\n");
          printf("2: para votar em Beltrano\n");
          printf("3: para votar em Cicrano\n");
          do{
            printf("Morador %i - Seu Voto: ", moradores + 1);
            scanf("%i", &voto);

            // TRATAMENTO DE ERRO
            if(voto < 1 || voto > 3)
                printf("ERRO: opcao de voto incorreto\n");
            else{
                if(voto == 1)
                    fulano++;
                else if(voto == 2)
                    beltrano++;
                else
                    cicrano++;
                moradores++;
                printf("Resultado de Votacao;\n");
                pfulano = 100.0 * fulano/ moradores;
                pbeltrano = 100.0 * beltrano/ moradores;
                pcicrano = 100.0 * cicrano/ moradores;
                printf("Votos de Fulano: %i (%.1f %%)\n", fulano, pfulano);
                printf("Votos de Beltrano: %i (%.1f %%)\n", beltrano, pbeltrano);
                printf("Votos de Cicrano: %i (%.1f %%)\n", cicrano, pcicrano);
          }
        }while(voto < 1 || voto > 3);
      }
    }while(opcao != 0);
    return 0;
}
