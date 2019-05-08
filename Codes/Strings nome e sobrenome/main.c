#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main()
{
    char texto[50], reverso[50];
    int tamanho, controle = 0;
    fgets(texto, sizeof(texto),stdin);
    tamanho = strlen(texto);
    printf("%d", tamanho);
    texto[tamanho-1]='\0';
    tamanho = strlen(texto);
    printf("%d", tamanho);
}
