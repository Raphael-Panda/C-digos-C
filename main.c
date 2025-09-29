#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define TAMANHO 1000
#define MAX 999
#define MIN 100
#define INTERVALO (MAX - MIN + 1)


int main()
{
    int senha[TAMANHO], output, i;
    int valor;
    srand(time(NULL));

    for(i = 0; i < TAMANHO; i++){
        valor[i] = (rand() % INTERVALO) + MIN;
        printf("array %i: [%i] = %i\n", i + 1, i, valor[i]);
    }

    while(i < TAMANHO)
        if(senha[i] < 100 || senha[i] > 999){
            printf("ERRO: senha fora do intervalo");
        }
        else{
            printf("Digite a senha: "); scanf("%i", &senha[TAMANHO]);
            output = -1;
            if(valor[i] == senha){
                output = i;
                break;
            }
            i++;
        }
    }
    return 0;
}
