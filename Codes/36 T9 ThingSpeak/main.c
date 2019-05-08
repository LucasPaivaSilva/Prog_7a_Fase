#include <stdio.h>
#include <stdlib.h>
float fahr2celsius(float tf){
    return ((tf-32)/1.8);
}
const char NOME_ARQ[] = "dados_temperatura_thingspeak.csv";
int main ()  {
    char lixo[100];
    int hora, minuto;
    float temperatura, maior_temp= -10000, menor_temp=10000;
    int f;
    int n;
    FILE *fp;
    fp = fopen(NOME_ARQ,"r");
    if (fp == NULL)  {
    printf("Erro ao abrir arquivo %s.\n", NOME_ARQ);
    exit(1);
}
    fgets(lixo, sizeof(lixo),fp);
    while(1)  {
    n=fscanf(fp, "%d,%d,%f", &hora, &minuto, &temperatura);
    if (temperatura>maior_temp){
        maior_temp = temperatura;
    }
    if (temperatura<menor_temp){
        menor_temp = temperatura;
    }
    if (n==EOF){
        break;
    }
}
printf("A maior temp em Fahrenheit eh %f\n", maior_temp);
printf("A maior temp em Celsius eh %f\n",fahr2celsius(maior_temp));
printf("A menor temp em Fahrenheit eh %f\n", menor_temp);
printf("A menor temp em Celsius  eh %f\n",fahr2celsius(menor_temp));

fclose(fp);
return 0;
}
