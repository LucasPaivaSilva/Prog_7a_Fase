#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>
int eucliclide(int64_t  n1,int64_t  n2)
{
    int64_t restinho;
    restinho =n1%n2;
    while(restinho!=0){
        n1 = n2;
        n2 = restinho;
        restinho = n1%n2;
    }
    return n2;
}

int main()
{
    int64_t  a, b;
    printf("digite n1!\n");
    scanf("%d",&a);
    printf("digite n2!\n");
    scanf("%d",&b);
    printf("Resultado %d", eucliclide(a, b));
    return 0;
}

