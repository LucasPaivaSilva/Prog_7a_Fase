#include <stdio.h>
#include <stdlib.h>

void plota_ret(int h, int w){
    int x, y;
    for(x=0;x<h;x++){
        for(y=0;y<w;y++){
            printf("*");
        }
        printf("\n");
    }
}

void plota_triangulo(int h){
    int x, y;
    for(x=0;x<h;x++){
        for(y=0;y<(x+1);y++){
            printf("*");
        }
        printf("\n");
    }
}

void plota_triangulo_invert(int h){
    int x, y;
    for(x=0;x<h;x++){
        for(y=0;y<(h-x);y++){
            printf("*");
        }
        printf("\n");
    }
}

void plota_numerico(int h){
    int x, y;
    for(x=0;x<h;x++){
        for(y=0;y<(x+1);y++){
            if((x-y)==0){
                printf("%d", (x-y+1));
            }
            else{
                printf("%d#", (x-y+1));
            }
        }
        printf("\n");
    }
}

int main()
{
    printf("Hello world!\n");
    plota_numerico(5);
    return 0;
}
