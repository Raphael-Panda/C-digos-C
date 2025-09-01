#include <stdio.h>
#include <stdlib.h>
#include <math.h>

// Escrever um algoritmo que leia o voto de 100(While: Stop) moradores para síndico do prédio.

int main()
{
    int moradores = 0;         // START
    int fulano = 0, beltrano = 0, ciclano = 0, voto;
    float pfulano, pbeltrano, pciclano;

    printf("Votacao para Sindico do Predio\n");
    printf("MENU: Os candidatos sao:\n");
    printf("1: para Fulano\n");
    printf("2: para Beltrano\n");
    printf("3: para Ciclano\n");
    while(moradores < 5){       // STOP
        printf("Voto do Morador %i: ", moradores + 1); scanf("%i", &voto);

        //TRATAMENTO DE ERRO:
        if(voto < 1 || voto > 3)
            printf("ERRO: Voto Incorreto/Invalido\n");
        else{
            if(voto == 1)
                fulano++;
            else if(voto == 2)
                beltrano++;
            else
                ciclano++;
            moradores++;
            printf("Resultado de Votacao;\n");
            pfulano = 100.0 * fulano/ moradores;
            pbeltrano = 100.0 * beltrano/ moradores;
            pciclano = 100.0 * ciclano/ moradores;
            printf("Votos de Fulano: %i (%.1f %%)\n", fulano, pfulano);
            printf("Votos de Beltrano: %i (%.1f %%)\n", beltrano, pbeltrano);
            printf("Votos de Ciclano: %i (%.1f %%)\n", ciclano, pciclano);

        }
    }
    return 0;
}
