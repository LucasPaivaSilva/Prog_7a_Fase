#include <stdio.h>
#include <stdlib.h>

int MEDEVETOR(char str[], int vetorsize)
{
    int x;
    for (x=0; x<vetorsize;x++)
    {
        if(str[x] == '\0'){
            break;
        }
    }
    return x;
}


int main()
{
    char texo[30]; int tam;
    printf("Digite algo!\n");
    fgets(texo, sizeof(texo),stdin);
    tam = MEDEVETOR(texo, sizeof(texo));
    texo[tam-1] = '\0';
    tam = MEDEVETOR(texo, sizeof(texo));
    printf("%d", tam);

    return 0;
}
