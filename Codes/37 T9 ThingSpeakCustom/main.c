#include <stdio.h>
#include <stdlib.h>
//https://thingspeak.com/channels/38265
//Foi usado o Indoor Temp
const char NOME_ARQ[] = "dados.csv";
int main ()  {
    char lixo[1000];
    int lixo_n;
    int ano, mes, dia, hora, minuto, segundo;
    int r_ano, r_mes, r_dia, r_hora, r_minuto, r_segundo;
    float temperatura, maior_temp= -1000;
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
    n=fscanf(fp, "%d-%d-%d %d:%d:%d UTC,%d,%f", &ano, &mes, &dia, &hora, &minuto, &segundo, &lixo_n, &temperatura );
    if (temperatura>maior_temp){
        maior_temp = temperatura;
        r_ano=ano;
        r_mes=mes;
        r_dia=dia;
        r_hora=hora;
        r_minuto=minuto;
        r_segundo=segundo;
    }
    if (n==EOF){
        break;
    }
}

printf("A maior temp em Celsius eh %f\n",maior_temp);
printf("Ela foi registrada na data %d/%d/%d as %d:%d:%d", r_dia, r_mes, r_ano, r_hora, r_minuto, r_segundo);
fclose(fp);
return 0;
}
