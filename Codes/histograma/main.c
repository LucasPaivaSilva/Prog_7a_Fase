#include <stdio.h>
#include <stdlib.h>

void desenha_linha(int n, char c)
{
    int x;
    for (x = 0; x<n; x++){
        printf("%c", c);
    }
    printf("\n");
}
void histograma(int vet[], int tamanho, char c)
{
    int y;
    for (y=0;y<tamanho;y++){
        desenha_linha(vet[y], c);
    }
}

int main()
{
    char chau;
    int num[100], k, snum;
    printf("Escolha um caracter\n");
    scanf("%c", &chau);
    printf("Escolha o tamanho do vetor\n");
    scanf("%d", &snum);
    for(k=0;k<snum;k++){
        printf("Escolha o valor numero %d: ", (k+1));
        scanf("%d",&num[k]);
    }
    histograma(num, snum, chau);
    return 0;
}
