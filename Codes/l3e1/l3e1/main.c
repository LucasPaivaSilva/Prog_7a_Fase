#include <stdio.h>

int main() {

int x, y;

printf("Digite o valor de x e de y:");

scanf("%d %d", &x, &y);

if (x == 0 && y == 0)
    printf("x e y s�o zero.\n");
    else if (x==0)
        printf("s� x � zero.\n");
        else if (y==0)
            printf("x n�o � zero.\n");

return 0;

}
