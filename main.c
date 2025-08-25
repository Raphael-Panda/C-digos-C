#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    // ENTRADA
    double B1, B2, PF, media;

    printf("Nota [0.0, 10.0] Bimestre 1? \n"); scanf("%lf", &B1); // double = Long Float  = lf
    printf("Nota [0.0, 10.0] Bimestre 2? \n"); scanf("%lf", &B2); // double = Long Float  = lf

    // TRATAMENTO DE ERRO
    if(B1 < 0 || B1 > 10 || B2 < 0 || B2 > 10)
        printf("ERRO: Insira as notas corretas\n");
    else{
        media = (B1 + B2) / 2;
        // ARREDONDAMENTO (ROUND): 1 CASA DECIMAL
        media = round(media * 10) / 10.0;
        printf("MEDIA: %.1f\n", media);
        if(media < 3.0)
            printf("REPROVADO\n");
        else if(media < 7.0){
            printf("PROVA FINAL\n");
            printf("NOTA [0.0, 10.0] DA PROVA FINAL: \n"); scanf("%lf", &PF); // double = Long Float  = lf
            // TRATAMENTO DE ERRO
            if(PF < 0.0 || PF > 10.0)
                printf("ERRO: Nota Incorreta\n");
            else{
                media = (media + PF) / 2;
                // ARREDONDAMENTO (ROUND): 1 CASA DECIMAL
                media = round(media * 10) / 10.0;
                printf("MEDIA: %.1f\n", media);
                if(media < 5.0)
                    printf("REPROVADO\n");
                else
                    printf("APROVADO\n");
            }
        }
     else
        printf("APROVADO\n");
    }




    return 0;
}
