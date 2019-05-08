#include <stdio.h>
#include <stdlib.h>

int main()
{
    int idade, sexo;

    scanf("%d",&sexo);
    scanf("%d",&idade);
    if (sexo == 1 && idade <= 30)
        printf("15");
    if (sexo == 1 && idade > 30)
        printf("25");
    if (sexo == 2 && idade <= 30)
        printf("45");
    if (sexo == 2 && idade > 30)
        printf("60");

    return 0;
}
