#include <stdio.h>
#include <stdlib.h>

int main()
{
    float ing[4];
    int x, nref;
    for(x=0; x<=3; x++){
        scanf("%f", &ing[x]);
    }
    scanf("%d", &nref);
    for(x=0; x<=3; x++){
        scanf("%f", &ing[x]);
        ing[x] = ing[x]*nref;
    }
    for(x=0; x<=3; x++){
    printf("%0.f ", ing[x]);
    }
    return 0;
}
