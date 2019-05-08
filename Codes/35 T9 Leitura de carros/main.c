#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/* Ler “idade” e nome do time gravados em um arquivo */
#include <stdio.h>
#include <stdlib.h>
const char NOME_ARQ[] = "Input.txt";
int main ()  {
    char marca[80], modelo[80], mais_velho[80], mais_caro[80];
    int ano, m_velho=3000;
    float preco, m_caro=0.0;
    int f;
    int n;
    FILE *fp;
    fp = fopen(NOME_ARQ,"r");
    if (fp == NULL)  {
    printf("Erro ao abrir arquivo %s.\n", NOME_ARQ);
    exit(1);
}
    while(1)  {
    n=fscanf(fp, "%s %s %d %f", &marca, &modelo, &ano, &preco);
    if (preco>m_caro){
        m_caro = preco;
        strcpy(mais_caro, modelo);
    }
    if (ano<m_velho){
        m_velho = ano;
        strcpy(mais_velho, modelo);
    }
    if (n==EOF)
    break;
    printf("Marca: %s  Modelo: %s  Ano: %d  Valor: %f  \n", marca, modelo, ano, preco);
}
printf("O carro mais caro eh o %s e custa %f \n" , mais_caro, m_caro);
printf("O carro mais velho eh o %s e eh de %d \n", mais_velho,m_velho);
fclose(fp);
return 0;
}
