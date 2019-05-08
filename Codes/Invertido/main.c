#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    char texto[10], reverso[10];
    int tamanho, controle = 0, controle2 = 0;
    printf("Digite algo!\n");
    fgets(texto, sizeof(texto), stdin);
    tamanho = strlen(texto);
    while(controle<tamanho){
        reverso[controle2] = texto[tamanho-1];
        tamanho--;
        controle2++;
    }
    reverso[controle2] = '\0';
    printf("%s\n", reverso);
    printf("%d", strlen(texto));
    printf("%d", strlen(reverso));
    if(strcmp(texto, reverso) == 0){
        printf("Palindromo");
    }
    return 0;
}

