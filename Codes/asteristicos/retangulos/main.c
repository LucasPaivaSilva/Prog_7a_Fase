#include <stdio.h>
#include <stdlib.h>

int main()
{
    int xc=0, yc=0;
    int x, y;
    scanf("%d %d", &x, &y);
    while(y>yc){
        for(xc =1; xc<=x; xc++){
            printf("*");
        }
        printf("\n");
        yc++;
    }
    return 0;
}
