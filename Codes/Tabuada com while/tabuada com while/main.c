#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num;
    int x;
    printf("Digite um numero\n");
    scanf("%d", &num);
    for(x =1; x<=10; x++){
        printf("%d x %d = %d\n", num, x, num*x);
    }
    return 0;
}
