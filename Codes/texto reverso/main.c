#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/****************************
***Detector de Palíndromo****
*****************************
*Aluno: Lucas Paiva da Silva
*IFSC Florianópolis 2018
*****************************/


int main()
{
    char texto[50], reverso[50];
    int tamanho, controle = 0, controle2 = 0;
    printf("Digite algo!\n");
    fgets(texto, sizeof(texto), stdin);
    tamanho = strlen(texto);
    texto[tamanho-1] = '\0';
    tamanho = strlen(texto);
    while(controle<tamanho){
        reverso[controle2] = texto[tamanho-1];
        tamanho--;
        controle2++;
    }
    reverso[controle2] = '\0';
    printf("%s\n", reverso);
    if(strcmp(texto, reverso) == 0){
        printf("eh Palindromo");
    }
    return 0;
}
