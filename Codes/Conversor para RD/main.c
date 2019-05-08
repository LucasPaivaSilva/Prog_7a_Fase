#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int greg2rd(int ano, int mes, int dia)
{
    int output;
    int y = eh_bissexto(ano);
    output = 365*(ano-1);
    output = floor((ano-1)/4)-floor((ano-1)/100)+floor((ano-1)/400)+output;
    output = floor((367*mes-362)/12)+output;
    output = output+dia;
    if ((mes>2)&&(y==1)){
        output = output-1;
    }else if (mes<=2){
        output = output;
    }else{
        output = output-2;
    }
    return output;

}

int eh_bissexto(int ano)
{
    if ((ano%4 == 0)&&(ano%100!=0)){
        return 1;
    }else if (ano%400 == 0){
        return 1;
    }else{
        return 0;
    }
}


int main()
{
    int a, m, d, o;
    scanf("%d", &a);
    scanf("%d", &m);
    scanf("%d", &d);
    o = greg2rd(a, m, d);
    printf("%d", o);
    return 0;
}
