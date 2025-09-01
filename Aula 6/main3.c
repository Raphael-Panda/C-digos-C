#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#define SM 1518.01     // SALARIO MINIMO

// Ler o salário em reais de 1000 alunos universitários e exibir a média geral.

// MÉDIA =  SOMATÓRIAQUANTIDADE

// Não registrar salários abaixo de um (1) Salário Mínimo (Declarar como constante)

int main()
{
    int alunos = 0;    // START
    float salario, soma = 0, media;

    while(alunos < 1000){    // STOP
        printf("Entre com o Salario (>= R$ %.1f) - Aluno %i: ", SM, alunos + 1);
        scanf("%f", &salario);

        // TRATAMENTO DE ERRO:
        if(salario < SM)
            printf("ERRO: Valor Incorreto do Salário\n");
        else{
            soma += salario;
            alunos++;        //STEP
        }
    }
    media = soma/ alunos;
    printf("Media salarial dos universitários: R$ %.2f\n", media);

    return 0;
}
