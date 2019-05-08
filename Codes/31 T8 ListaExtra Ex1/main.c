#include <stdio.h>
#include <stdlib.h>


int main()
{
    int nv[3]={10,4,17};
    int *p=nv;
    printf("1. p aponta para %p\n", p);
    p++;
    printf("1. p aponta para %p\n", p);

    (*p)++;
    printf("3.o valor apontado por p:%d\n",*p);
    printf("4. valor apontado por p:%d\n",*(p++));
    printf("5. valor apontado por p:%d\n",*p);


    return 0;

}
