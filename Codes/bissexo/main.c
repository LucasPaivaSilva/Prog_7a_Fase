#include <stdio.h>
#include <stdlib.h>

int main()
{
    int in, out;
    scanf("%d", &in);
    out = eh_bissexto(in);
    printf("%d", out);
    return 0;
}

int eh_bissexto(int ano)
{
    if ((ano%4 == 0)&&(ano%100!=0)){
        return 1;
    }else if (ano%400 == 0){
        return 1;
    }else{
        return 0;
    }
}
