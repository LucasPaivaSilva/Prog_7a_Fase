#include <stdio.h>
#include <stdlib.h>

int main()
{
    int nv[3] = {0, 4, 17};
    int *p = nv;
    printf("1. p aponta para %p\n", p);
    p++;
    printf("2. p aponta para %p\n", p);
    (*p)++;
    printf("3. O valor apontdo por p: %d\n", *p);
    printf("4. O valor apontado por p: %d\n", *(p++));
    printf("5. O valor apontado por p: %d\n", *p);
    return 0;

}
