#include <stdio.h>
#include <stdlib.h>
#include "modelo.h"
const char NOME_ARQ[] = "Input.txt";
int main ()  {
    struct InfoCar InfoCars[10];
    int x=0;
    int Ano_Mais_Velho=99999;
    float Carro_Mais_Caro=0;
    int f;
    int n;
    FILE *fp;
    fp = fopen(NOME_ARQ,"r");
    if (fp == NULL)  {
    printf("Erro ao abrir arquivo %s.\n", NOME_ARQ);
    exit(1);
}
    while(1)  {
    n=fscanf(fp, "%s %s %d %f", InfoCars[x].Brand, InfoCars[x].Model, &InfoCars[x].FabYear, &InfoCars[x].price);
    if (n==EOF)
        {
        break;
        }
    printf("Marca: %s  Modelo: %s  Ano: %d  Valor: %f  \n", InfoCars[x].Brand, InfoCars[x].Model, InfoCars[x].FabYear, InfoCars[x].price);
    if (InfoCars[x].FabYear < Ano_Mais_Velho){
        Ano_Mais_Velho = InfoCars[x].FabYear;
    }
    if (InfoCars[x].price > Carro_Mais_Caro){
        Carro_Mais_Caro = InfoCars[x].price;
    }
    x++;
}
    printf("O carro mais velho eh de %d \n", Ano_Mais_Velho);
    printf("O carro mais caro custa %f \n", Carro_Mais_Caro);

fclose(fp);
return 0;
}
