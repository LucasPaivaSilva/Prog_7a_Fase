#include <stdio.h>
int main()
{
    int i=7, j=13, *p, *q = &j;
    p = &i;
    i++;
    j = *p + *q;
    q = p;
    i = *q;
    printf("%d %d", i, j);
    return(0);
}
