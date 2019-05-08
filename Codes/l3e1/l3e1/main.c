#include <stdio.h>

int main() {

int x, y;

printf("Digite o valor de x e de y:");

scanf("%d %d", &x, &y);

if (x == 0 && y == 0)
    printf("x e y são zero.\n");
    else if (x==0)
        printf("só x é zero.\n");
        else if (y==0)
            printf("x não é zero.\n");

return 0;

}
