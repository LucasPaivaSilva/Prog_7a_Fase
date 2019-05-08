#include <stdio.h>
#include <stdlib.h>

const char mesxtenso[12][10] = {"Janeiro", "Fevereiro", "Marco", "Abril", "Maio", "Junho", "Julho", "Agosto",
"Setembro", "Outubro", "Novembro", "Dezembro"};
int num;
int main()
{
    printf("Digite o N do mes\n");
    scanf("%d", &num);
    if ((num>0) && (num<=12)){
        printf("Voce digitou o mes: %s \n", mesxtenso[num-1]);
    }
    else
        printf("Invalido");

    return 0;
}
