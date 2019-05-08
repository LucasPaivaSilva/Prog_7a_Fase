#include <stdio.h>
#include <stdlib.h>

int main()
{
    float ing[4];
    int x, nref;
    for(x=0; x<=3; x++){
        scanf("%d", &ing[x]);
    }
    scanf("%d", nref);
    for(x=0; x<=3; x++){
        ing[x] = 10 * ing[x];
    }
        for(x=0; x<=3; x++){
        printf("%d", ing[x]);
        }
    return 0;
}
