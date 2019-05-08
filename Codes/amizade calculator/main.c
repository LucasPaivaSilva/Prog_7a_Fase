#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    srand(time(NULL));
    int randomnumber, tamanho;
    char entrada[20];
    printf("BEM VINDO AO AMIZADE CALCULATOR\n");
    printf("DIGITE O SEU NOME E O DO SEU AMIGUINHO(A)\n");
    printf("SO LEMBRA DE COLOCAR A VIRGULA NO MEIO, SEU TERRA PLANISTA\n");
    fgets(entrada, sizeof(entrada), stdin);
    randomnumber = rand() % 100;
    printf("A CHANCE DA AMIZADE DE VCS DAR BOM EH DE %d", randomnumber);
    return 0;
}
