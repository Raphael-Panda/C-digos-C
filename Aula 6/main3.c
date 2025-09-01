#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#define SM 1518.01     // SALARIO MINIMO

// Ler o sal�rio em reais de 1000 alunos universit�rios e exibir a m�dia geral.

// M�DIA =  SOMAT�RIAQUANTIDADE

// N�o registrar sal�rios abaixo de um (1) Sal�rio M�nimo (Declarar como constante)

int main()
{
    int alunos = 0;    // START
    float salario, soma = 0, media;

    while(alunos < 1000){    // STOP
        printf("Entre com o Salario (>= R$ %.1f) - Aluno %i: ", SM, alunos + 1);
        scanf("%f", &salario);

        // TRATAMENTO DE ERRO:
        if(salario < SM)
            printf("ERRO: Valor Incorreto do Sal�rio\n");
        else{
            soma += salario;
            alunos++;        //STEP
        }
    }
    media = soma/ alunos;
    printf("Media salarial dos universit�rios: R$ %.2f\n", media);

    return 0;
}
