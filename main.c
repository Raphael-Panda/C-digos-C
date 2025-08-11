#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#define PI 3.14
//Faça um algoritmo em C que calcule e exiba a tela a área e o volume de uma esfera de Raio (R) em metros, sabendo que:

//ÁreaEsfera=4 * π * R2

//VolumeEsfera=4/3 * π * R3

//Exibir os resultados do volume na tela em  M3  e litros, sendo que: 1  M3  = 1000 Litros.
int main() {

    // ENTRADA:
    float R, area, volume, volumeLitros;
    printf("ESFERA: Dados de Entrada: \n");
    printf("Valor do Raio(em metros): "); scanf("%f", &R);

    //PROCESSAMENTO:
    area = 4 * PI * pow(R, 2);  // Metros Quadrados
    volume = 4.0/3 * PI * pow(R, 3);   // Metros Cúbicos (o 4.0 precisa do ".0" para transformar em float pois apenas o "4" fica inteiro, então a conta final fica errada)
    volumeLitros = volume * 1000;    // Litros

    // SAÍDA:
    printf("Dados da Esfera: \n");
    printf("Area: %.2f Metros Quadrados\n", area);
    printf("Volume: %.2f Metros Quadrados\n", volume);
    printf("Volume Litros: %.2f Litros\n", volumeLitros);

    return 0;
}
